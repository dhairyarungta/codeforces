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
    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    ll m;
    cin>>m;
    vector<ll>q(m);
    for (auto &i:q)cin>>i;
    vector<ll>dp(n);
    dp[0]=a[0];
    for (int i =1;i<n;i++){
        dp[i]=dp[i-1]+a[i];
    }
    for (auto i:q){
        auto it = lower_bound(all(dp),i);
        cout<<it-dp.begin()+1<<"\n";
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