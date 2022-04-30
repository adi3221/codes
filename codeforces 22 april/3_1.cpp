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
    ll n,x;
        cin>>n>>x;
        ll ar[n+3];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        sort(ar+1,ar+n+1);
        ll pre[n+4];
        pre[0]=0;
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+ar[i];
        }
        ll ans = 0;
        for(int i=1;i<=n;i++)
        {
            if(pre[i]>x)break;
            ll dif=x-pre[i];
            ll y = dif/i;
            y++;
            ans+=y*i;
            ans-=(i-1)*y;
        }
        cout<<ans<<endl;
}

//................................