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
    int n; cin>>n;
    if (n==1){
        cout<<0<<endl;
        return;
    }
    string s; cin>>s;
    int ansMax = 0;
    int cur= 0;
    int maxIndex = 0;
    set<char>split;
    int i;
    for ( i =0;i<n;i++){
    // cout<< i<<" ";  

        if(split.count(s[i])==0){
            split.insert(s[i]);
            // cout<<cur<<endl;
            cur++;      

            // if(cur>ansMax){
            // ansMax=cur;
            // maxIndex=i;
            // }
      
        }
        else{
            cur--;
            // if(check ==true)
            maxIndex=i-1;
            break;
        }


    }
    cout<< maxIndex<<endl;
    split.clear();
    int num = 0;
    for (int j =0;j<=maxIndex;j++){
        split.insert(s[j]);
    }
    for (auto k :split) cout<<k<<" ";
    cout<<endl;

    num+=split.size();
    split.clear();
    for (int j =maxIndex+1;j<n;j++){
        split.insert(s[j]);
    }
    for (auto k :split) cout<<k<<" ";
    cout<<endl;

    num+=split.size();

    cout<<num<<"\n";
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