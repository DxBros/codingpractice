//implementing queue using 2 stacks with costly enqueue
#include<bits/stdc++.h>
using namespace std;



// enQueue(q, x): 

// While stack1 is not empty, push everything from stack1 to stack2.
// Push x to stack1 (assuming size of stacks is unlimited).
// Push everything back to stack1.
// Here time complexity will be O(n)

// deQueue(q): 

// If stack1 is empty then error
// Pop an item from stack1 and return it
// Here time complexity will be O(1)
stack<int> s2;

void enQueue(stack<int>& s1,int x){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
}

int deQueue(stack<int>& s1){
    int popped_item;
    if(s1.empty()){
        throw invalid_argument("stack is empty");
    }
    else{
        popped_item = s1.top();
        s1.pop();
    }
    return popped_item;
}

void print(stack<int> s1 ){
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
}
int main(){
    stack<int> s1;

    int t;cin>>t;
    while(t--){
        int ret_elem;
        string s;cin>>s;
        if(s=="enQueue"){
            int x;cin>>x;
            enQueue(s1,x);
        }
        else{
            ret_elem = deQueue(s1);
            cout<<"The Popped_item is--> "<<ret_elem<<endl;
        }
        print(s1);
    }
    
    return 0;
}
