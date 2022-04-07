#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum;
    cin>>n>>sum;
    int x;
    // wrong solution
    // unordered_set<int> s;
    // for(int i=0;i<n;i++){
    //     cin>>x;
    //     s.insert(x);
    // }
    bool flag = false;
    // for(auto x:s){
    //     if(s.find(sum-x)!=s.end()){
    //         cout<<"YES";
    //         flag = true;
    //         break;
    //     }
    // }
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(s.find(sum-x)!=s.end()){
            cout<<"YES";
            flag=true;
            break;
        }
        s.insert(x);
    }
    if(flag==false){
        cout<<"NO";
    }
    
}