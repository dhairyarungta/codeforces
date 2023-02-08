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
    cin>> n;
    vector<int> vec(n);
    for(auto &i :vec) cin>>i;

    int maxindex,maxnum = INT_MIN, minindex, minnum = INT_MAX;
    for (int i =0;i<n;i++){
        if(vec[i]>maxnum){
            maxnum = vec[i];
            maxindex = i;
        }

        if(vec[i]<=minnum){
            minnum = vec[i];
            minindex=i;
        }
    }

    if(maxindex<=minindex){
        cout<< n-1-minindex+maxindex;
    }
    else {
        cout<<n-1-minindex+maxindex-1;
    }

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