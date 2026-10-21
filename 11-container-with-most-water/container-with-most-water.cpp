class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, rp = height.size()-1, ans = 0, ht, curr, w;
        while (lp < rp){
            w = rp - lp; ht = min(height[lp], height[rp]);
            curr = w * ht; ans = max(ans, curr);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return ans;
    }
};