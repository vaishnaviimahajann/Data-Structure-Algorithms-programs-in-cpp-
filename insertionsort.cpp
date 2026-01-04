#include<iostream>
using namespace std;
void insertionsort(int*arr,int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>0&&prev>curr)
        {
            int temp=arr[prev+1];
            arr[prev+1]=arr[prev];
            arr[prev]=temp;
            prev--;
        }
        arr[prev+1]=curr;
        
        cout<<"sorted array is: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int arr[5]={5,4,3,2,1};
    insertionsort(arr,5);

    return 0;
}