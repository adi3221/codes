#include<bits/stdc++.h>
using namespace std;
int maximumSumSubarray(int k, vector<int> &Arr , int N){
        vector<int> pre(N);
        pre[0]=Arr[0];
        for(int i=1;i<N;i++){
            pre[i] = pre[i-1]+Arr[i];
        }
        int sum = pre[k-1];
        for(int i=1;i<=(N-k);i++){
            int l = i;
            int r = i+k-1;
            int sum_new = pre[i+k-1]-pre[i-1];
            if(sum_new > sum ){
                sum = sum_new;
            }
        }
        return sum;
        // code here 
    }

int main(){
    int n=4;
    int k=2;
    vector<int> arr={100,200,300,400};
    int ans = maximumSumSubarray(k,arr,n);
    cout<<ans<<endl;
    return 0;
}