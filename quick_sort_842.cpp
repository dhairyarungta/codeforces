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
    ll n, k;
    cin>>n>>k;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    ll num = 0, cur = 1;
    // vector<ll>index(n+1,0);
    // for (int i =0 ;i<n;i++){
    //     index[a[i]]=i;
    // }

    for (auto i:a){
        if(i==cur){
            cur++;
        }
    }
    cout<<((n-cur+1+k-1)/k)<<"\n";

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