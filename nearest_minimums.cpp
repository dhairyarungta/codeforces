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
    int minval = INT_MAX;
    vector<int>vec(n);
    for (auto &i:vec){
        cin>>i;
        minval = min(minval,i);
    }
    int distance = INT_MAX;
    int index = -1;
    for (int i =0;i<n;i++){
        if(vec[i]==minval){
            index!=-1?distance=min(distance,i-index):distance=INT_MAX;
            
            index= i;
        }

    }
    cout<<distance<<"\n";

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