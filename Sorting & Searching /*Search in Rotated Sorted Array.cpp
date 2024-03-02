// Important questions 
class Solution {
public:
     int find_pivot_element(vector<int>& nums){
         int size=nums.size();
         int start=0;
         int end=size-1;
         int mid=start+(end-start)/2; // why this because if the sum of start and end will not cross the range of integer that's why
         while(start<=end){
             if(start==end) return start;
             else if(mid-1>=0 && nums[mid]<nums[mid-1]) return mid-1;
             else if(mid+1<size && nums[mid]>nums[mid+1]) return mid;
             else if(nums[start]>nums[mid]) end=mid-1;
             else start=mid+1;
             // update mid
             mid=start+(end-start)/2;
         }
         return -1;
     }
    int binarySearch(vector<int>& nums, int start,int end,int target){
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) start=mid+1;
            else end=mid-1;
            // up-date mid
            mid=start+(end-start)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivotIndex=find_pivot_element(nums);
        int size=nums.size();
        int  ans=-1;
        // Search in A (Increasing part)
        if(target>=nums[-0] && target<=nums[pivotIndex]){
            ans=binarySearch(nums,0,pivotIndex,target);
        }
        else{
            ans=binarySearch(nums,pivotIndex+1,size-1,target);
        }
        return ans;
    }
};
