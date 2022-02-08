#include<bits/stdc++.h>
using namespace std;
int fact(int n1){
    if(n1<=1)
      return 1;
    return(n1*fact(n1-1));
}
int fib(int n2){
    if(n2<=1)
      return n2;
    return(fib(n2-1)+fib(n2-2));
}
int main(){
  int n1,n2;
  cin>>n1>>n2;
  cout<<"Factorial of "<<n1<<"is"<<fact(n1)<<endl; 
  cout<<n2<<"th fibonacci no. is "<<fib(n2)<<endl; 
  return 0;
}