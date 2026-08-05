class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]] = i;
        }
        set<vector<int>>triplets;
        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                int sumOf2 = -1*(nums[i] + nums[j]);
                
                auto it = mp.find(sumOf2);
                if(it != mp.end()){
                    if(it->second == i || it->second == j) continue;
                    vector<int> temp = {nums[i], nums[j], sumOf2};
                    sort(temp.begin(), temp.end());
                    triplets.insert(temp);
                }
            }
        }
        vector<vector<int>>ans(triplets.begin(),triplets.end());
        return ans;
    }
};
