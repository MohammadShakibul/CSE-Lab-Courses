#include<bits/stdc++.h>
using namespace std;
int arr[]= {30,25,15,5,35,10,20};
int pertition(int low, int high)
{
    int pert=0;
    for(int i=0; i<high; i++)
    {

        if(arr[high]>=arr[i])
        {
            swap(arr[pert],arr[i]);
            pert++;
        }



    }
    swap( arr[pert],arr[high]);
    return pert;
}
int quick(int low,int high)
{
    if(high>low)
    {
        int pivot = pertition ( low, high);
        quick(low, pivot-1);
        quick(pivot+1,high);
    }
}

int main()
{
    int sz = sizeof(arr)/sizeof(0);
    int low=0;
    int high= sz-1;

    for(int i=0; i<sz; i++)
    {

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quick( low, high);

    for(int i=0; i<sz; i++)
    {

        cout<<arr[i]<<" ";
    }

}
