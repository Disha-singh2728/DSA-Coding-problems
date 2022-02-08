#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(int a[],int n){
int key;
  for(int i=0;i<n-1;i++){
      key=i;
    for(int j=i+1;j<n;j++){
     if(a[key]>a[j])
       swap(a[key],a[j]);
    } 
   }
}
int main(){
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
 cin>>a[i];
Selection_Sort(a,n);
for(i=0;i<n;i++)
 cout<<a[i]<<" ";
return 0;
}