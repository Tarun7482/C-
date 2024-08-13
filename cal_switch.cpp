#include<iostream>
using namespace std;

int main(){

cout<<"enter the number to calculate";
int m,n;
cin>>m>>n;
cout<<"enter the operation to operate of these given number";
char op;
cin>>op;
switch(op){
case '+':
cout<<"the sum of these number is "<<m+n;
break;
case '-': 
cout<<"the difference of these number is "<<m-n;
break;
case '*':
cout<<"the product of these number is "<<m*n;
break;
case '/':
cout<<"the quotient of these number is "<<m/n;
break;
default:
cout<<"please enter the valid operator";
break;

return 0;
}


}