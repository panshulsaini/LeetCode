class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        std::vector<int>ansVec = nums1;
        ansVec.insert(ansVec.end(), nums2.begin(), nums2.end());
        std::sort(ansVec.begin(), ansVec.end());
        int n = ansVec.size();
        if (n % 2 == 0){
            ans = (ansVec[(n/2)-1] + ansVec[(n/2)]) / 2.0;
        } else{
            ans = ansVec[(n+1)/2 - 1];
        }
        return ans;
    }
};