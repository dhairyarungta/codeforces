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
    int n;
    cin>>n;
    vector<int>vec(n);
    for (auto &i:vec)cin>>i;
    int curplayer = 2;

    for (int i =0;i<n;i++){
        if(vec[i]%2==0){
            curplayer==2?curplayer=1:curplayer=2;
        }
        cout<<curplayer<<"\n";    
    }
    
}

// void solve (){
//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for (auto &i:vec)cin>>i;

//     multiset<int>mp;
//     int curpalyer = 1;
//     multiset<int>set2;
//     for (int i =0;i<n;i++){
//         set2.insert(vec[i]);
//         // mp.insert(vec[i]);
//         // multiset<int>set2 = mp;
//         while(true){
//             auto iter = set2.upper_bound(1);
//             if(iter==set2.end()){
//                 curpalyer==1?cout<<2<<"\n":cout<<1<<"\n";
//                 break;
//             }
//             else {
//                 set2.erase(iter);
//                 set2.insert(*iter/2);
//                 set2.insert(*iter/2+(*iter%2));
//                 curpalyer==1?curpalyer=2:curpalyer=1;
//             }
            
//         }
//     }   
// }

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