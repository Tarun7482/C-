#include<iostream>
using namespace std;

int main()
{

int bt[20],wt[20],tat[20],n,i;
int avgtat,avgwt;
cout<<"Enter the number of processes: ";
cin>>n;
for(i=0;i<n;i++){
    cout<<"Enter the burst time of process "<<i<<": ";
    cin>>bt[i];
    
    }
    wt[0]=avgwt=0;
    tat[0]=avgtat=bt[0];
    for(i=1;i<=n;i++){
        
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=wt[i]+bt[i];
        avgwt+=wt[i];
        avgtat+=tat[i];
    }
    avgwt/=n;
    avgtat/=n;
    cout<<"Process\tBurst Time\tWaiting Time\tTurnaround Time"<<endl;
    for(i=0;i<n;i++){
        cout<<i<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t"<<tat[i]<<endl;
    }
    cout<<"Average waiting time:"<<avgwt;
    cout<<"Average turnaround time:"<<avgtat;
        

return 0;
}