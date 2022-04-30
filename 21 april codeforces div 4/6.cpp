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
    int n,m;
    cin>>n>>m;
    vector<vector<char>>arr(n);
    char get;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>get;
            arr[i].push_back(get);
        }
    }
    for(int j=0;j<m;j++){
        int a=n-1,b=j;
        // bool flag=false;
        for(int i=n-1;i>=0;i--){
            if(arr[i][j]=='.'){
                a=max(i,a),b=j;
            }
            else if(arr[i][j]=='o'){
                a=i-1,b=j;
            }
            else if(arr[i][j]=='*'){
                arr[i][j]='.';
                arr[a][b]='*';
                --a,b=j;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

}

//................................