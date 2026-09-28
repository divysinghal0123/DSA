class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //hashing - Counting frequncy

        // int n = nums.size();
        // int hash[1000001] = {};
        // int i;
        // for(i=0;i<n;i++){
        //     hash[nums[i]]++;

        //     if(hash[nums[i]] > n/2){
        //         return nums[i];
        //     }
        // }
        // return -1;

       // Boyer - Moore Algorithm 

       int n = nums.size();
       int count = 0;
       int candidate = 0;
       int i;
       for(i=0;i<n;i++){
        if(count == 0){
            candidate = nums[i];
        }
        if(nums[i] == candidate){
            count++;
        }else{
            count--;
        }
       }
       return candidate;
    }
};