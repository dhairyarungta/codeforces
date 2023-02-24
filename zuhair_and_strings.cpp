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
     ll n, k;
     cin>>n>>k;
     string s ;
     cin>>s;
    
    int ans = 0;
    
    map<string,int> mp;
    
    int st =0,en= 0;
    int count = 0;

    while(en<n){
        if(count == k){
            string temp(k,s[st]);
            mp[temp]++;
            st=en;
            count=0;
            // continue;
        }


        if(s[en]==s[st]){
            count++;
            en++;
        }
        else {
            st=en;
            count=0;
        }
    }
    if(count == k){
            string temp(k,s[st]);
            mp[temp]++;
        }
    int maxval = 0;

    for (auto [i,j]:mp){
        maxval=max(j,maxval);
        // cout<<i<<" "<<j<<endl;
    }
    cout<<maxval<<"\n";
    

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