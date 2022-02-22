#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n==1){
        cout<< 1<<" ";
        return ;
    }
    cout<<n<< " ";
    solve(n-1);

}

int main(){
    int n;
    cout<<"Enter your number"<<" ";
    cin>>n;
    solve(n);
}