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
    int a[3];
    int i=0;
    while(i<3){
        cin>>a[i];
        i++;
    }
    sort(a,a+3);
    // for(int i=0;i<3;i++){
    //     cout<<a[i]<<' ';
    // }
    // cout<<endl;
    // int ans = a[2]-a[1]+a[1]-a[0];
    cout<<(a[2]-a[0]-a[1]+a[1])<<endl;
}

//................................