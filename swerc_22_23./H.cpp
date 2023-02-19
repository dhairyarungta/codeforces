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
//     vector<int> a(n), b(n);
//     for (auto &i:a)cin>>i;
//     for (auto &i :b)cin>>i;

//     map<int, int> mp ;
//     map<int, int > mp2 ;
//     for (int i =0;i<n;i++){
//         mp[a[i]]=i;
//         mp2[b[i]]=i;
//     }
//     int st=0, en =n-1;

//     while(st<en){
//         if(st==mp2[a[st]])st++;
//         {
//             break;
//         }
//         if(en==mp2[a[en]])en--;
//     } 
//     cout<<en-st<<'\n';

  
//     // auto iter = mp.find(a[0]);
//     // auto iter2 = mp.find(a[n-1]);
//     // // if(a[n-1]==b[n-1]){
//     // //     cout<<iter->second<<"\n";
//     // // }
//     // // else {
//     // //     cout<<abs(iter->second-iter2->second);
//     // // };

//     // cout<<(abs(-n+1+mp[a[n-1]]+mp[a[0]]))<<endl;

//     // // int ans = min(iter->second,n-(iter->second));
//     // // cout<<ans<<"\n";
// }

void solve (){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for (auto &i:a)cin>>i;
    for (auto &i :b)cin>>i;

    map<int , int> mp;
        for (int i =0;i<n;i++){
        mp[a[i]]=i;
    }
    int prev = mp[b[n-1]];
    int i =0;
    for ( i =n-2;i>=0;i--){
        int cur = mp[b[i]];
        if(cur>prev)break;

        prev = cur ;

    }

    cout<<i+1<<endl;
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