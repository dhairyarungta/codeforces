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
    int a, b,c,d;
    cin>>a>>b>>c>>d;

    // int x= a,y=b,z=c;

    // for (;x<=b;x++ ){
    //     if(x+y>z){
    //         cout<<x<<" "<<y<<" "<<z<<"\n";
    //         return;
    //     }
    // }
    // x=b;
    // for (;y<=c;y++){
    //     if(x+y>z){
    //      cout<<x<<" "<<y<<" "<<z<<"\n";
    //         return;

    //     }
    // }
    cout<<b<<" "<<c<<" "<<c<<"\n";
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