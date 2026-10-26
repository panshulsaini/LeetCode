class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int st = 0, end = rows - 1, mid1, mid2;
        while (st <= end){

            mid1 = st + (end - st)/2;

            if (target >= matrix[mid1][0] && target <= matrix[mid1][cols - 1]){
                int cst = 0, cend = cols - 1;
                while (cst <= cend){
                    mid2 = cst + (cend - cst)/2;
                    if (target == matrix[mid1][mid2]){
                        return true;
                    }else if(target > matrix[mid1][mid2]){
                        cst = mid2 + 1;
                    }else if(target < matrix[mid1][mid2]){
                        cend = mid2 - 1;
                    }
                }
                return false;
            }else if (target > matrix[mid1][cols-1]){
                st = mid1 + 1;

            }else if (target < matrix[mid1][0]){
                end = mid1 - 1;
            }
        }
        return false;
    }
};