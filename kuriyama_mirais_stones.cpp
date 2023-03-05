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

    ll n;
    cin>>n;
    
    vector<ll>v(n);
    for(auto &i:v)cin>>i;
    vector<ll>u = v;
    sort(all(u));
    for (int i = 1;i<n;i++){
        v[i]+=v[i-1];
        u[i]+=u[i-1];
    }
    
    ll m;
    cin>>m;
    while(m--){
        ll type ,l,r;
        cin>>type>>l>>r;
        ll ans = 0;

        if(type==1){
            if(l!=1)
            ans = v[r-1]-v[l-2];
            else 
            ans=v[r-1];
        }
        else {
            if(l!=1)
            ans = u[r-1]-u[l-2];
            else 
            ans = u[r-1];
        }
        cout<<ans<<"\n";
    }
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