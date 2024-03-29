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
ll k;
ll dp[1000002]={0};
ll sum [1000002]={0};
void precal(){
    dp[0]=1;
    for (ll i = 1;i<=1000002;i++){
        if(i>=k){
            dp[i]= (dp[i-1]%mod+dp[i-k]%mod)%mod;
        }
        else {
            dp[i]=1;
        }
    }
    sum[0]=1;
    for (ll i =1 ;i<=1000002;i++){
        sum[i]=(sum[i-1]%mod+dp[i]%mod)%mod;
    }
    // for (auto i:dp)cout<<i<<" ";
}

void solve (){
    ll a, b;
    cin>>a>>b;
    ll ans = 0;

    cout<<(sum[b]-sum[a-1]+mod)%mod<<"\n";
}

int main(){
    fast_io;
    cout<<fixed;
    cout<< setprecision(10);
    
    int t =1;
    cin>> t ;
    cin>>k;
    precal();
    for (int i =1;i<=t;i++){
        // cout<< "Case #"<<i<<": ";
        solve();
    }

    return 0;

}