#include<iostream>
using namespace std;

void  bubble(int arr[], int n){
    int i,j,temp;
    for (i=0;i<n-1;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;}
        }
    }for (i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
}

int main(){
    int arr[30],n,i;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"enter the element of the array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The sorted array using bubble sort:"<<endl;
    bubble(arr,n);
    return 0;
}