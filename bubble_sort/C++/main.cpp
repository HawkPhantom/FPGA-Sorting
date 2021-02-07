#include "bubble.h"
  
int main()  
{  
    int a[] = {1, 23, 12, 33, 4, 55, 66}; 
    int n = sizeof(a)/sizeof(*a);  
    
    bubble bubble1(a);
    bubble1.bubbleSort(a, n);  
    
    cout<<"Sorted array: \n";  
    for (int i = 0; i < n; i++)  
        cout << a[i] << " ";  
    cout << endl;   
    
    return 0;  
}  
