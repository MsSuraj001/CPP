#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter Your binary no:\n";
    // cin>>n;
    // int ans = 0;
    // int power = 1;
    // while(n>0){
    // int lastdigit = n%10;
    // ans+=(lastdigit*power);
    // power*=2;
    // n/=10;
    // }
    // cout<<ans;
    int n;
    cout<<"Enter Your Binary no:\n";
    cin>>n;
    int ans = 0;
    int power = 1;
    while(n>0){
        int lastdigit = n%10;
        ans += lastdigit*power;
        power*=2;
        n/=10;
    }
    cout<<ans;
    return 0;
}
