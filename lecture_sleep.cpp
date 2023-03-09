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
    ll n, k;
    cin>>n>>k;
    vector<ll>a(n+1);
    vector<ll>t(n+1);

    for (int i =1;i<=n;i++)cin>>a[i];
    for (int i =1;i<=n;i++)cin>>t[i];
    if(k>=n){
        cout<<accumulate(all(a),0)<<"\n";
        return;
    }
    ll maxval = INT_MIN, cur = 0, index = 1;
    for (int i = 1;i<=k;i++){
        if(!t[i])cur+=a[i];
    }
    maxval = cur;
    for (int i = 2;i<=n+1-k;i++){
        if(!t[i+k-1])cur+=a[i+k-1];
        if(!t[i-1]){cur-=a[i-1];}

        if(cur>maxval){
            index = i;
            maxval = cur;
        }
        
    }
    ll totalval = 0;
    for (int i =1;i<=n;i++){
        if(t[i])totalval+=a[i];
        else {
            if(i>=index && i<=index+k-1)
                totalval+=a[i];
        }
    }
    cout<<totalval<<endl;
    
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