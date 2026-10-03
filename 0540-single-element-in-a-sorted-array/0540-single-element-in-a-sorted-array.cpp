class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Make mid even so we can compare (mid, mid+1)
            if (mid % 2 == 1) {
                mid--;
            }

            if (nums[mid] == nums[mid + 1]) {
                // Pair is correct, single is on the right
                left = mid + 2;
            }
            else {
                // Pair is broken, single is on the left or at mid
                right = mid;
            }
        }

        return nums[left];
    }
};