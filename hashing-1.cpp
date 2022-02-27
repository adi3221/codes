#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {10,20};
    int b[] = {30,20};
    unordered_set<int>p,q;
    unordered_map<int,int> mp;
    for(int i=0;i<2;i++){
        p.insert(a[i]);
    }
    for(int i=0;i<2;i++){
        q.insert(b[i]);
    }
    for(auto x:p){
        mp[x]++;
    }
    for(auto x:q){
        mp[x]++;
    }
    int res = 0;
    for(auto x:mp){
        if(x.second==2){
            res++;
        }
    }
    cout<<res;

    return 0;
}