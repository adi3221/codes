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
    int n,k;
    cin>>n>>k;
    if(k==1){
        cout<<"YES"<<endl;
        for(int i=1;i<=n*k;i++){
            cout<<i<<endl;
        }
    }
    else if((n)%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        bool parity =false;
        int x = 1;
        int y= 2;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if(parity==false){
                    cout<<x<<' ';
                    x=x+2;
                }
                else{
                    cout<<y<<' ';
                    y=y+2;
                }
            }
            parity = !parity;
            cout<<endl;
        }
    }

}

//................................