#include<iostream>
using namespace std;

void numberOfZerosAndNoOfOnes(int arr[],int size){
    int count0=0;
    int count1=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
    }
    cout<<"Number of 0's: "<<count0<<endl;
    cout<<"Number of 1's: "<<count1<<endl;
}

int main(){
    int arr[10]={1,0,1,0,1,0,1,0,1,0};
    int size = sizeof(arr)/sizeof(int);
    numberOfZerosAndNoOfOnes(arr,size);
}