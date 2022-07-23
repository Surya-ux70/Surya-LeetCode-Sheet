class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 0){
            return  0;
        }
        int res=nums[0],r=1,l=1;
        for(int i=0;i<n;i++){
            l = (l) * nums[i];
            r = (r) * nums[n-i-1];
            res = max(res,max(l,r));
            
            if(l == 0)
                l = 1;
            if(r == 0)
                r = 1;
            
        }
        return res;
        
    }
};