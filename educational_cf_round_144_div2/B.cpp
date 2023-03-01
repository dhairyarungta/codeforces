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
    string a, b;
    cin>>a>>b;
    set<char> x, y;
    for (auto i :a)x.insert(i);
    for (auto i :b)y.insert(i);

    if(a[0]==b[0]){
        cout<<"YES\n";
        cout<<a[0]<<"*\n";
        return;
    }
     if (a[a.size()-1]==b[b.size()-1]){
        cout<<"YES\n";
        cout<<"*"<<a[a.size()-1]<<"\n";
        return;

    }

    for (int i = 0;i<a.size()-1;i++){
        string check = a.substr(i,2);
        if(b.find(check)!=string::npos){
            cout<<"YES\n";
            cout<<"*"<<check<<"*"<<"\n";
            return;
        }
    }
    cout<<"NO\n";



}
// void solve (){
//     string a , b;
//     cin>>a>>b;
//     set<char>x,y;
//     for (auto i:a){
//         x.insert(i);
//     }
//     for (auto i:b){
//         if(x.count(i)!=0){
//             cout<<"YES\n";
//             cout<<"*"<<i<<"*\n";
//             return;
//         }
//     }
//     cout<<"NO\n";
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