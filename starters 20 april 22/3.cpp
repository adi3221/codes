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
    int x;
    cin>>x;
    vector<int> v,pre;
    sort(arr,arr+n);
    int count=1;
    for(int i=0;i<n;i++){
        if(arr[1]==arr[i+1]){
            count++;
        }
        else{
            v.push_back(count);
            count=1;
        }
    }
    for(auto m:v){
        cout<<m<<' ';
    }
    cout<<endl;
    int ans=0;
    int i=0;
    int sz=v.size();
    pre[0]=v[0];
    for(int j=1;j<v.size();j++){
        pre[i]=pre[i-1]+v[i];
    }
    ans = ans+(pre[0]*(n-pre[0]))+1;
    cout<<ans;
    // while(i!=sz){
    //     ans=ans+(n-pre[i])
    // }
}

//................................