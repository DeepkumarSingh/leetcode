class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Method 1 sorting method App. Time-O(nlogn ) Space-O(n)
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==nums[i+1])
        //     return nums[i];
        // }
        // return -1;

        // method 2 negative Mark appraoch time-O(n) Space-O(1)
        // for(int i=0;i<nums.size();i++){
        //     int index=abs(nums[i]);
        //     if(nums[index]<0){
        //         return index;
        //         break;
        //     }
        //     nums[index]=nums[index]*(-1); // or nums[index]*=-1;

        // }
        // return -1;

        // method 3(positioning Method )
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};
