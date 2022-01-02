class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      //solution 1-O(n)
        map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
            if(mp[i]>=2){
                return true;
            }
        }
        return  false;
        
      //solution 2-O(logn + n)
        unordered_set<int> s(nums.begin(),nums.end());
        if(s.size()==nums.size())return false;
        else return true;
        
      //solution 3 -O(nlogn)
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()-1)
        {
            if (nums[i] == nums[i+1]){
                return true;
            }
            i++;
        }

        return false;

    }
};
