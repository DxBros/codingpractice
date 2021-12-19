//implementing queue using 2 stacks with costly enqueue
#include<bits/stdc++.h>
using namespace std;
stack<int> s2;
// Method 2 (By making deQueue operation costly)In this method, in en-queue operation, the new element is entered 
// at the top of stack1.
// In de-queue operation, if stack2 is empty then all the elements are moved to stack2 and finally top of stack2 is returned. 

// Algorithm:
// enQueue(q,  x)
//   1) Push x to stack1 (assuming size of stacks is unlimited).
// Here time complexity will be O(1)

// deQueue(q)
//   1) If both stacks are empty then error.
//   2) If stack2 is empty
//       While stack1 is not empty, push everything from stack1 to stack2.
//   3) Pop the element from stack2 and return it.
// Here time complexity will be O(n)

void enQueue(stack<int>& s1,int x){
    s1.push(x);
}

int deQueue(stack<int>& s1){
    int popped_item;
    if(s1.empty() && s2.empty()){
        throw invalid_argument("stack is empty");
    }
    else if (s2.empty()){
        while(s1.empty()!=true){
            s2.push(s1.top());
            s1.pop();
        }
        popped_item = s2.top();
        s2.pop();
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
// Method 2 is definitely better than method 1. 
// Method 1 moves all the elements twice in enQueue operation, while method 2 (in deQueue operation) moves the
// elements once and moves elements only if stack2 empty. So, the amortized complexity of the dequeue operation becomes \Theta (1)  . 
