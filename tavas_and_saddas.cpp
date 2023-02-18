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
    ll sum = 0;
    ll mul = 1;

    while(n!=0){
        int temp = n%10;
        n/=10;


        if(temp==7){
            sum+=2*mul;
        }
        else if(temp==4){
            sum+=mul;
        }

    mul*=2;
    }


    cout<< sum <<'\n';
}


// void solve (){
//     string s ;
//     cin>>s;
//     string temp = "4";
//     ll a =0 ;
//     cout<<a<<endl;
//     for(int i =0;i<10;i++){
//         cout<<temp<<" ";
//         // num++;

//         if(temp==s){
//             break;
//         }

//         if(temp.back()=='4'){
//             temp.pop_back();
//             temp.push_back('7');
//         }
//         else {

//             string checkstr ('7',temp.size());
//             if(temp ==checkstr){
//                 string copystr('4',temp.size()+1);
//                 temp = copystr;
//             }
//             else{
//                 swap(temp[temp.size()-1],temp[temp.size()-2]);
//             }
//         }
//     }
//     cout<<endl<<a  ;

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