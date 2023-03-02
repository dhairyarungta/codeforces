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
    ll n , k , x;
    cin>>n>>k>>x;
    vector<ll>a(n);
    for (auto &i:a)cin>>i;

    vector<pair<ll,ll>>ans(n);
    // pair.first = max sum arr ending at that element 
    //pair.second = size of the above subarray 
    if(x<0){
        k=n-k;
        x=-x;
    }
    if(k>0){
        ans[0].first= a[0]+x;
        ans[0].second = 1;
    }
    else{
        ans[0].first = a[0]-x;
        ans[0].second= 1;
    }

    // int kleft = k-1;

    for (int i =1;i<n;i++){
        int prevmax = ans[i-1].first;
        int prevsize = ans[i-1].second;
        // if(k-prevsize>0){}
        // else
        {
            int val = k-prevsize>0?a[i]+x:a[i]-x;
            int newval = k>0?a[i]+x:a[i]-x;

            if(val+prevmax>newval){
                ans[i].first = val+prevmax;
                ans[i].second=prevsize+1;
            }
            else {
                ans[i].first = newval;
                ans[i].second=1;

            }
        }
    }
    int maxsum = 0;
    int index =0 ;
    for (auto [i,j]:ans ){

        maxsum = max((int)i,(int)maxsum);
        cout<<maxsum<<" ";
        
    // cout<<maxsum<<"\n";
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