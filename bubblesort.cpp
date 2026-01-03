#include<iostream>
using namespace std;
void bbubblesort(int *arr,int n){

    
    for(int i=0;i<n;i++){
        int flag =0;
        for (int j=0;j<n-i-1;j++){
      if (arr[j]>arr[j+1]){
       int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
         flag=1;
      }
    }
    if (flag==0){
        break; 
    }
   
    
     cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
}

}
}
int main(){
    int arr[]={3,76,2,12,45,64};
    bbubblesort(arr,6);
    return 0;
}