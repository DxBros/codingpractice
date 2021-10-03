#include<bits-stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int n ;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int n1=-1,n2=-1,c1=0,c2=0;
    if(n == 1)return {a[0]};
    for(int i=0;i<n;i++){
        if(a[i]==n1)c1++;
        else if(a[i] == n2)c2++;
        else if(c1==0){
            n1= a[i];
            c1=1;
        }
        else if(c2==0){
            n2= a[i];
            c2=1;
        }
        else c1--,c2--;
    }
    vector<int> v;
    c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(a[i]==n1)c1++;
        else if(a[i]==n2)c2++;
    }
    if(c1> n/3) v.push_back(n1);
    if(c2>n/3)v.push_back(n2);
        
    return 0;
}