#include<bits-stdc++.h>
#define long long long long
using namespace std;

void prlong longVec(vector<long long> v){
        for(auto &i:v)
            cout<<i<<" ";
        cout<<endl;
}
long long main()
{
    long long n;cin>>n;
    vector<long long> v(n);
    for(auto &i:v)
        cin>>i;
    long long start =0,end = v.size()-1;
    while(start <end){
        long long temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++,end--;
    }
    prlong longVec(v);
   return 0;
}