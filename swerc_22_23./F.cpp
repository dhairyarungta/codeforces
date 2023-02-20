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
// bool comp (const pair<int,int> &a, const pair<int,int> &b){
//     if(a.first==b.first){
//         return a.second<b.second;
//     }
//     else return a.first<b.first;
// }
void solve (){
    int n;
    cin>>n;
    ll m;
    cin>>m;
    vector<pair<int, int>> vec(m);
    for (auto &[i,j]:vec){
        cin>>i;
        cin>>j;
    }

    // sort(vec.begin(),vec.end(),comp);
    int num =1;
    map<int,int>mp;
    mp[1]=1;

    // multiset<int> ans ;
    // ans.insert(1);
    
    map<int, int> run ;
    run[0]=1;

    int cur =1 ;
    for (int i =1;i<m;i++){
        int a = vec[i].first;
        int b = vec[i].second;
        if(cur==n-1)cur++;
        int count = cur;

        for (int j = 0;j<i;j++){
            int temp1 = vec[j].first;
            int temp2 = vec[j].second;
            // int tempans = count;
            if(a==temp1 || a== temp2 || b== temp1 || b ==temp2){
                count++;
            }

        }
        mp[count]++;
        run[i]=count;


    }

    cout<<mp.size()<<'\n';
    for(auto [i,j]:run){
        cout<<j<<" ";
    }
    cout<<"\n";
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