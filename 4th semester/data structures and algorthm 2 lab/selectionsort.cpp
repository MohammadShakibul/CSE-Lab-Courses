#include <iostream>
using namespace std;
int main(){
    int arr[] = {20,5, 6,98,56,3,23,57,87,90,4,7,1,8,9};
    int sizeofarray = sizeof(arr)/sizeof(arr[0]);

    for(int x=0;x<sizeofarray;x++){
    for(int y=x;y<sizeofarray;y++){
        if(arr[x]>arr[y]){
            int temp=arr[y];
        arr[y]=arr[x];
        arr[x]=temp;
        }

    }

    }

    for(int y = 0;y<sizeofarray;y++){
        cout<<arr[y]<<" ";
    }




}

