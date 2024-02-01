                                                                             // simple method 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       
        vector<int> ans(nums.size(),0);
        int i=0;
        int j=1;
        for(int k=0;k<nums.size();k++)
        {
            if(nums[k]>0){
                ans[i]=nums[k];
                i=i+2;
            }
            if(nums[k]<0){
                ans[j]=nums[k];
                j=j+2;
            }
        }
        return ans;
    }
};
                                                                                // by using Modulus Operator
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] < 0)
            nums1.push_back(nums[i]);
            else nums2.push_back(nums[i]);
        }
        int j = 0,k = 0;
        for(int i = 0;i < nums.size();i++){
            if(i % 2 == 0) 
            {nums[i] = nums2[k];
            k++;
            }
            else {

             nums[i] = nums1[j];
                        j++;
                        }
        }
        return nums;
    }
};
