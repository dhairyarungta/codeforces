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

    string ans ="";

    while(n>0){

    if(n%7==0){
        for(int i=0;i<n/7;i++)
            ans.push_back('7');

        n=0;
        break;
    }
    n-=4;
    ans.push_back('4');

    }
    if(n==0)
    cout<<ans<<"\n";
    else 
    cout<<-1<<"\n";
}

void solve2(){
    int n;
    cin>>n;
    string ans = "";
    ll a= INT_MAX, b= INT_MAX;
    for (int i =0;i*7<=n;i++)
    {
        int val = (n-i*7);

        if(val%4==0){
        int fourcount = val/4;
        if((fourcount+i)<=a+b){
            b = i;   
            a = (n-b*7)/4;

        }
        }
        else continue;
    }
    if(a==INT_MAX)
        cout<<-1<<"\n";
    else {
        for (int i=0;i<a;i++ )ans.push_back('4');
        for (int i =0;i<b;i++)ans.push_back('7');
        cout<<ans<<"\n";
    }
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
        // solve();
        solve2();
    }

    return 0;

}