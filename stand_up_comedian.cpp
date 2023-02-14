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
    int a[4];
    int total = 0;
    for (auto &i:a){
        cin>>i;
        total+=i;
    } 
    if(a[0]==0){
        cout<<1<<"\n";
        return;
    }
    int ans = a[0];


    int alice = a[0], bob = a[0];
    int temp = abs(a[1]-a[2]);

    // if(2*temp<=total)
    ans +=2*min(a[1],a[2]);
    
    if(temp>=a[0]){
        ans+=a[0];
    }
    else {
        ans+=temp;
        int curleft =a[0]-temp;
        ans+=min(curleft,a[3]);
    }
    ans>=total?:ans++;
    cout<<ans<<'\n';
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