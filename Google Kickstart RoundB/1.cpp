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


    int t = 1;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int r,a,b;
        cin>>r>>a>>b;
        ld ans;
        ld pie =2 * asin(1.0);;
        // cout<<ans;s
        ans = r*r;
        // bool flag = false;
        int c=r;
        while(c>0){
        
            c = a*c;
            ans = (ans+c*c);
            c=c/b;
            ans=(ans+c*c);
            
            
        }
        cout << setprecision(6) << fixed;
        cout<<"Case #"<<i<<": "<<ld(pie*ans)<<endl;;

       
    }

    return 0;

}

//...............................


//...............................

// void adi(){


// }

//................................