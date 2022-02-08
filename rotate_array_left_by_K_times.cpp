#include<bits/stdc++.h>
using namespace std;
void Rotatearrayleft(int a[],int n,int k){
int loop=k%n;
for(int i=0;i<loop;i++)
 {
    int first=a[0];
    for(int j=0;j<n-1;j++)
     a[j]=a[j+1];
    a[n-1]=first;
 }
}
int main(){
int n,k;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];
cin>>k;
Rotatearrayleft(a,n,k);
for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
return 0;
}