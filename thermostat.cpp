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
    ll l,r,x;
    cin>>l>>r>>x;
    ll a, b;
    cin>>a>>b;

    if(a==b){
        cout<<0<<"\n";
        return;
    }
    if(abs(a-b)>=x){
        cout<<1<<"\n";
        return;
    }
    if(abs(b-l)<x && abs (b-r)<x){
        cout<<-1<<"\n";
        return ;
    }

    if(abs(a-r)<x && abs(a-l)<x){
        cout<<-1<<"\n";
        return ;

    }

    if(a<b){
        if(abs(b-r)>=x){
            cout<<2<<"\n";
            return;
        }
        else if (abs(a-l)>=x){
            cout<<2<<"\n";
            return;

        }
        else {
            cout<<3<<"\n";
            return;
        }
    }
    else {
        if(abs(b-l)>=x){
        cout<<2<<"\n";
            return;
        }
        else if (abs(a-r)>=x){
            cout<<2<<"\n";
            return;

        }
        else{
            cout<<3<<"\n";
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
    cin>> t ;
    for (int i =1;i<=t;i++){
        // cout<< "Case #"<<i<<": ";
        solve();
    }

    return 0;

}