#include <iostream>
using namespace std;
void insertion_sort(int a[],int length);
int main() {
    cout << "Insertion Sort";
    int a[]={4,6,8,7,9,0,2,3,1};
    int length=sizeof(a)/sizeof(a[0]);
    insertion_sort(a,length);
    for (int i=0;i<length;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}

void insertion_sort(int a[],int length){
    for (int i=1;i<length;i++){
        int key=a[i];
        int j=i-1;
        while (j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
        for (int i=0;i<length;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
        
       
    }
}

