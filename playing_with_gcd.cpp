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


//Greatest Common Divisor
template<class T> 
T gcd(T a, T b){
    T temp = 0;
    while(b){
        temp = a;
        a = b;
        b = temp%b;
    }
    return a;
}

// Lowest Common Divisor
template<class T>
T lcm (T a, T b){
    return (a*b)/gcd<T>(a,b);
}


void solve (){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for (auto &i:a)cin>>i;

    vector<ll>b(n+1,1);
    b[0]=a[0];
    b[n]=a[n-1];
    for (int i=1;i<n;i++){
        b[i]=lcm<ll>(a[i-1],a[i]);
    }

    for (int i =0;i<n;i++){
        b[i]=gcd<ll>(b[i],b[i+1]);

    }
    for (int i =0;i<n;i++){
        if(b[i]!=a[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";


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