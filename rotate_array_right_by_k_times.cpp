#include<bits/stdc++.h>
using namespace std;
void Rotatearrayright(int a[],int n,int k){
int loop=k%n;
for(int i=0;i<loop;i++)
 {
    int last=a[n-1];
    for(int j=n-1;j>0;j--)
     a[j]=a[j-1];
    a[0]=last;
 }
}
int main(){
int n,k;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];
cin>>k;
Rotatearrayright(a,n,k);
for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
return 0;
}