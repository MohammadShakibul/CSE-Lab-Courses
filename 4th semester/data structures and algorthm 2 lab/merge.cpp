#include<iostream>
using namespace std;

int a[8]={57,32,13,100,56,3,120,2};
int mergeArray(int left,int mid,int right)
{
int leftArraySize=mid-left+1;
    int rightArraySize=right-mid;
    int leftArray[leftArraySize],rightArray[rightArraySize];
    for(int i=0; i<leftArraySize;i++)
    {
        leftArray[i]=arr[i+left];
    }

     for(int i=0; i<rightArraySize;i++)
    {
        rightArray[i]=arr[i+mid+1];
    }

    int leftMarker=0, rightMarker=0, arrayMarker= left;
    while(leftMarker<leftArraySize&& rightMarker< rightArraySize){
        if(leftArray[leftMarker] < rightArray[rightMarker]){
            arr[arrayMarker] = leftArray[leftMarker];
            arrayMarker++;
            leftMarker++;
        }
 else{
            arr[arrayMarker] = rightArray[rightMarker];
            arrayMarker++;
            rightMarker++;
        }

    }
while (leftMarker< leftArraySize){
    arr[arrayMarker]= leftArray[leftMarker];
      arrayMarker++;
            leftMarker++;
}
while (rightMarker< rightArraySize){
    arr[arrayMarker] = rightArray[rightMarker];
            arrayMarker++;
            rightMarker++;
}
}

int mergeSort(int left,int right){
if (left>=right)
    return 0;

int mid= left + (right-left)/2;
mergeSort(left,mid);
mergeSort(mid+1,right);
mergeArray(left,mid,right);

}


int main()
{

    mergeSort(0,7);
    for (int i=0;i<=7;i++){
    cout<<arr[i]<<"   ";
    }

}

}
