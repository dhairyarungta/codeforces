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
    int a ,b ,c;
    cin>>a>>b>>c;
    int x, y;

    float shop2per = ((float)c)/b;
    //this is the cost per doubnut for shop two

    if(((float)a)<=shop2per){
        y= -1;
        x = 1;

    }
    else {
        y = b;
        if(c<=a){
            x =-1;
        }
        else {
            x=1;
        }
    }
    cout<<x<<" "<<y<<"\n";

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