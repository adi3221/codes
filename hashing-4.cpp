#include<bits/stdc++.h>
using namespace std;

// pre-fix sum and hashing techniques
int main(){
    int n;
    cin>>n;
    vector<int > v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    bool flag = false;
    int pre_sum=0;
    unordered_set <int> s;
    for(int i=0;i<n;i++){
        pre_sum += v[i];
        if(s.find(pre_sum)!=s.end()){
            cout<<"YES";
            flag = true;
            break;
        }
        if(pre_sum==0){
            cout<<"YES";
            break;
        }
        s.insert(pre_sum);
    }
    if(flag==false){
        cout<<"NO";
    }
    return 0;
}