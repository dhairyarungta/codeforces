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
    ll n,k;
    cin>>n>>k;
    if(n%2 != k%2){
        cout<<"NO\n";
        return;
    }

    if(k*k<=n)cout<<"YES\n";
    else cout<<"NO\n";
}
// void solve (){
//     int n,k;
//     cin>>n>>k;
    
//     if((n%2==0 && k%2==1)||(n%2==1 && k%2==0)){
//         cout<<"NO\n";
//         return;
//     }

//     int num = n/k;
//     int skip =k/2; 
//     if(num%2==1 && num-2*(skip)>0){
//         cout<<"YES\n";
//     }
//     else if(num%2==0 && num-2*skip>= 0)cout<<"YES\n";
//     else cout<<"NO\n";
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