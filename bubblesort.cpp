#include<iostream>
using namespace std;
void bubblesort(int *arr,int n){

    int flag =0;
    for(int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
      if (arr[j]>arr[j+1]){
       int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=1
      }
    }
    if (flag==0){
        break;
    }
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={23,56,75,1,89,99};
    bubblesort(arr,6);
    return 0;
}