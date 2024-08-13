#include<iostream>
using namespace std;

int fact(int n){
    int factl=1;
     for(int i=2;i<=n;i++){
        factl*=i;

     }return factl;

}
int main(){
    int n,i,j;
    cin>>n;
   for (i=0;i<=n;i++){
    for(j=0;j<=i;j++){
        cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
   }
   cout<<endl;

   }
}