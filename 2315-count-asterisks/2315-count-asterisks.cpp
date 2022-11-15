class Solution {
public:
    int countAsterisks(string s) {
        int n = s.size();
        int b=0,c=0;
        for(int i=0;i<n;i++){
           if(s[i] == '*' && b%2==0){
               c++;
           }
           if(s[i] == '|'){
               b++;
           }
        }
        return c;
        
    }
};