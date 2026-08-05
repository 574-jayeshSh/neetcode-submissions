class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>mpp;
        for(int i = 0; i<nums.size(); i++){
            int scndDigit = target - nums[i];
            if(mpp.count(scndDigit)){
                vector<int>ans = {i,mpp[scndDigit]};
                sort(ans.begin(),ans.end());
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
    }
};
