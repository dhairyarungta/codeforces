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
    int n;
    cin>>n;
    vector<int> lookup(n+1);
    for (int i =0;i<n;i++){
        int temp ;
        cin>>temp;
        lookup[temp]=i+1;    
    }
    int m;
    cin>>m;
    vector<int> qer(m);
    for (auto &i :qer)cin>>i;

    ll vas=0, pety=0;
    for(auto i:qer){
        vas+=lookup[i];
        pety+=n-lookup[i]+1;
    }

cout<<vas<<" "<<pety<<"\n";
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