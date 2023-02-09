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

void solve1 (){
    string s;
    getline(cin,s);
    vector<char>ans;
    for(auto i :s){
        if(i!=43){
            ans.push_back(i);
        }
    }
    sort(ans.begin(),ans.end());
    int n = ans.size();
    for(int i =0;i<n;i++){
        cout<<ans[i];
        if(i!=n-1)
        cout<<"+";
    }
    cout<<"\n";
}

void solve (){
    string s;
    int one=0, two=0, three=0;
    getline(cin,s);
    for (auto i:s){
        if(i!=43){
            switch (i)
            {
            case '1'/* constant-expression */:
                one++;
                break;
            
            case '2':
                two++;
                break;
            case '3':
                three++;
                break;
            }
        }
    } 
    int total = one+two+three;
    while(total--){
        if(one){
            cout<<1;
            one--;
        }
        else if(two){
            cout<<2;
            two--;
        }
        else{
            cout<<3;
            three--;
        }
        
        if(total!=0)
            cout<<"+";

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

        // solve1();
        solve();
    }

    return 0;

}