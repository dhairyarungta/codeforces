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
    vector<int> vec(n);
    for(auto &i:vec)cin>>i;
    // for(auto i:vec)cout<<i;

    ll maxnum = vec[n-1];
    for (int i =n-2;i>=0;i--){
        if(vec[i]<vec[i+1]){
            maxnum+=vec[i];
        }
        else {
            if(vec[i+1]!=0)
            {
                maxnum+=vec[i+1]-1;
                vec[i]=vec[i+1]-1;
            }
            else {
                vec[i]=0;
            }
        }
    }
    cout<<maxnum<<"\n";
    

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