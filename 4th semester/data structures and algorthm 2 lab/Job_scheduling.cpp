#include<iostream>
using namespace std;
int main()
{
    int n=7,totaltime=5;
    cout<<"Total Number of Jobs: "<<endl;
    cin>>n;
    cout<<"Total time slot: "<<endl;
    char job_name[n];
    int time[7]={3,2,1,5,4,2,3};
    int reward[7]={5,13,5,15,8,7};
    for(int i=0;i<n;i++){
        cout<<"Job name:";
        cin>>job_name[i];
        cout<<"Deadline:";
        cin>>time[i];
        cout<<"Reward:";
        cin>>reward[i];
        }
        for(int i=0;i<n;i++){
            cout<<"Job name:"<<job_name[i];
            cout<<"\tDeadline:"<<time[i];
            cout<<"\tReward:"<<reward[i]<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if (reward[i]>reward[j]){
                    swap(reward[i],reward[j]);
                    swap(deadline[i],time[j]);
                    swap(job_name[i],job_name[j]);
                }
            }
        }
        cout<<endl;
        cout<<"After Sorting-"<<endl;
        for(int i=0;i<n;i++){
            cout<<"Job name:"<<job_name[i];
            cout<<"\tDeadline:"<<time[i];
            cout<<"\tReward:"<<reward[i]<<endl;
        }
int total_reward=0;
int time_slot[totaltime];
for(int i=0;i<totaltime;i++){
    time_slot[i]=-1;
    }

    for(int i=0;i<n;i++){
        for(int j=time[i]-1;j>=0;j--){
            if(time_slot[j]==-1){
                time_slot[j]=i;
                total_reward+=reward[i];
        break;
            }
        }
    }
    cout<<"Job Scheduling-"<<endl;
    for(int i=0;i<totaltime;i++){
        if (time_slot[i]==-1)
            cout<<" * ";
        else
            cout<<job_name[time_slot[i]]<<" ";
    }
    cout<<"\n Total Reward:"<<total_reward;
}

