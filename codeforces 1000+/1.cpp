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
    int n,m,a;
    cin>>n>>m>>a;
    int ans =0;
    int x,y;
    (n%a==0)?x=(n/a):x=(n/a)+1;
    if(m>0){
        if(m%a==0){
            y=(m/a);
        }
        else{
            y=(m/a)+1;
        }
    }
    // y=y*(x-1);
    ans=ans+(x*y);
    cout<<ans<<endl;
}

//................................