                                                                                        // Sum Approach (best complexity for this prob.)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int index=0;index<n;index++){
            sum=sum+nums[index];
        }
        int totalsum=(n*(n+1))/2;
        int missing =totalsum-sum;
        return missing; 
    }
};
