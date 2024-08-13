#include<iostream>
using namespace std;

int binary(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if (arr[mid]==key){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        
        }else{
            end=mid-1;
        }
   


} return -1;
}


int main()
 { 
    int arr[30],n,key,i;

cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter the elements of array"<<endl;
for(i=0;i<=n;i++)
{
    cin>>arr[i];
}
cout<<"enter the key"<<endl;
cin>>key;
cout<<"sorted array:"<<binary(arr,n,key)<<endl;

return 0;
}


