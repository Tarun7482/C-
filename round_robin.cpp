#include<iostream>
using namespace std;

int main(){
int bt[20],wt[20],tat[20],ct[20],max,t,i,n,j;
float awt=0,atat=0,temp=0;
   cout<<"enter the number of the process"<<endl;
   cin>>n;
   for(i=0;i<n;i++){
    cout<<"enter the burst time of the process"<<endl;
    cin>>bt[i];
    ct[i]=bt[i];
   }
   cout<<"enter the size of the time slice:"<<endl;
   max=bt[0];
   for (i=0;i<n;i++){
    if (bt[i]>max){
        max=bt[i];
    }
    }
    for(j=0;j<(max/t)+1;j++){
       for(i=0;i<n;i++){
        if(bt[i]!=0){
            if(bt[i]>t){
                bt[i]=bt[i]-t;
                temp=temp+t;
        }else{
            tat[i]=temp+bt[i];
            wt[i]=temp-bt[i];
            bt[i]=0;

        }
       }

    }

}
for(i=0;i<n;i++){
    


}
}
