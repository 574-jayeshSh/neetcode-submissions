class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxCont = INT_MIN;
        int i = 0, j = heights.size()-1;
        int minHeight = INT_MAX;
        while(i < j){
            minHeight = min(heights[i],heights[j]);
            int area = minHeight * (j-i);
            if(minHeight == heights[i]){
                i++;;
            }
            else j--;
            maxCont = max(maxCont,area);
        }
        return maxCont;
    }
};
