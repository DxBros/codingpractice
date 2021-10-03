// #include<bits-stdc++.h>
// #define long long long long
// using namespace std;

// typedef struct MaxMin{
//     long long maxi,mini;
// } Mm;

// void prlong longVec(vector<long long> v){
//         for(auto &i:v)
//             cout<<i<<" ";
//         cout<<endl;
// }
// long long main()
// {
//     long long n;cin>>n;
//     vector<long long> v(n);
//     for(auto &i:v)
//         cin>>i;
//     Mm myst;
//     myst.maxi =(long long) -10e9;
//     myst.mini = (long long)10e9;
//     if(v.size()==1){
//         myst.mini = v[0];
//         myst.maxi = v[0];
//     }
//     for(long long i=0;i<v.size()-1;i++){
//             long long num1 = v[i],num2= v[i+1];
//             if(num1<num2)
//                 if(num1<myst.mini)myst.mini = num1;
//                 if(num2>myst.maxi)myst.maxi = num2;
//             else if(num1>num2)
//                 if(num2<myst.mini)myst.mini = num2;
//                 if(num1>myst.maxi)myst.maxi = num1;
//             cout<<"max is:"<<myst.maxi<<"min is:"<<myst.mini<<"\n";
//         }
//     prlong longVec(v);
//     cout<<"max is:"<<myst.maxi<<"min is:"<<myst.mini<<"\n";
//    return 0;
// }

//->tournament method
#include<bits-stdc++.h>
#define long long long long
using namespace std;

typedef struct MaxMin{
    long long maxi,mini;
} Mm;

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
    Mm myst;
    myst.maxi =(long long) -10e9;
    myst.mini = (long long)10e9;
    if(v.size()==1){
        myst.mini = v[0];
        myst.maxi = v[0];
    }
    long long i =0;
    while(i<v.size()){
        
    }
    prlong longVec(v);
    cout<<"max is:"<<myst.maxi<<"min is:"<<myst.mini<<"\n";
   return 0;
}