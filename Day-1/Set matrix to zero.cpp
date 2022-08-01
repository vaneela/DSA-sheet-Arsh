class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       vector<int> r,c;
       int sizec = matrix[0].size(), sizer = matrix.size();
       for(int i=0; i< sizer; i++){
            for(int j = 0; j < sizec ; j++){
                if(matrix[i][j]==0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        for(int n : r){
            for(int i =0; i< sizec; i++){
                matrix[n][i]=0;
            }
        }
        for(int n : c){
            for(int i=0; i< sizer;i++){
                matrix[i][n] = 0;
            }
        }
    }
};