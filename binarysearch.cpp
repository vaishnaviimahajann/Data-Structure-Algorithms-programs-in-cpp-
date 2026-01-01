#include<iostream>
using namespace std ;
int binaryserach(int arr[],int n,int key)
{
    int start=0,end=0;
    while(start<=end){
        int mid=(start+end)/2;
        if(mid==key){
           return mid;
        }
        else if(key<mid){
            start=mid+1; 
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
   int arr[]={24,67,89,99,101,125};
   int n = sizeof(arr)/sizeof(int);
   cout<<binaryserach(arr,n,45);

    return 0;
}