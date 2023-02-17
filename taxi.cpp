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

    int a[5]={0};
    for (auto i:vec){
        a[i]++;
    }
    // for (auto i :a)cout<<i<<" ";
    int ans =a[4];
    int temp = min(a[1],a[3]);
    a[1]-=temp; a[3]-=temp;
    ans += temp;

    if(a[2]%2==0){
        if(a[1]==0)ans+=a[3];
        else ans+=((a[1]+3)/4);
    }
    else {
        if(a[1]==0)ans+=a[3]+1;
        else {
            ans+=(a[1]+5)/4;
        }
            
    }
    
    ans +=a[2]/2;
    cout<<ans<<"\n";

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