#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int n,arr[20],i;
cout<<"Enter the number of elements in the array: ";
cin>>n;
cout<<"Enter the elements of the array: ";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
  int N=10000;
 int idx[10000];
 for(i=0;i<N;i++){
    idx[i]=-1;
 }
  int minx=__INT_MAX__;
  for(i=0;i<n;i++)
{
  if(idx[arr[i]!=-1]){
    minx=min(minx,arr[i]);
  }else{
    idx[arr[i]]=i;
  }

}
if(minx==__INT_MAX__){
    cout<<"No duplicate element found"<<endl;
}
else{
    cout<<"The smallest duplicate element is "<<minx;
}
return 0;


}