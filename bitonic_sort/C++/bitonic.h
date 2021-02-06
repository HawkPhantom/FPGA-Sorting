#ifndef BITONIC_H
#define BITONIC_H

#include<bits/stdc++.h> 
#include<iostream>
#include <algorithm>
using namespace std; 

class bitonic{
	
	public:
		void compAndSwap(int a[], int i, int j, int dir);
		void bitonicMerge(int a[], int low, int cnt, int dir); 
		void bitonicSort(int a[],int low, int cnt, int dir);
		void sort(int a[], int N, int up); 
		bitonic(int a[]);
		 
	private:
		int b[];
};

bitonic::bitonic( int a[]) {
	for(int i=0; i<((sizeof(a)/sizeof(*a)-1)); ++i)
        b[i] = a[i];
}
  
void bitonic::compAndSwap(int a[], int i, int j, int dir) 
{ 
    if (dir==(a[i]>a[j])) 
        swap(a[i],a[j]); 
} 
  
void bitonic::bitonicMerge(int a[], int low, int cnt, int dir) 
{ 
    if (cnt>1) 
    { 
        int k = cnt/2; 
        for (int i=low; i<low+k; i++) 
            compAndSwap(a, i, i+k, dir); 
        bitonicMerge(a, low, k, dir); 
        bitonicMerge(a, low+k, k, dir); 
    } 
} 
  
void bitonic::bitonicSort(int a[],int low, int cnt, int dir) 
{ 
    if (cnt>1) 
    { 
        int k = cnt/2; 
  
        bitonicSort(a, low, k, 1); 
  
        bitonicSort(a, low+k, k, 0); 
  
        bitonicMerge(a,low, cnt, dir); 
    } 
} 
  
void bitonic::sort(int a[], int N, int up) 
{ 
    bitonicSort(a,0, N, up); 
} 
  

#endif
