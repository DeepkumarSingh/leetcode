class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector <int> ans;
        int n = mat.size();
        int OnesCount = INT_MIN;
        int Row_no=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)
                    count++;
            }
            if(count>OnesCount){
                OnesCount=count;
                Row_no=i;
            }
        }
        ans.push_back(Row_no);
        ans.push_back(OnesCount);
        return ans;
    }
};
