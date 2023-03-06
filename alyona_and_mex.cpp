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
    vector<ll>a(n);
    for (auto &i:a)cin>>i;
    sort(all(a));

    // ll num =*max_element(all(a));
    // if(num<n)cout<<num+1;
    // else cout<<n;
    // ll count= 0;
    // for (int i =n-1;i>=0;i--){
    //     if(a[i]>=i+1)count++;
    // }
    // cout<<max<ll>(count+1,n);
    // set<ll>s;
    // for (auto i:a)s.insert(i);
    // cout<<min<ll>(s.size()+1,*max_element(all(a))+1);
    // map<ll,ll>mp;
    // for (auto i:a)mp[i]++;
    // ll count = n+1;
    // ll cur = 1;
    // for(auto [i,j]:mp){
    //     if
    // }
    // ll count = 0;
    // for (int i =0;i<n;i++){
    //     if(a[i]<i+1)count--;
    //     else if(a[i]>i+1)count++;
    // }
    // cout<<max<ll>(n+count,n+1)<<endl;
    ll count = 1;
    
    for (int i =0;i<n;i++){
        if(a[i]>=count)count++;
    }
    cout<<count;
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