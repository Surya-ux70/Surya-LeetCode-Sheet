class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> set = new  HashSet<Integer>();
        int n = nums.length;
        for(int i=0;i<n;i++){
            set.add(nums[i]);
        }
        if(set.size()<n)
        {
            return true;
        }
        return false;
    }
}