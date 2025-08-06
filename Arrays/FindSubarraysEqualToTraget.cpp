// To find the subarrays equal to target sum
// Time Complexity: O(n)
// Space Complexity: O(n)   

//by Brute force method the time complexity goes to o(n^3 or n^2) but by using the sliding window technique we can reduce the time complexity to o(n)

#include<bits/stdc++.h>
using namespace std;

void bruteForce(vector<int>&arr, int target, int n){
    for(int i =0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==target){
                for(int k=i;k<=j;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
        }

    }
}
//the above is the brutforce method which has time complexity of o(n^2) but we can reduce it to o(n) by using the sliding window technique
//the sliding window technique is used to find the subarrays of a given array whose sum is equal to the target sum

void OptimalApproach(vector<int>&arr,int target , int n){
    unordered_map<int,int>sumMap;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==target){
            for(int j=0;j<=i;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
            }
        if(sumMap.find(sum-target)!=sumMap.end())
        {
            int startIndex=sumMap[sum-target]+1;
            for(int k=startIndex;k<=i;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        sumMap[sum]=i;
    }
}
int main(){
    vector<int>arr={3,4,-7,1,3,3,1,-4};
    vector<int>arr={3,5,7,1,7,7,1,2};
    cout<<"Enter the target sum: ";
    int target;
    cin>>target;
    int n=arr.size();
    OptimalApproach(arr,target,n);
    OptimalApproach(arr,target,n);
    return 0;
}