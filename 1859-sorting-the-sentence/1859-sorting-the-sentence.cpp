class Solution {
public:
    string sortSentence(string s) {
        int n  = s.size();
        string word;
        vector<string> sp(10);
        for(int i=0;i<n;i++){
            if(s[i]>=48 && s[i]<=57){
                sp[s[i]-48] = word + " ";//suppose if s[i] = 3 then its ascii value is 5                  // then 51-48 = 3 then vector stores the string in 3rd posn
                word = "";
                //for the next iteration the word will be blank again
                i++;//bcoz the next character will be space
            }
            else{
                
            
            word += s[i];
            }    
                        
        }
        string ans;
        for(string x:sp){
            ans += x;
        }
        ans.pop_back();//bcoz if we dont do this we will get an extra space at last..to remove that
        return ans;
    }
};
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
