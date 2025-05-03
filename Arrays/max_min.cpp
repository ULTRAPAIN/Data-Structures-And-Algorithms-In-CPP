#include<iostream>
#include<climits> // to use INT_MIN
using namespace std;

void findMax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0 ; i<size ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum element in the array is: "<<max<<endl;
}

void findMin(int arr[], int size){
    int min=INT_MAX;
    for(int i=0;i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum element in the array is: "<<min<<endl;
}
int main(){
    int arr[10]={1,-2,97,-102,104,456,521,0,45,67};
    int size = sizeof(arr)/sizeof(int);
    findMax(arr,size);
    findMin(arr,size);
}