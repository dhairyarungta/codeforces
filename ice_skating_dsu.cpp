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
vector<pair<ll,ll>>a(105);
vector<ll>par(105,0);
vector<ll> rank1(105,0);


using namespace std;

void precal(){

}
ll findroot (ll n){
    ll temp = n;
    while(par[temp]!=temp){
        temp= par[temp];
    }
    return temp;

}
void connect (ll i, ll j){
    if(rank1[i]>=rank1[j]){
        par[j] = i;
        rank1[i]++;

    }
    else {
        par[i]=j;
        rank1[j]++;
    }
}

void solve (){
    cin>>n;
    for(int i =1;i<=n;i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    for (int i = 1;i<=n;i++)par[i]=i;
    ll ans =n;

    for (int i =1;i<=n;i++){
        for (int j = i+1;j<=n;j++){
            if(a[i].first==a[j].first|| a[i].second==a[j].second){
                if(findroot(i)!=findroot(j)){
                    connect(findroot(i),findroot(j));
                    ans--;
                }
            }
        }
    }
    cout<<ans-1<<endl;

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