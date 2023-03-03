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
    ll n ;
    cin>>n;
    ll ans = 0;
    ll s = 1;
    ll en = 10;
    string temp ("1");

    while(true){
        if(en>n){
            ans+=temp.size()*(n-s+1);
            break;
        }
        else {
            ans+=temp.size()*(en-s);
            temp.push_back('1');
            s*=10;
            en*=10;
        }
    }
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