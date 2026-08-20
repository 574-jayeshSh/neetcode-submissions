class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>>ans;

      unordered_map<string,vector<string>> match;

      for(auto str : strs){
        string s = str;
        sort(s.begin(), s.end());

        
         match[s].push_back(str);
      } 

      for(auto ch : match){
        ans.push_back(ch.second);
      }

        return ans;
    }
};
