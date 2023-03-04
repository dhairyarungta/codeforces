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
    ll n;

    vector<ll>vis(1000,0);
    vector<pair<ll,ll>>a(1000);

void precal(){

}
void dfs (ll num){
    vis[num]=1;
    for (int i =0;i<n;i++){
        if(vis[i])continue;

        if(a[i].first==a[num].first || a[i].second==a[num].second){
            dfs(i);
        }
    }
}
void solve (){
    cin>>n;
    for (auto &i:a){
        cin>>i.first;
        cin>>i.second;
    }
    
    //answer is counting the number of 
    //connected graph components
    ll count=-1;
    for (int i =0;i<n;i++){
        if(vis[i])continue;
        dfs(i);
        count++;
    }

    cout<<count<<endl;
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