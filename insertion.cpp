#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
int i,j,key;
 for(i=1;i<n;i++)
{ 
   key=a[i];
   j=i-1;
  while(j>=0 && key<a[j])
    {
      a[j+1]=a[j];
      j=j-1;
    }
    a[j+1]=key;
}
}
int main(){
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
 cin>>a[i];
insertion_sort(a,n);
for(i=0;i<n;i++)
 cout<<a[i]<<" ";
return 0;
}