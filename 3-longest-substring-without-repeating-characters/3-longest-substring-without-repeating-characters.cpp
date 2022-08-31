class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        int  n = s.size();
        int len = 0;
        vector<int> sp(256,-1);
        int start=0,end =0;
        while(end<n){
            if(sp[s[end]] != -1){
                start = max(start,sp[s[end]]+1);
            }
            sp[s[end]] = end;
            len = max(len,end-start+1);
            end++;
        }
        return len;
    }
};