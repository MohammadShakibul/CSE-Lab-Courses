#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Element number-"<<endl;
cin>>n;
int weight[n];
cout<<"Enter Element weight unit-"<<endl;
for(int i=0;i<n;i++){
     cin>>weight[i];
}

int price[n];
cout<<"Enter Element's Price rate-"<<endl;
for(int i=0;i<n;i++){
     cin>>price[i];

}
for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
          if (price[i]<price[j]){
               swap(price[i],price[j]);
               swap(weight[i],weight[j]);
          }
     }
}
cout<<"Element's sorted weight- "<<endl;
for(int i=0;i<n;i++){
     cout<<weight[i]<<" ";


}
cout<<endl;

cout<<"Element's sorted price- "<<endl;
for(int i=0;i<n;i++){
     cout<<price[i]<<" ";

}
cout<<endl;

int capacity;
cout<<"Enter Bag capacity-"<<" ";
cin>>capacity;

int total=0;
     for(int i=0;i<n;i++)
     {
          if(capacity==0) break;
          if(capacity>0){
              if(weight[i]<=capacity){
               capacity-=weight[i];
               total+=(weight[i]*price[i]);
              }
              else{
               total+=capacity*price[i];
               capacity=0;
              }



          }

     }
          cout<<"Total is "<<" ";
        cout<<total<<" ";
}

