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
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    int aone= 0, azero = 0,bone=0,bzero=0;

    for(auto &i:a){
        cin>>i;
        if(i==1)aone++;
        else azero++;
    }

    for (auto &i:b){
        cin>>i;
        if(i==1)bone++;
        else bzero++;
    }

    ll ans =0;
    //case not using rearrange
    for(int i =0;i<n;i++){
        if(a[i]!=b[i])ans++;
    }

    ll ans2 = 1;
    //using rearrange once;
    ans2+=min(abs(aone-bone),abs(azero-bzero));

    cout<<min<ll>(ans2,ans)<<"\n";
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