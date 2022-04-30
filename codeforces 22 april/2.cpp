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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=false;
    if(n==1){
        cout<<"YES"<<endl;
    }
    else if(n==2){
        if((arr[1]-arr[0])<=3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        // int ct=0;
        if((arr[n-1]-arr[0]-1)<=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}

//................................