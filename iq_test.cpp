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
//     char a[4][4];
//     for (int i =0;i<4;i++)
//         for (int j =0;j<4;j++)
//             cin>>a[i][j];

//     for (int i =1;i<=2;i++){
//         for (int j = 0;j<4;j++){
//             if(j==0 ){
//                 if(a[i-1][j]==a[i-1][j+1]&&a[i-1][j]==a[i][j+1]){
//                     cout<<"YES"<<"\n";
//                     return ;
//                 }
//                 if(a[i+1][j]==a[i+1][j+1]&&a[i+1][j]==a[i][j+1]){
//                     cout<<"YES"<<"\n";
//                     return;
//                 }
//             }
//             else if(j==3){
//                 if(a[i-1][j]==a[i-1][j-1]&&a[i-1][j]==a[i][j-1]){
//                     cout<<"YES"<<"\n";
//                     return ;

//                 }
//                 if(a[i+1][j]==a[i+1][j-1]&&a[i+1][j]==a[i][j-1]){
//                     cout<<"YES"<<"\n";
//                     return;
//                 }
//             }
//             else {
//                 if(a[i-1][j]==a[i-1][j+1]&&a[i-1][j]==a[i][j+1]){
//                     cout<<"YES"<<"\n";
//                     return ;
//                 }
//                 if(a[i+1][j]==a[i+1][j+1]&&a[i+1][j]==a[i][j+1]){
//                     cout<<"YES"<<"\n";
//                     return;
//                 }

//                 if(a[i-1][j]==a[i-1][j-1]&&a[i-1][j]==a[i][j-1]){
//                     cout<<"YES"<<"\n";
//                     return ;

//                 }
//                 if(a[i+1][j]==a[i+1][j-1]&&a[i+1][j]==a[i][j-1]){
//                     cout<<"YES"<<"\n";
//                     return;
//                 }


//             }
//         }
//     }

//     cout<<"NO\n";
// }
void solve (){
    char a[4][4];
    for (int i =0;i<4;i++){
        for (int j =0;j<4;j++){
           cin>> a[i][j];
        }
    }
    for (int i =0;i<3;i++){
        for (int j =0;j<3;j++){
            // int num =0;
            if(a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j]){
                cout<<"YES\n";
                return;
            }
            if(a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j+1]){
                cout<<"YES\n";
                return;

            }
            if(a[i][j]==a[i+1][j]&&a[i][j]==a[i+1][j+1]){
                cout<<"YES\n";
                return;

            }

            if(a[i][j+1]==a[i+1][j+1]&& a[i+1][j]==a[i+1][j+1]){
                cout<<"YES\n";
                return;

            }
        }
    }

    cout<<"NO\n";

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