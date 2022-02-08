#include<bits/stdc++.h>
using namespace std;
void Reverse_array(int a[],int n){
int i=0,j=n-1;
while(i<j)
  {
    swap(a[i],a[j]);
    i++;
    j--;
  }
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];
Reverse_array(a,n);
for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
return 0;
}