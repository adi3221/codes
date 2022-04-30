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
        arr[i]=arr[i]%2;
    }
    int ans = INT_MAX;
    vector<int> zeros(n+1,0),ones(n+1,0);
    for(int i=0;i<n;i++){
        ones[i+1]=ones[i]+arr[i];
        zeros[i+1]=i+1-ones[i+1];
    }
    if(arr[0]%2==0 && arr[n-1]%2==0){
        cout<<zeros[n]-1<<endl;
    }
    else if(arr[0]%2!=0 && arr[n-1]%2!=0){
        cout<<ones[n]-1<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[0]==arr[i]){
                if(arr[0]==0){
                ans=min(ans,zeros[i]+ones[n]-ones[i+1]);
                }
                else{
                    ans=min(ans,ones[i]+zeros[n]-zeros[i+1]);
                }
            }
        }
        cout<<ans<<endl;
    }
}

//................................