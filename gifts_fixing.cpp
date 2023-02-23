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
    int n ;
    cin>>n;
    vector<int> a(n), b(n);
    for (auto &i :a)cin>>i;
    for (auto &i :b) cin>>i;

    auto aiter = min_element(a.begin(),a.end());
    auto biter = min_element(b.begin(),b.end());
    int amin = *aiter;
    int bmin = *biter;

    ll ans = 0;
    
    for (int i =0;i<n;i++){
        a[i]-=amin;
        b[i]-=bmin;
    }
    // for(auto i:a)cout<<i<<" ";
    // for (auto i :b)cout<<i<<" ";
    for (int i =0;i<n;i++){ 
        // if(a[i]==0 || b[i]==0){
        //     ans+=b[i]+a[i];

        // }
        // else {
        //     ans+=min(a[i],b[i])+max(a[i],b)
        // }
        
        ans += max(a[i],b[i]);
    }
    cout<<ans<<"\n";

}

int main(){
    fast_io;
    cout<<fixed;
    cout<< setprecision(10);
    precal();
    int t =1;
    cin>> t ;
    for (int i =1;i<=t;i++){
        // cout<< "Case #"<<i<<": ";
        solve();
    }

    return 0;

}