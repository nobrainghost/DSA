"""
General Principle
Merge sort is a divide-and-conquer algorithm that works as follows:
 1. Split Array in half
 2. Call merge sort on each half to sort them recursively
 3. Merge the two sorted halves back together
 {1, 3, 2, 4, 5, 6, 7, 8}
 split into {1, 3, 2, 4} and {5, 6, 7, 8}
    split into {1, 3} and {2, 4} and {5, 6} and {7, 8}
        split into {1} and {3} and {2} and {4} and {5} and {6} and {7} and {8}
            merge {1} and {3} -> {1, 3}
            merge {2} and {4} -> {2, 4}
            merge {1, 3} and {2, 4} -> {1, 2, 3, 4}
            merge {5} and {6} -> {5, 6}
            merge {7} and {8} -> {7, 8}
            merge {5, 6} and {7, 8} -> {5, 6, 7, 8}
            merge {1, 2, 3, 4} and {5, 6, 7, 8} -> {1, 2, 3, 4, 5, 6, 7, 8}
"""

arr=[5, 3, 8, 6, 2, 7, 1, 4]

def merge_sort(arr):
    if len(arr)>1:
        middle_point=len(arr)//2
        left_arr=arr[:middle_point]
        right_arr=arr[middle_point:]

        #Recursion
        merge_sort(left_arr)
        merge_sort(right_arr)

        #Merge
        i=0
        j=0
        k=0
        while i<len(left_arr) and j <len(right_arr):
            if left_arr[i]<right_arr[j]:
                arr[k]=left_arr[i]
                i+=1
                k+=1
            else:
                arr[k]=right_arr[j]
                j+=1
                k+=1
        while i<len(left_arr):
            arr[k]=left_arr[i]
            i+=1
            k+=1

        while j<len(right_arr):
            arr[k]=right_arr[j]
            j+=1
            k+=1
merge_sort(arr)
print(arr)

