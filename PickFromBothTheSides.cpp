/*
Problem Description

Given an integer array A of size N.

You can pick B elements from either left or right end of the array A to get maximum sum.

Find and return this maximum possible sum.
*/
int Solution::solve(vector<int> &A, int B) {
    vector<int> P(A.begin(),A.end()),S(A.begin(),A.end());
    for(int i=0;i<(A.size()-1);i++){
        P[i+1]+= P[i];
        // cout<<P[i]<<endl;
    }
    for(int i=(A.size()-1);i>=1;i--){
        S[i-1]+= S[i];
    }
    int maxi=INT_MIN;
    for(int i=(B-2);i>=0;i--){
        int sum = P[i]+S[A.size()-(B-(i+1))];
        maxi = max(maxi,sum);
    }
    maxi =max(maxi,max(P[B-1],S[A.size()-B]));
    return maxi;
}
