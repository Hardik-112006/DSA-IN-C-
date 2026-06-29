class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,start,end,rowindex,colindex,mid;
        int N = matrix.size();
        int M = matrix[0].size();
        start = 0;
        end = N*M-1;
        
      
        while(start<=end){
            mid = start + (end-start)/2;

           int row_index = mid/M;
           int col_index = mid%M;

            if(matrix[row_index][col_index] == target){
             return 1;
            }
            else if(matrix[row_index][col_index] < target){
                start=mid+1;
            }
            else{
                end= mid -1;
            }
        }   
       
       return 0;
    }
};