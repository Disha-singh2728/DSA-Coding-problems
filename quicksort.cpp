#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int left,int right){
  int key=a[right];
  int i=(left-1);
  for (int j = left; j <= right - 1; j++) 
    {  
        if (a[j] < key) 
        { 
            i++;  
            swap(a[i], a[j]); 
        } 
    } 
    swap(a[i + 1], a[right]); 
    return (i + 1);
}
void quicksort(int a[],int left,int right){
    if(left<right)
    {
      int pi=partition(a,left,right);
      quicksort(a,left,pi-1);
      quicksort(a,pi+1,right);
    }
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];
quicksort(a,0,n-1);
for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}