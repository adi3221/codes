// @author: adi_1868
#include <bits/stdc++.h>
using namespace std;
typedef                                long long ll;
typedef                                long double ld;
#define endl                       "\n"
#define ioss                        ios::sync_with_stdio(false);cin.tie(0);
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front

double startTime;

double gct()//get_current_time
{
    return ((double)clock()-startTime)/CLOCKS_PER_SEC;
}

void adi();

signed main()
{

    ioss

    //startTime=(double)clock();

    //freopen("shell.in","r",stdin);freopen("shell.out","w",stdout);

    //cout << setprecision(15) << fixed;

    int t = 1;

    //cin>>t;

    for(int i=1;i<=t;i++)
    {

        //cout<<"Case #"<<i<<": ";

        adi();
    }

    return 0;

}

//...............................


//...............................

void adi(){
    string s = "pwwkew";
    string str;
        // char c = s[0];
        str.push_back(s[0]);
        int ans = 1;
        for(int i=1;i<s.length();i++){
            size_t found = str.find(s[i]);
            if(found!=string::npos){
                int x = str.length();
                ans=max(ans,x);
                // cout<<str<<endl;
                str.erase(0,found);
                // cout<<str<<endl;
            }
            else{
                // char c = c[i];
                str.push_back(s[i]);
            }
        }
    cout<<ans<<endl;
}

//................................