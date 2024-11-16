#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> graph[5];
int edge, n1,n2;
cin>>edge;

for(int i=0;i<edge;i++){
    cin>>n1>>n2;
    graph[n1].push_back(n2);
    graph[n2].push_back(n1);
}
for (int i=0;i<5;i++)
{
    cout<<"Node "<<i<<":";
    for(int j=0;j<graph[i].size();j++){
        cout<<graph[i][j]<<" ";
    }
    cout<<endl;
}
}
