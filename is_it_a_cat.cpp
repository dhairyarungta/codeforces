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
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (auto i:s){
        if(i=='m'||i=='M'||i=='e'||i=='E'||i=='o'||i=='O'||i=='w'||i=='W'){
            continue;
        }
        else {
            cout<<"NO\n";
            return;
        }
    }

    vector<pair<int,int>>index(4);
    for (auto &[i,j]:index){
        i= INT_MAX;
        j= INT_MIN;
    }

    // for (int i =0 ;i<n;i++){
    //     if(s[i]=='m'||s[i]=='M'){
    //         index[0].first=min(index[0].first);
    //         index[0].second= max(index[0])
    //     }
    //     if(s[i]=='e'||s[i]=='E'){
            
    //     }
    //     if(s[i]=='o'||s[i]=='O'){
            
    //     }
    //     if(s[i]=='w'||s[i]=='W'){
            
    //     }

    // }

    for (int i = 0;i<n;i++){
        if(s[i]=='m'||s[i]=='M'){
            if(index[0].first==INT_MAX)
                index[0].first=i;
            index[0].second =i;
        }
        if(s[i]=='e'||s[i]=='E'){
            if(index[1].first==INT_MAX)
                index[1].first=i;
            index[1].second =i;

        }
        if(s[i]=='o'||s[i]=='O'){
            if(index[2].first==INT_MAX)
                index[2].first=i;
            index[2].second =i;

        }
        if(s[i]=='w'||s[i]=='W'){
            if(index[3].first==INT_MAX)
                index[3].first=i;
            index[3].second =i;

        }

    }
    for (auto [i,j]:index){
        if(i==INT_MAX){
            cout<<"NO\n";
            return;
        }
    }

    if(index[0].first==0 && index[0].second<index[1].first&& index[1].second<index[2].first && index[2].second<index[3].first&& index[3].second==n-1){
        
        cout<<"YES\n";
    }
    else cout<<"NO\n";

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