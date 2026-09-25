class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int i,j,k;
        int ans = 0;
        for(i=0;i<n;i++){
            int freq[26] = {};

            for(j=i;j<n;j++){
                freq[s[j] - 'a']++;

                int maxfreq = INT_MIN;
                int minfreq = INT_MAX;
                for(k=0;k<26;k++){
                    if(freq[k] > 0){
                        maxfreq = max(maxfreq,freq[k]);
                        minfreq = min(minfreq,freq[k]);
                    }
                }
                ans = ans + (maxfreq - minfreq);
            }
        }
        return ans;
    }
};