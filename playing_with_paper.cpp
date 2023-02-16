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

// void solve (){
//     ll a,b;
//     cin>>a>>b;
//     ll ans = 0;
//     while(a!=b){
//         ll len = max(a,b);
//         ll width = min(a,b);
//         a=len-width;
//         b = width;
//         ans++;
        
//     }
//     ans ++;
//     cout<<ans<<"\n";
// }

void solve (){
    ll a, b;
    cin>>a>>b;
    ll ans =0;

    while(a%b!=0){
        ll val = a%b;
        ans+=a/b;
        a= b;
        b= val;
    }
    ans+=a/b;

    cout<<ans<<"\n";
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