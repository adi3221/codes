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
    int n;
    cin>>n;
    int p = n;
    vector<int> v;
    while(p>9){
        int ld = p%10;
        v.push_back(min(ld,9-ld));
        p=p/10;
    }
    int ld = p%10;
    if(ld==9){
        v.push_back(9);
    }
    else{
        v.push_back(min(ld,9-ld));
    }
    reverse(v.begin(),v.end());
    for(auto m:v){
        cout<<m;
    }
}

//................................