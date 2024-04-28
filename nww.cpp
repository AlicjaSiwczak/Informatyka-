#include<iostream> 
using namespace std; 
int main() { 
int w; 
cout<<"Podaj szukana"; 
cin>>w;
 cout<<"Czynniki pierwsze szukanej "<<w<<": "; 
 int a=2; 
 while(w>1) {
  while(w%a==0) { 
  cout<<a<<" ";
   w/=a; 
   }
    ++a;
     } 
     return 0; }