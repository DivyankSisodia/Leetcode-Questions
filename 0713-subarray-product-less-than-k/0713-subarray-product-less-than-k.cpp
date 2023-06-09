class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int prod = 1;
        if( k <= 1){
            return 0;
        }
        int ans = 0;
        
        for(int right = 0; right < n; right++){
            prod = prod * nums[right];
            while(prod >= k){
                prod = prod / nums[left];
                left++;
            }
            ans = ans + (right-left+1);
        }
        return ans;
    }
};