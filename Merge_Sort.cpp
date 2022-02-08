#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int  l,int  m,int  r){
    int n1=m-l+1,n2=r-l;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
      left[i]=a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
       right[i]=a[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
      if(left[i]<=right[j])
      {
        a[k]=left[i];
        i++;
        k++;
      }
      else
      {
        a[k]=right[j];
        j++;
        k++;
      }
    }
    while(i<n1){
         a[k]=left[i]; 
         i++; 
         k++;}
    while(j<n2){
         a[k]=right[j];
         j++;
         k++;}
}
void mergesort(int a[],int  begin,int  end)
{ if(end>begin)
   {
       int mid=begin+(end-begin)/2;
       mergesort(a,begin,mid);
       mergesort(a,mid+1,end);
       merge(a,begin,mid,end);
   }

}
int main(){
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
 cin>>a[i];
mergesort(a,0,n-1);
for(i=0;i<n;i++)
 cout<<a[i]<<" ";
return 0;
}