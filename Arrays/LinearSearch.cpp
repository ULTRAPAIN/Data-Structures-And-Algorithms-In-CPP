#include<iostream>
using namespace std;

bool find(int arr[],int size, int key){
    //Linear search
    for(int i=0 ; i<size ; i++){
        if(arr[i]==key){
            cout<<"Element found at index: "<<i<<endl;
            return true;
        }
    }
    return false;
    
    //Time complexity: O(n)
    //Space complexity: O(1)
    //Best case: O(1)
}
int main(){
    int arr[5]={10,3,5,7,2};
    int size = 5;
    cout<<"Enter the key to search: ";
    int key;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"";
    }
    else{
        cout<<"Element not found"<<endl;
    }
}