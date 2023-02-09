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
    string ans = "";
    for (auto i :s){
        if(i=='a'||i=='a'-32||i=='e'||i=='e'-32||i=='i'||i=='i'-32||i=='o'||i=='o'-32||i=='u'||i=='u'-32||i=='y'||i=='y'-32){  
        }
        else 
            ans.push_back(tolower(i));
    }
    // cout<<ans;
    for (auto i:ans)cout<<"."<<i;
    cout<<"\n";
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