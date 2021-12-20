// Check whether one file is the rotation of the other
#include<bits-stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s1,s2,s;
    cin>>s1>>s2;
    s = s1+s1;
    if(strstr(s.c_str(),s2.c_str())){
        cout<<"YES s2 is a substring of s1"<<endl;
    }
    else{
        cout<<"NO s2 is not a substring of s1"<<endl;
    }
} 

int main()
{
   int t;cin>>t;
   while(t--)
       solve();
   return 0;
}
