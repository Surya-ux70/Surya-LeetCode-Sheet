class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dp;
        for(int n:nums){
            dp.insert(n);
        }
        if(dp.size()<nums.size())
            return true;
        
        return false;
        
    }
};