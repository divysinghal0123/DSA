class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int i;
        int open = 0;
        int ans = 0;
        for(i=0;i<n;i++){
            if(s[i] == '('){
                open++;
            }
            else{
                if(open > 0){
                    open--;
                }else{
                    ans++;
                }
            }
        }
        return ans + open;
    }
};