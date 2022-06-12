class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    if(nums[i]-nums[j] == k){
                        c++;
                    }
                }
                else if(nums[i]<nums[j]){
                    if(nums[j]-nums[i] == k){
                        c++;
                    }
                }
                    
                
            }
        }
        return c;
    }
};