class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],maxsum=nums[0];
        for(int i =1;i<nums.size();i++){
            sum += nums[i];
            sum = max(sum,nums[i]);
            maxsum = max(sum,maxsum);
        }
        return maxsum;
    }
};
//O(n) time complexity
