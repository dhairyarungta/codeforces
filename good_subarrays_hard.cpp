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
vector<ll>a(n,0);
vector<ll>dp(n,1);
vector<ll> track(n,0);


void precal(){
    for (int i =1;i<n;i++){
        dp[i]= min(1+dp[i-1],a[i]);
    }

    ll tempsum=0;
    for (int i =0 ;i<n;i++){
        tempsum+=dp[i];
        track[i]=tempsum;
    }
}

void solve(){
    ll n;
    cin>>n;
    // vector<ll>a(n);
    for(auto &i:a)cin>>i;
    ll q;
    cin>>q;
    vector<pair<ll,ll>>que(q);
    for (auto &[i,j]:que){
        cin>>i;
        cin>>j;
    }

    for (auto [i,j]:que){
        vector<ll>temp = a;
        temp[i-1]=j;
        vector<ll>adp = dp;
        adp[i-1]=min(dp[i-2]+1,temp[i-1]);
        for (int k = i;k<n;k++){
            adp[k] = 
        }
        ll ans  =track[i-2];

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
