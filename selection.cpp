#include<iostream>
using namespace std;



int selection(int arr[],int n){

    int i,temp,j;
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
}for (i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
}
int main(){
    int arr[24],n,i;

    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The sorted array:using selection sort"<<selection(arr,n)<<endl;


}