class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        for(int i=0; i<n; i++){
            right += nums[i];
        }
        
        for(int i=0; i<n; i++){
            right = right - nums[i];
            if(left == right){
                return i;
            }
            left = left + nums[i];
        }
        return -1;
    }
};