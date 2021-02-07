#ifndef BUBBLE_H
#define BUBBLE_H

#include <bits/stdc++.h> 
using namespace std; 

class bubble
{
	public:
		void swap(int *xp, int *yp);
		void bubbleSort(int a[],int n);  
		bubble (int a[]);
		
	protected:
		int b[];
};

bubble::bubble(int a[]) {
    for(int i=0; i<((sizeof(a)/sizeof(*a)-1)); ++i)
        b[i] = a[i];
}

void bubble::swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void bubble::bubbleSort(int a[], int n)  
{  
    for (int i = 0; i < n-1; i++)      
      
    for (int j = 0; j < n-i-1; j++)  
        if (b[j] > b[j+1])  
            swap(&b[j], &b[j+1]);  

}  

#endif
