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
    int n ,r;
    cin>>n>>r;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int mn_ele = *min_element(a,a+n);
    int c[n];
    for(int i=0;i<n;i++){
        c[i]=a[i]-b[i];
    }
    
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(c[i],i));
    }
    sort(v.begin(),v.end());
    int ans=0;
    int i=0;
    while(r>=mn_ele){
        int x = r-b[v[i].second];
        ans = ans + (x/v[i].first);
        i++;
        r=r-x;
    }
    // int x =r-b[ind];
    // ans = ans+(x/mn);
    // r=r-x;
    
    cout<<ans<<endl;

}

//................................