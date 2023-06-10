class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=n-1; i>=2; i--){
            int low = 0;
            int high = i-1;
            while(high > low){
                if(nums[low] + nums[high] > nums[i]){
                    ans = ans + (high - low);
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return ans;
    }
};