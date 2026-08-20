class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freqs;

        for(int num : nums){
            freqs[num]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for(auto&[num,freq]:freqs){
            bucket[freq].push_back(num);
        }

        vector<int> result;

        for(int i = nums.size(); i>=0 && result.size() < k; --i){
            for(int num: bucket[i]){
                result.push_back(num);
                if(result.size() == k) break;
            }
        }
        return result;
    }
};
