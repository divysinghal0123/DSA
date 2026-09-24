class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;
        int i;
        for(i=0;i<n;i++){
            sum = sum + nums[i]; //Here we are just adding the next number in the sum rather then again and agin doing the sum if an array.
            maxi = max(maxi,sum);

            if(sum < 0 ){
                sum = 0;
            }
        }
        return maxi;
    }
};