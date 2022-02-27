#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    int n1,n2;
    int x;
    cin>>n1>>n2;
    for(int i=0;i<n1;i++){
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<n2;i++){
        cin>>x;
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}