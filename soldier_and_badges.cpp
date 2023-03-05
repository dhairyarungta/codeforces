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
    for (auto &i:a)cin>>i;
    sort(all(a));

    ll cur = 0;
    ll ans =INT_MAX;
    // for (int val = a[0];val<=3000;val++){
    //     ll prev = val;
    //     for (int i =0;i<n;i++){
            
    //     }
    //     ans=min<ll>(cur,ans);
    // }
    ll prev = a[0];

    for (int i =1;i<n;i++ ){
        ll temp = max<ll>(a[i],prev+1);
        cur+=temp-a[i];
        prev = temp;
        
    }
    cout<<cur;
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