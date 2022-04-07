#include<bits/stdc++.h>
using namespace std;


int solve(int arr[], int n){
    replace(arr,arr+n,0,-1);
    unordered_map<int,int> mp;
    int pre_sum = 0;
    int res = 0;
    for(int i=0;i<n;i++){
        pre_sum += arr[i];
        if(pre_sum == 0){
            res = i+1;
        }
        if(mp.find(pre_sum-0)==mp.end()){
            mp.insert({pre_sum,i});
        }
        if(mp.find(pre_sum-0)!=mp.end()){
            res = max(res, i-mp[pre_sum]);
        }
    }
    return res;
}
int main(){
    int arr[]={1,0,1,1,1,0,0};
    int n = 7;
    int ans = solve(arr,n);
    cout<<ans;
    return 0;
}
