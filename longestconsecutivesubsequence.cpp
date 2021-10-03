#include<bits-stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int n=7;int a[n]={1,9,3,10,4,20,2};
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    int max_len =1,max_len_sofar =1;
    auto it = mp.begin();
    int temp = it->first;
    advance(it,1);
    for(it;it!=mp.end();it++){
        // cout<<temp<<" ";
        if((it->first - temp )==1){
            max_len ++;
        }
        else{
            max_len = 1;//c
        }
        max_len_sofar = max(max_len,max_len_sofar);
        temp = it->first;
    }
    cout<<max_len_sofar<<endl;
    return 0;
}