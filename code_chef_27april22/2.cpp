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
    int n;
    cin>>n;
    vector<int>v1,v2,v;
    int get;
    for(int i=0;i<n;i++){
        cin>>get;
        v.push_back(get);
        if(get%2==0){
            v1.push_back(get);
        }
        else{
            v2.push_back(get);
        }
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v1.size()==v2.size()){
        
    }
}

//................................