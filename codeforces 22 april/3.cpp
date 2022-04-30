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
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sz=x;
    sort(arr,arr+n);
    int check = arr[0];
    int ans=0;
    int last=n;
    int sum=0;
    sum = accumulate(arr,arr+last,sum);
    int j=0;
    int neg=0;
    while(check<=sz &&last>=1){
        // cout<<"sum "<<sum<<endl;
        if(sum>x){
            sum = sum-arr[last-1]-j;
            --last;
            // cout<<"last "<<last<<endl;
        }
        else{
            ans=ans+last;
            // cout<<"ans "<<ans<<endl;
            check++;
            j++;
            sum=sum+(last);
        }
    }
    cout<<ans<<endl;
}
// gave TLE!
//................................