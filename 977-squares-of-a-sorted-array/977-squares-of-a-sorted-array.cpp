class Solution {
public:
    int squares(int num){
        int res = (num*num);
        return res;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = squares(nums[i]);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};