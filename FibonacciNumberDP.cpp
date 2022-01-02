class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        vector<int> v;
        v.push_back(1),v.push_back(1);
        n-=2;
        int i=2;
        while(n>0){
            v.push_back(v[i-1]+v[i-2]);
            i++,n--;
        }
        return v[v.size()-1];
        
    }
};

class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        int temp1 =1,temp3=1;
        n-=2;
        while(n>0){
            int temp=temp3;
            temp3 +=temp1;
            temp1 =temp;
            n--;
        }
        return temp3;
    }
};
