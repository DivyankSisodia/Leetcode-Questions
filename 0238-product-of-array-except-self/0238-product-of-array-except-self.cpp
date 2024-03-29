class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> right(n);
        vector<int> left(n);
        right[0] = 1;
        for(int i=1; i<n; i++){
            right[i] = nums[i-1] * right[i-1];
        }
        
        left[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            left[i] = nums[i+1] * left[i+1];
        }
        
        vector<int> ans(n);
        for(int i=0; i<n;i++){
            ans[i] = right[i] * left[i];
        }
        return ans;
    }
};