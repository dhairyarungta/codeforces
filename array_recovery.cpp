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
    ll n ;
    cin>>n;
    vector<ll>d(n);
    for (auto &i:d)cin>>i;
    vector<ll>ans(n);
    ans[0]= d[0];
    // cout<<ans[0]<<endl;
    // for (auto i :d)cout<<i<<" ";
    for (int i =1;i<n;i++){
        // cout<<i<<" ";
        if(ans[i-1]-d[i]>=0 && d[i]!=0){
            cout<<-1<<"\n";
            return;
        }
        else {
            ans[i]= ans[i-1]+d[i];
        }
    }
    
    for (auto i:ans)cout<<i<<"  ";
    cout<<"\n";
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