class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        int  n = s.size();
        int len = 0;
        unordered_map<char, int> sp;//to store the char and the last seen index
        int left=0,right=0;
        while(right<n)
        {
            if(sp.find(s[right]) != sp.end()){
                left = max(sp[s[right]]+1,left);
            }
            sp[s[right]] = right;//to store the last seen index of char
            len = max(len,right-left+1);
            right++;//incrementing right
            
        }
    
        return len;
    }
};