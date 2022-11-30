class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> s;
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            umap[arr[i]]++;
        }
        for(auto i:umap)
        {
            s.insert(i.second);
        }
        return s.size() == umap.size();
    }
};