#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        char c;
        cin>>c;
        vector<int> v;
        bool flag = false;
        if(s.find(c)==false){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<s<<endl;
        if(s[0]==c || s[s.size()-1]==c){
            cout<<"YES"<<endl;
        }
        else{
           for(int i=1;i<s.size()-1;i++){
               if(s[i]==c){
                   v.push_back(i);
               }
           } 
           for(int i=0;i<v.size();i++){
               if(v[i]%2==0){
                   cout<<"YES"<<endl;
                   flag = true;
                   break;
               }
           }
           if(flag==false){
               cout<<"NO"<<endl;
           }
        }
    }
    
	// your code goes here
	return 0;
}
