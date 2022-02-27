#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> v, int count){
    for(int i=1;i<v.size();i++){
        swap(v[0],v[count]);
        for(int j=0;j<v.size();j++){
            cout<<v[j]<<' ';
        }
        cout<<endl;
        count++;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for( int i=1;i<=n;i++){
            v.push_back(i);
        }
        reverse(v.begin(),v.end());
        int count = 1;
        for (int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        solve(v,count);
    }
    return 0;
}