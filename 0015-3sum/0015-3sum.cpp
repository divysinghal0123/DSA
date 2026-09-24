class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int i = 0;
        for(i=0;i<n-2;i++){
            
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int left = i + 1;
            int right = n - 1;

            while(left < right){
                int sum = nums[i] + nums[right] + nums[left];

                if(sum == 0){
                    ans.push_back({nums[i],nums[right],nums[left]});
                    left ++;
                    right --;

                    // Skip duplicate left values
                    while(left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }

                    // Skip duplicate right values
                    while(left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }else if( sum > 0 ){
                    right --;
                }else if( sum < 0){
                    left ++;
                }
            }
        }
        return ans;
        
    }
};