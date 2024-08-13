#include<iostream>
using namespace std;

int main(){
   int arr[20],i,j,n,current;
   cout<<"enter the number of the arrary";
   cin>>n;
   cout<<"enter the elements of the array";
   for(i=0;i<n;i++){
    cin>>arr[i];
   }
   for(i=1;i<n;i++)
   {
    current=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>current){
        arr[j+1]=arr[j];
        j=j-1;

    }arr[j+1]=current;
   }
   cout<<"sorted array:"<<endl;
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }

   return 0;


}