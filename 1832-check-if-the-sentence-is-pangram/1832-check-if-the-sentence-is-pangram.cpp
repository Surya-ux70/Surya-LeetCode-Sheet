class Solution {
public:
    bool checkIfPangram(string sentence) {
           set<int> s;
           for(auto i:sentence)s.insert(i);
            
           if(s.size() == 26)return true;
        return false;
    }
};