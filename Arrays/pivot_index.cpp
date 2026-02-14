class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum=0;
        for(int num:nums){
            total_sum+=num;
        }
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            int rightsum=total_sum-leftsum-nums[i];
            if(leftsum==rightsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};
