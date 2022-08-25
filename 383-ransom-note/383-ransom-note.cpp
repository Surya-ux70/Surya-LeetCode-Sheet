class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int>  umap;
        for(char c:magazine){
            umap[c]++;
        }
        for(char c:ransomNote){
            if(umap[c]>0){
                umap[c]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};