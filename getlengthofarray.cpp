#include<bits-stdc++.h>
#define ll long long
using namespace std;

struct programs{
    int data;
    float weight;
};

class myclass{
    public:
        double weight;
        double data;
};

int main()
{
    int array[] ={1,2,3,4};
    int length = sizeof(array)/sizeof(int);
    cout<<length<<endl;
    char arrayc[]={'a','o','p'
    };
    int length2 = sizeof(arrayc)/sizeof(arrayc);
    cout<<length2<<endl;
    struct programs array3[5];
    for(int i=0;i<5;i++){
        array3[i].data=i;
        array3[i].weight = i*2+0.1;
    }
    int length3=sizeof(array3)/sizeof(struct programs);
    cout<<length3<<endl;
    myclass array4[3];
    for(int i=0;i<3;i++){
        array4[i].data=i;
        array4[i].weight = i*2+0.1;
    }
    int length4 = sizeof(array4)/sizeof(myclass);
    cout<<length4<<endl;
    return 0;
}