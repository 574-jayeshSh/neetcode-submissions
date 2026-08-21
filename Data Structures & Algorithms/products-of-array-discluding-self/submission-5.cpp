class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> leftProduct(n,1);

        leftProduct[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            leftProduct[i] = leftProduct[i-1] * nums[i-1];
        }

        int rightProduct = 1;
        vector<int>ans(n,0);

        for(int i = n-1; i>=0; i--){
            ans[i] = leftProduct[i] * rightProduct;
            rightProduct *= nums[i];
        }

        return ans;
    }
};
