class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> umap;
        for(auto i:s){
        
            if(umap[i-'a']==1){
                return i;
            }
            umap[i-'a']++;
        }
          return 'a';
    }
};