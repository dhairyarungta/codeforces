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
    string s;
    cin>>s;
    if(s=="0"){
        cout<<4<<endl;
        return;
    }
    int num = 0;

    if(s.size()>1){
        string temp ="";
        temp.push_back(s[s.size()-2]);
        temp.push_back(s[s.size()-1]);
        num = stoi(temp);

    }
    else {
        num= stoi(s);
    }

    if(num%4==0)cout<<4;
    else cout<<0;
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