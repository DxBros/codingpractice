/*Problem Description

You are in an infinite 2D grid where you can move in any of the 8 directions

 (x,y) to 
    (x-1, y-1), 
    (x-1, y)  , 
    (x-1, y+1), 
    (x  , y-1),
    (x  , y+1), 
    (x+1, y-1), 
    (x+1, y)  , 
    (x+1, y+1) 
You are given a sequence of points and the order in which you need to cover the points.
Give the minimum number of steps in which you can achieve it. You start from the first point.*/


int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    if(A.size()==1 && B.size()==1)return 0;
    int x_curr=A[0],y_curr=B[0],steps=0;
    int i=1,n= A.size();
    while(i<A.size()){
        while(x_curr!=A[i] && y_curr!=B[i] ){
            if(x_curr == A[i] && y_curr==B[i])break;
            else if(x_curr>A[i] && y_curr>B[i]){
                x_curr--;
                y_curr--;
            }
            else if(x_curr<A[i] && y_curr>B[i]){
                x_curr++;
                y_curr--;
            }
            else if(x_curr>A[i] && y_curr<B[i]){
                x_curr--;
                y_curr++;
            }
            else{
                x_curr++;
                y_curr++;
            }
            steps++;
        }
        if(x_curr==A[i] && y_curr==B[i])i++;
        else if(x_curr==A[i] && y_curr!=B[i])steps +=abs(B[i]-y_curr),y_curr=B[i],i++;
        else if(x_curr!=A[i] && y_curr==B[i])steps += abs(A[i]-x_curr),x_curr=A[i],i++;
        }
    return steps;
}
