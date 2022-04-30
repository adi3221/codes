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

bool checkI(int i, int rb, int rs, int rc, int nb, int ns, int nc, int pb, int ps, int pc, int r){
    //lets first use all the initial ingredients to make (i) hamburgers
        int nb_ = rb*i - nb; //nb_ consists how many breads we still require to make (i) hamburgers
        int ns_ = rs*i - ns; //ns_ consists how many sausages we still require to make (i) hamburgers
        int nc_ = rc*i - nc; //nc_ consists how many cheese we still require to make (i) hamburgers

        //if we do not require one or more ingredients in the recipe, the values (rb*i - nb) or (rs*i - ns)
        //or (rc*i - nc) might become negative. So we assign them back to 0, it wont affect the answer.
        //TEST CASE 2 - recipe - "BBC" and No of Sausage in Kitchen = 10 which is not required at all.
        if(nb_ < 0)
            nb_ = 0;
        if(ns_ < 0)
            ns_ = 0;
        if(nc_ < 0)
            nc_ = 0;

        //lets calculate the price (rubles) to buy the above required ingredients
        int pb_ = nb_ * pb; //pb_ stores the price to buy the required breads to make (i) hamburgers
        int ps_ = ns_ * ps; //ps_ stores the price to buy the required sausages to make (i) hamburgers
        int pc_ = nc_ * pc; //pc_ stores the price to buy the required cheese to make (i) hamburgers

        //lets calculate the total price (rubles) required
        int total = pb_ + ps_ + pc_;

        //if total price required is less than or equal to the rubles i have, then we can make (i) hamburgers
        //else we cannot make (i) or (i+1) or (i+2) ...... ∞ hamburgers and we break
        if(total <= r)
            return true;
        return false;
}


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
    string s;
    cin>>s;
    int nb,ns,nc;
    cin>>nb>>ns>>nc;
    int pb,ps,pc;
    cin>>pb>>ps>>pc;
    int r;
    cin>>r;
    int rb=0,rs=0,rc=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='B'){
            rb++;
        }
        else if(s[i]=='S'){
            rs++;
        }
        else{
            rc++;
        }
    }
    int left=0,right=1e14;
    int ans=0;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(checkI(mid,rb,rs,rc,nb,ns,nc,pb,ps,pc,r)==true){
            ans=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    cout<<ans<<endl;


}

//................................