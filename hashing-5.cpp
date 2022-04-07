#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    int sum;
    cin>>sum;
    int pre_sum=0;
    bool flag=false;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        cin>>x;
        pre_sum += x;
        if(s.find(pre_sum-sum)!=s.end()||(pre_sum==sum)){
            cout<<"YES";
            flag=true;
            break;
        }
        s.insert(x);
    }
    if(flag==false){
        cout<<"NO";
    }
    return 0;
}