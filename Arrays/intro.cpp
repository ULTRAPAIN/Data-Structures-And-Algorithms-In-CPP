#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    // int arr[5];
    // char arr1[5];
    // bool arr2[5];
    // cout<<arr<<endl;
    // cout<<arr1<<endl;
    // cout<<arr2<<endl;

    int doublearr[5];
    //Taking input from the user 
    cout<<"Enter the elements of the array"<<endl;
    for(int i =0;i<5;i++){
        cin>>doublearr[i];
    }
    //printing the elements of the array
    for(int i=0;i<5;i++){
        cout<<doublearr[i]<<" ";
    }
    cout<<endl;
    //printing the double size of the elements from the above array
    cout<<"New array with double size of the elements"<<endl;
    for(int i=0;i<5;i++){
        cout<<doublearr[i]*2<<" ";
    }
}