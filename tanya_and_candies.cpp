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
    vector<ll>a(n+1);
    ll prodd = 0, preven = 0, suodd = 0, sueven = 0;

    for(int i =1;i<=n;i++){
        cin>>a[i];
    }
    for (int i =1;i<=n;i++){
        if(i%2==0)sueven+=a[i];
        else suodd+=a[i];
    }
    ll ans= 0;
    for (int i = 1;i<=n;i++){
        if(i%2==0){
            sueven-=a[i];
            preven+=a[i-1];
        }
        else{
            suodd-=a[i];
            prodd+=a[i-1];
        
        }
        
        if((sueven+preven)==(suodd+prodd)){
            ans++;
        }

    }
    cout<<ans<<endl;



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