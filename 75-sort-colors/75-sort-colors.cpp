class Solution {
public:
    
    void sortColors(vector<int>& nums) {
       int n  = nums.size();
       int l = 0,mid=0,h=n-1;
       for(int i=0;i<n;i++){
           if(nums[mid] == 0){
               int temp = nums[mid];
               nums[mid] = nums[l];
               nums[l] = temp;
               l++;
               mid++;
           }
           else if(nums[mid] == 1){
               mid++;
           }
           else if(nums[mid] == 2){
               int t = nums[mid];
               nums[mid] = nums[h];
               nums[h] = t;
               
               h--;
           }
       }
    }
};