#include <iostream>

int main() {
   
    std::cout << "Selection Sorting";
    int a[]={3,2,1,6,5,4,8,7,9,0};
    int length=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<length-1;i++){
        int min_current=i;
        for(int  j=i+1;j<length;j++){
            if (a[j]<a[min_current]){
                min_current=j;
            }
        }
    if(min_current!=i){
        int temp=a[i];
        a[i]=a[min_current];
        a[min_current]=temp;
    }
    for (int i = 0; i < length; i++) {
        std::cout << a[i] << " "; 
    }
    std::cout << "\n";
    }
     for (int i = 0; i < length; i++) {
        std::cout << a[i] << " "; 
    }
    std::cout << "\n";
    

    return 0;
}
