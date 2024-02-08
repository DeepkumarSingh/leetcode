                                                                                    // Approach 1(uisng Utility Function)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // TRANSPOSE THE MATRIX 
        for(int i=0;i<n;i++){
            for(int j=i;j<matrix[i].size();j++){ // here j=i for making tranpose better 
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // REVERSE ALL ith Row of Matrix 
        for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
                                                                                  // Appraoch 2 (by making reverse function )
class Solution {
public:
    void reverse_vector(vector<int>& arr){
        int n=arr.size();
        int start =0;
        int end=n-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // TRANSPOSE THE MATRIX 
        for(int i=0;i<n;i++){
            for(int j=i;j<matrix[i].size();j++){ // here j=i for making tranpose better 
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // REVERSE ALL ith Row of Matrix 
        for(int i=0;i<n;i++){
        reverse_vector(matrix[i]);
        }
    }
};
