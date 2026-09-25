class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int open = 0;
        int ans = 0;
        int i;
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
        return open + ans;
    }
};