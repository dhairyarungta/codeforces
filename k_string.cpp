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
    int k;
    cin>> k;
    string s ;
    cin>>s;

    map<char, int> mp;
    for (auto i:s)mp[i]++;
    for(auto [i,j]:mp){
        if(mp[i]%k!=0){
            cout<<-1<<"\n";
            return;
        }
        else{
            mp[i]/=k;
        }
    }

    string ans ="";
    for(auto &[i,j]:mp){
        while(j>0){
            ans.push_back(i);
            j--;
        }
    }    
    while(k--)cout<<ans;
    cout<<"\n";   

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