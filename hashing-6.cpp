#include<bits/stdc++.h>
using namespace std;

int marlens(int arr[], int n, int sum){
    unordered_map<int,int> m;
    int pre_sum = 0;
    int res = 0;
    for(int i=0;i<n;i++){
        pre_sum += arr[i];
        if(pre_sum == sum){
            res = i+1;
        }
        if(m.find(pre_sum)==m.end()){
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum-sum)!=m.end()){
            res = max(res , i-m[pre_sum-sum]);
        }
    }
    return res;
}
int main(){
    int arr[]={8,3,1,5,-6,6,2,2};
    int n = 8;
    int sum = 4;
    int ans  = marlens(arr,n,sum);
    cout<<ans;
    return 0;
}
// longest subaarray with equal number of 0's and 1's is equal to longest subarray with sum = 0 by replacing 0 with -1.