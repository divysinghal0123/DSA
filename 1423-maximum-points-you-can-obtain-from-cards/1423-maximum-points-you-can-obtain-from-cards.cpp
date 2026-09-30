class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int lsum = 0;
        int rsum = 0;
        int maxsum = 0;
        int i;
        for(i=0;i<k;i++){
            lsum = lsum + nums[i];
        }
        maxsum = lsum;
        for(i=k-1;i>=0;i--){
            lsum = lsum - nums[i];
            rsum = rsum + nums[right];
            maxsum = max(maxsum,lsum+rsum);
            right--;
        }
        return maxsum;
    }
};