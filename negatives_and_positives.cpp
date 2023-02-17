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

void solve(){
    ll n;
    cin>>n;
    vector<int> vec(n);
    for (auto &i :vec)cin>>i;
    
    ll count= 0;
    int minval = INT_MAX;
    ll sum =0;
    for (auto i:vec){
        if(i<0)count++;
        minval = min(minval,(int)abs(i));
        sum+= abs(i);
    }
    // cout<<count<<" ";
    if(count%2==0){
        cout<<sum<<"\n";
    }
    else {
        cout<<sum-2*minval<<"\n";
    }

}

// void solve (){
//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for (auto &i :vec)cin>>i;

    
//     if(vec[n-1]+vec[n-2]<-vec[n-1]-vec[n-2]){
//         vec[n-1]*=-1;
//         vec[n-2]*=-1;
//     }
//     int cur = vec[n-1]+vec[n-2];
//     for (int i =n-3;i>=0;i-=2;){
//         if(cur+vec[i]<(cur-vec[i]-2*vec[i+1])){
            
//             cur+=-2*vec[i+1]-vec[i];
//             vec[i]*=-1;

//             vec[i+1]*=-1;

//         }
//         else cur+=vec[i];
//     }
//     cout<<cur<<"\n";

// }
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