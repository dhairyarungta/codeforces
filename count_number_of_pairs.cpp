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
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    // map<char,ll> x ;
    ll total = 0;

    int a[256]={0};
    for (auto i:s){
        a[i]++;
    }

    for (int i =0;i<26;i++){
        int p1 = i+'A';
        int p2  = i+'a';
        int minval = min(a[p1],a[p2]);
        a[p1]-=minval;
        a[p2]-=minval;
        total+=minval;
        int newavl = max((a[p1])/2,(a[p2])/2);
        
        if(k>0){
            int y = min(k,newavl);
            total+=y;
            k-=y;
        }
    }

    cout<<total<<"\n";
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