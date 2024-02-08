class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // best method 
        vector<int> ans;

        for(int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }

        return ans;
        
        //method 2- my appraoch 
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(j-i==n){
        //             ans.push_back(nums[i]);
        //             ans.push_back(nums[j]);
        //         }
        //     }
        // }
        // return ans;
    }
};
