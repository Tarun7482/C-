#include<iostream>
using namespace std;

int main(){

  cout<<"enter the number starting and ending to sum";
  int m,n;
  cin>>m>>n;
  int sum=0;
  for(int i=m;i<=n;i++){
    sum+=i;
  }
  cout<<"the sum of the number between given number is ";
  cout<<sum;

  return 0;

}