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
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    
    for (auto &i:a)cin>>i;
    for (auto &i:b)cin>>i;
    
    int maxans = min(n,m);

    int i = 0, j= 0;
    // int cursum =0 ;
    int count = 0;

    while(i<n || j<m){
        if(a[i]==b[j]){
            count++;
            i++;j++;
        }
        else {
            int sum1 =a[i],sum2 =b[j];
            i++; j++;
            while(sum1!=sum2){
                if(sum1<sum2){
                    sum1+=a[i];
                    i++;
                }
                else {
                    sum2+=b[j];
                    j++;
                }
            }
            count++;
        }

    }
    cout<<count<<"\n";
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