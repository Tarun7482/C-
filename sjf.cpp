#include<iostream>
using namespace std;

int main()
{
int bt[20],wt[20],tat[20],n,i,j,temp,k,p[20];
float avgtat,avgwt;
cout<<"Enter the number of processes: ";
cin>>n;
for (i=0;i<n;i++){
    p[i]=i;
    cout<<"Enter the burst time of process "<<i+1<<": ";
    cin>>bt[i];
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++){
        if(bt[j]>bt[j+1])
        {
        
        temp=bt[j];
        bt[j]=bt[j+1];
        bt[j+1]=temp;

        k=p[i];
        p[i]=p[i+1];
        p[i+1]=k;


        }
    }
}

wt[0]=avgwt=0;
tat[0]=avgtat=bt[0];
for (i=0;i<n;i++){
    wt[i]=wt[i-1]+bt[i];
    tat[i]=wt[i]+bt[i];
    avgwt+=wt[i];
    avgtat+=tat[i];

}

cout<<"Process\t Burst Time\t Waiting Time\t Turnaround Time\n";
for (i=0;i<n;i++){
    cout<<p[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<"\t\t"<<endl;

}
cout<<"average waiting time"<<avgwt/n<<endl;
cout<<"average turnaround time"<<avgtat/n<<endl;
return 0;

}