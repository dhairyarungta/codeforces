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
    string s ;
    cin>>s;
    int len = s.size();
    string temp = s;

    sort(s.begin(),s.end());
    char cur ='a';
    for (int i=0;i<s.size();i++){
        if(s[i]!=cur && s[i]!=cur+1){
            cout<<"NO\n";
            return;
        }

        if(s[i]==cur+1)cur++;

    }

    map<char, int> mp;
    for (int i =0;i<temp.size();i++){
        if(mp.count(temp[i])==0){
            mp[temp[i]]=i;
        }
    }

    for (auto iter= mp.begin();iter!= mp.end();iter++){
        if(iter->second<(prev(iter)->second)){
            cout<<"NO\n";
            return;
        }
    }
    if(temp[0]!='a'){
        cout<< "NO\n";
        return;
    }

    cout<<"YES\n";
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