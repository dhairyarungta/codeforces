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

// void solve (){
//     int n;
//     cin>>n;
//     unordered_set<string>names;
//     while(n--){
//         string s;
//         cin>>s;
//         if(names.count(s)==0){
//             names.insert(s);
//             cout<<"OK"<<"\n";
//         }
//         else {
//             int i =1;
//             while(true){
//                 string temp = s+to_string(i);
//                 if(names.count(temp)==0){
//                     names.insert(temp);
//                     cout<<temp<<"\n";
//                     break;
//                 }

//                 i++;
//             }
//         }
//     }
// }

void solve (){
    int n;
    cin>>n;
    map<string,int>mp;
    while(n--){
        string s;
        cin>>s;

        if(mp[s]==0){
            cout<<"OK"<<"\n";
        }
        else {
            cout<<s+to_string(mp[s])<<"\n";
        }
        mp[s]++;
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
        solve();
    }

    return 0;

}