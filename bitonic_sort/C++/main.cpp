#include "bitonic.h"

using namespace std; 

int main() 
{ 
    int a[]= {12, 23, 2, 3, 33, 55, 66, 53}; 
    bitonic bitonic1(a);
    
    
    int N = sizeof(a)/sizeof(a[0]); 
  
    int up = 1;   
    bitonic1.sort(a, N, up); 
  
    printf("Sorted array: \n"); 
    for (int i=0; i<N; i++) 
        printf("%d ", a[i]); 
    return 0; 
} 

