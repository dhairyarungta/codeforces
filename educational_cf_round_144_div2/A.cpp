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
string ans = "";

void precal(){
    for (int i = 1;i<=33;i++){
        if(i%3==0)ans.push_back('F');
        if(i%5==0)ans.push_back('B');
    }
}
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(ans.find(s)!=string::npos)cout<<"YES\n";
    else cout<<"NO\n";
    
}
// void solve (){
// int n;
// cin>>n;
// string s;
// cin>>s;
// bool check = false;
// for (int i =1;i<=100;i++){
//     string temp = "";
    
//     for (int j = i;j<=100;j++){
//         if (temp.size()>s.size())break;
//         if(j%3==0)temp.push_back('F');
//         if(j%5==0)temp.push_back('B');
//         if(temp== s){
//             check = true;
//             // cout<<i<<" "<<j<<endl;
//             break;
//         }
//     }
//     if(check==true){
//         break;
//     }
// }
// if(check ==true)cout<<"YES\n";
// else cout<<"NO\n";
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