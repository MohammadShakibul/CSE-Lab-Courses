#include<iostream>
using namespace std;
int main()
{
    int n,time;
    cout<<"Total Number of Jobs: "<<endl;
    cin>>n;
    cout<<"Total time slot: "<<endl;
    cin>>time;
    char job_name[n];
    int deadline[n],reward[n];
    for(int i=0;i<n;i++){
        cout<<"Job name:";
        cin>>job_name[i];
        cout<<"Deadline:";
        cin>>deadline[i];
        cout<<"Reward:";
        cin>>reward[i];
        }
        for(int i=0;i<n;i++){
            cout<<"Job name:"<<job_name[i];
            cout<<"\tDeadline:"<<deadline[i];
            cout<<"\tReward:"<<reward[i]<<endl;
        }
}
