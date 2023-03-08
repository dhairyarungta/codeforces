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
    vector<ll>a(n+1);

    for (int i =2;i<=n;i++){
        cin>>a[i];
    }
    map<ll,ll>mp;
    set<ll>st;
    st.insert(1);

    for (int i = 2;i<=n;i++){
        mp[i]=a[i];
        st.insert(a[i]);
        if(mp.count(a[i])!=0)
            mp.erase(a[i]);
    }

    map<ll,ll>ct ;
    for (auto [i,j]:mp){
        ct[j]++;
    }

    // set<ll>st;
    // if(ct[1]<3){
    //     cout<<"No";
    //     return;
    // }

    // for (auto [i,j]:ct){
    //     // st.insert(i);
    //     if(j<3){
    //         cout<<"No";
    //         // cout<<endl;
    //         return ;
    //     }
    // }

    // ll cur= 1;
    // for (auto i:st){
    //     if(cur!=i){
    //         cout<<"No";
    //         return;
    //     }
    //     cur++;
    // }
    for (auto i:st){
        if(ct[i]<3 ){
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";

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