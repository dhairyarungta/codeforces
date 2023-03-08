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
    vector<string>a(n);
    for (auto &i:a)cin>>i;

    unordered_set<string>st;
    map<ll,string>mp;
    ll num =0;
    for (int i =n-1;i>=0;i--){
        if(st.count(a[i])==0){
            mp[num]=a[i];
            st.insert(a[i]);
            num++;
        }
    }
    for (auto [i,j]:mp )cout<<j<<"\n";
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