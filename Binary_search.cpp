#include<bits/stdc++.h>
using namespace std;
int Binary_Search(int a[],int n, int key){
  int low=0,high=n-1,mid;
  while(low<=high){
  mid=low+(high-low)/2;
  if(key==a[mid]) return mid;
  else if(key>a[mid]) low=mid+1;
  else high=mid-1;
  }
  return -1;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
int key;
cin>>key;                  // key to be found in array a with size n
int res2=Binary_Search(a,n,key);
if(res2==-1)
  cout<<"Key not Found";
else
  cout<<"Key found at location "<<res2+1;
return 0;
}