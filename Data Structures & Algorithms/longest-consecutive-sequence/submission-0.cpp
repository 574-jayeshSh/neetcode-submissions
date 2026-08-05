class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            
            if(s.find(nums[i] - 1) == s.end()){
                int current = nums[i];
                int length = 1;

                while(s.find(current + 1) != s.end()){
                    length++;
                    current++;
                }
                count = max(count,length);
            }
        }
        return count;
    }
};
