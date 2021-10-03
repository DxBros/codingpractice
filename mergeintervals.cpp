#include<bits-stdc++.h>
#define long long long long
using namespace std;
void solve(long long a[],long long b[],long long n,long long m){
    long long gap = ceil((n+m)/2);;
    while(gap>=1){
        long long i =0;
        while( (i+gap) < (n+m)){
                if((i+gap)<n){
                    if(a[i]>a[gap + i]){
                        long long temp = a[i];
                        a[i]= a[gap+i];
                        a[gap+i]=temp;
                    }
                }
                else if(i<n && (i+gap) >=n ){
                        long long j = i+gap-n;
                        if(a[i]>b[j]){
                            long long temp = a[i];
                            a[i]= b[j];
                            b[j]=temp;
                        }
                    }
                else{
                    if(b[i-n]>b[i+gap-n]){
                            long long temp = b[i-n];
                            b[i-n]= b[gap+i-n];
                            b[gap+i-n]=temp;
                    }
                }
                i++;
            }
        cout<<"gap: "<<gap<<endl;
        for(long long i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(long long i=0;i<m;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        if(gap%2==0 or gap == 1)
            gap/=2;
        else 
            gap = (gap/2)+1;
    }
    
}

long long main()
{
    long long n,m;cin>>n>>m;
    long long a[n];
    long long b[m];
    for(long long i=0;i<n;i++)cin>>a[i];
    for(long long i=0;i<m;i++)cin>>b[i];
    solve(a,b,n,m);
}
// void swap(long long a[],long long b[],long long i){
//     long long temp = a[i];
//     a[i]= b[0];
//     b[0] =temp;
// }void swap1(long long b[],long long i){
//     long long temp = b[i];
//     b[i]= b[i+1];
//     b[i+1] =temp; 
// }void sort_(long long b[],long long m){
    // for(long long i=0;i<m-1;i++){
    //     if(b[i]>b[i+1]){
    //         swap1(b,i);
    //     }
    // }
// }