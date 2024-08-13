//continue:- it is use to skip the that iteration which satisfy the condittion.
//break:- it terminate the statement if it satisfies the condition.

#include<iostream>
using namespace std;

int main(){

cout<<"printing all the number which is not divisible by 3 between 1 to hundred";
int i ;
for (i=1;i<+100;i++){
    if(i%3==0){
        continue;
    
    }
    cout<<i<<endl;
}

cout<<"number enter karo jiske bich me prime number find karna hai";
int m,n,j;
cin>>m>>n;
for(j=m;j<=n;j++)
{
    int div=2;
    for(div=2;div<=j;div++){
        if(j%div==0){
            break;
        }
    }
    if (div==j){
        cout<<j<<endl;
    }
}

}