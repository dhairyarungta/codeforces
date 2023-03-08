#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fr(i,a,b) for (int i =a;i<b;i++)
#define loop(x,n) for (int x = 0;x<n;++x)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()

using namespace std;

void precal(){

}

void solve (){
    ll n,b;
    cin>>n>>b;
    vector<ll>a(n);
    // for (int i =0;i<n;i++){
    //     cin>>a[i];
    // }
    if(n%2==1){
        cout<<0;
        return;
    }

    for (auto &i:a)cin>>i;
    ll totaleven =0, totalodd=0;
    for (auto i:a){
        i%2==0?totaleven++:totalodd++;
    }

    ll even = 0;
    ll odd = 0;

    a[0]%2==0?(even++,totaleven--):(odd++,totalodd--);
    // cout<<totaleven<<" "<<totalodd<<"this \n";

    map<ll,ll>mp;
    for (int i =1 ;i<n-1;i++){
        a[i]%2==0?(even++,totaleven--):(odd++,totalodd--);
        // cout<<"even : "<<even<<"  odd : "<<odd;
        // cout<<" totaeven : "<<totaleven<<"  totalodd : "<<totalodd<<"\n\n";

        if(even==odd && totaleven==totalodd){
            mp[abs(a[i]-a[i+1])]++ ;
        }
    }
    // cout<<mp.size()<<"this";/
    ll num = 0;
    for(auto [i,j]:mp){
        if(i*j<=b){
            num+=j;
            b-=i*j;
        }
        else {
            while(b>=i){
                b-=i;
                num++;
            }
        }
    }
    cout<<num<<"\n";
}

int main(){
    fast_io;
    cout<<fixed;
    cout<< setprecision(10);
    precal();
    int t =1;
    // cin>> t ;
    for (int i =1;i<=t;i++){
        // cout<< "Case #"<<i<<": ";
        solve();
    }

    return 0;

}