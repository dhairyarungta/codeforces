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
    vector<ll>vec(n);
    int k = 1;
    for (auto &i :vec)i = k++;
    if(n==2){
        cout<<2<<"\n";
        cout<<1<<" "<<2<<"\n";
        return ;
    }
    cout<<2<<"\n";
    cout<<vec[n-3]<<" "<<vec[n-1]<<"\n";
    vec[n-3]= (vec[n-3]+vec[n-1])/2;

    
    vec.pop_back();
    for (int i =vec.size()-2;i>=0;i--){
        cout<<vec[i]<<" "<<vec[i+1]<<"\n";
        vec[i]=(vec[i]+vec[i+1])/2;
        vec.pop_back();
    }
    

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