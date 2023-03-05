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
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for (auto &i:a)cin>>i;

    vector<ll>dp(n);

    a[0]==1?dp[0]=-1:dp[0]=1;
    for (int i=1;i<n;i++){
        dp[i]= a[i]==1?dp[i-1]-1:dp[i-1]+1;
    }
    pair<int,int>index(-1,-1);
    ll val = INT_MIN;
    for (int i =0;i<n;i++){
        for (int j =i;j<n;j++){
            if(i==0){
                if(dp[j]>val){
                    val = dp[j];
                    index={i,j};
                }
            }
            else {
                if(dp[j]-dp[i-1]>val){
                    val = dp[j]-dp[i-1];
                    index = {i,j};
                }
            }
        }
    }
    ll ans = 0;
    for (int i = 0;i<n;i++){
        if(i>=index.first && i<=index.second){
            ans+=1-a[i];
        }
        else ans+=a[i];
    }
    cout<<ans<<endl;

    
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