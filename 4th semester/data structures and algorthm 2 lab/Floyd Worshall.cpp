#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes;
    cin >> nodes;
    int graph[nodes][nodes];
//Initializing adjacency matrix
    for(int i=0; i<nodes; i++)
    {
        for (int j=0; j<nodes; j++)
        {
            if(i==j)
                graph[i][j]=0;
            else
                graph[i][j]=99999;
        }
    }
    int edges;
    cin>>edges;
    for(int i=0; i<edges; i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        graph[a][b]=w;
    }
//Displaying the adjacency matrix.
    cout<< "Initial Adjacency Matrix:"<< endl;
    for(int i=0; i<nodes; i++)
    {
        for (int j=0; j<nodes; j++)
        {
            if(graph[i][j]==99999)
                cout<< "x"<< "\t ";
            else
                cout<<graph[i][j]<<" \t ";
        }
        cout << endl;
    }
    for(int k=0; k<=(nodes-1); k++)
    {
        for (int i=0; i<=(nodes-1); i++)
        {
            for(int j=0; j<=(nodes-1); j++)
            {
                graph[i][j]=min((long)graph[i][j],(long)graph[i][k]+graph[k][j]);
            }
        }
    }
    cout<< "Final Adjacency Matrix:"<< endl;
    for(int i=0; i<nodes; i++)
    {
        for (int j=0; j<nodes; j++)
        {
            if(graph[i][j]==99999)
                cout<< "x"<< " ";
            else
                cout<<graph[i][j]<<" \t ";
        }
        cout << endl;
    }
}
