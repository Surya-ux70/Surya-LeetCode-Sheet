class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return;
        }
        int l =0,r=1;
        while(r<n){
        
         if(nums[l]!=0 && nums[r] == 0)
            {
                l++;
                r++;
            }
            else  if(nums[l] == 0 && nums[r]!=0 )
            {
                int  temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;
                l++;
                r++;
            }
             else if(nums[l] == 0 && nums[r] == 0){
                r++;
            }
            else{
                l++;
                r++;
            }
        }
            
        
        
        
    }
};