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
    vector<ll>a(n),b;
    for (auto &i:a)cin>>i;
    vector<ll>p,q;
    set<ll>x,y;
    b=a;
    multimap<ll,int>mp;
    for (int i = 0;i<n;i++){
        mp.insert({a[i],i});
    }

    sort(all(b));
    //b is the sorted version of a(n)

    for(int i = 1;i<=n;i++){
        x.insert(i);
        y.insert(i);
    }
    vector<pair<ll,ll>>ans;

    for (int i = 0;i<n;i++){
        if(x.count(b[i])!=0 && *(y.begin())<=b[i]){
            ans.push_back({b[i],*(y.begin())});
            x.erase(b[i]);
            y.erase(y.begin());
            continue;
        }
        else if(y.count(b[i])!=0 && *(x.begin())<=b[i]){
            ans.push_back({*(x.begin()),b[i]});
            x.erase(x.begin());
            y.erase(b[i]);
            continue;
        }
        else {
            cout<<"NO\n";
            return;
        }
    }
    vector<pair<ll,ll>>ans2(n);
    for (int i = 0;i<n;i++){
        ll num = max<ll>(ans[i].first,ans[i].second);
        auto it = mp.find(num);
        ans2[it->second]=ans[i];
        mp.erase(it);
    }

    cout<<"YES\n";
    for (auto [i,j]:ans2)cout<<i<<" ";
    cout<<"\n";

    for (auto [i,j]:ans2)cout<<j<<" ";
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