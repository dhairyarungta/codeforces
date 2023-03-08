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
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for (auto &i:a)cin>>i;
    
    if(k>=n-1){
        cout<<*max_element(all(a));
        return;
    }
    ll firstval = max<ll>(a[0],a[1]);
    ll secondval = min<ll>(a[0],a[1]);
    a[0]= firstval;
    a[1]= secondval;

    ll curmax = a[0];
    ll count = 0;
    // if(a[1])

    for (int i = 1;i<n;i++){
        if(a[i]<curmax){
            count++;
            if(count==k){
                cout<<curmax<<endl;
                return;
            }
        }
        else {
            curmax= a[i];
            count=1;
        }

        if(i==n-1){
            cout<<*max_element(all(a));
            return;

        }
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
