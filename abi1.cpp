#include<iostream>

using namespace std;

bool isprime(int no){
  if(no<2){return false;}
  else if(no==2){return true;}
  else{
    for(int i=2;i<no;i++){
      if(no%i==0){
        return false;
      }
    }
    return true;
  }
}

int main(){
   int n,n1;
   cin>>n>>n1;
   for(int i=n;i<=n1;i++){
     if(isprime(i)){
       cout<<i<<" ";
     }
   }
   return 0;
}