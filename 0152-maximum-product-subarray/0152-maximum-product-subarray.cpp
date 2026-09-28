class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];
        int i;
        for(i=1;i<n;i++){
            int num = nums[i];
            int currmin = min({num,num*mini,num*maxi});
            int currmax = max({num,num*mini,num*maxi});

            maxi = currmax;
            mini = currmin;

            ans = max(ans,maxi);
        }
        return ans;
    }
};