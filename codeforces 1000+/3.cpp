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
    int s,m,l,xl,xxl;
    cin>>s>>m>>l>>xl>>xxl;
    int k;
    cin>>k;
    string arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }    
    vector<pair<string,int>>v;
    vector<string> str;
    str.push_back("S");
    str.push_back("M");
    str.push_back("L");
    str.push_back("XL");
    str.push_back("XXL");
    v.push_back(make_pair("S",s));
    v.push_back(make_pair("M",m));
    v.push_back(make_pair("L",l));
    v.push_back(make_pair("XL",xl));
    v.push_back(make_pair("XXL",xxl));
    for(int i=0;i<k;i++){
        auto found = find(str.begin(),str.end(),arr[i]);
        bool ans=false;
        if(found!=str.end()){
            int ind = found-str.begin();
            if(v[ind].second>0){
                cout<<v[ind].first<<endl;
                v[ind].second--;
                ans=true;
            }
            else if(ans==false){
                if(ans==false){
                    int indies = ind;
                    int j=1;
                    while(ans==false){
                        if(v[indies+j].second>0 &&(indies+j)<v.size()){
                            cout<<v[indies+j].first<<endl;
                            v[indies+j].second--;
                            ans=true;
                            break;
                        }       
                        else if(v[indies-j].second>0 && (indies-j)>=0){
                            cout<<v[indies-j].first<<endl;
                            v[indies-j].second--;
                            ans=true;
                            break;
                        }
                        else{
                            j++;
                        }
                    }
                }
            }
        }
    }
}

//................................