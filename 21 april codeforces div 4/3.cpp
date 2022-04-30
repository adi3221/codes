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
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int odd = arr[1]%2;
    int even = arr[2]%2;
    bool flag=false;
    if(n==2){
        cout<<"YES"<<endl;
    }
    else{
        for(int i=3;i<=n;i++){
            if(i%2==0){
                if(even!=arr[i]%2){
                    cout<<"NO"<<endl;
                    flag=true;
                    break;
                }
            }
            else{
                if(odd!=arr[i]%2){
                    cout<<"NO"<<endl;
                    flag=true;
                    break;
                }
            }
        }
        if(flag==false){
            cout<<"YES"<<endl;
        }
    }
}

//................................