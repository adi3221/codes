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

    cin>>t;

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
    
    string s;
    cin>>s;
    int n = s.length();
    bool ans=false;
    if(n==1){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0;i<n;){
            int a=0;
            int b=0;
            if(s[i]=='a'){
                while(i<n&&s[i]=='a'){
                    a++;
                    i++;
                    // cout<<i<<' ';
                }
                if(a<2){
                    ans=true;
                    break;
                }
                // cout<<i<<endl;
            }
            else if(s[i]=='b'){
                // cout<<i<<endl;
                while(i<n&&s[i]=='b'){
                    b++;
                    i++;
                }
                // cout<<b<<endl;
                if(b<2){
                    ans=true;
                    break;
                }
            }
        }
        if(ans==true){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}

//................................