#include<iostream>

using namespace std;

int main(){
     
     int n,arr[20];
     cout<<"Enter the number of elements in the array: ";
     cin>>n;
     cout<<"Enter the elements of the array: ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<"The array is: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
            }
       int  maxn=INT8_MIN;
       int  minn=INT8_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]>maxn)
            maxn=arr[i];
            if(arr[i]<minn)
            minn=arr[i];

            }
            cout<<"The maximum element in the array is: "<<maxn;
            cout<<"The minimum element in the array is: "<<minn;
            


            
            return 0;

}