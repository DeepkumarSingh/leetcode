                                                                                // Approach 1
                                                                                // time complexity O(n^2) and space comploexity O(1)
class Solution {
public:
    int find_pivot_index(vector<int>& nums){
        int n= nums.size();
        for(int i=0;i<n;i++){
        int leftSum=0;
        int RightSum=0;
            for(int j=0;j<i;j++){
                leftSum+=nums[j];
            }
            for(int j=i+1;j<n;j++){
                RightSum+=nums[j];
            } 
            if(leftSum==RightSum)
            return i;   
    }
    return -1;
    }
    int pivotIndex(vector<int>& nums) {
    return find_pivot_index(nums);
    }
};
                                                                                //Apprapch 2 
                                                                                //time complexity O(n) and Space complexity O(n)
class Solution {
public:
    int find_pivot(vector<int>& nums){
        int n=nums.size();
        vector<int>lsum(n);
        vector<int>Rsum(n);
        for(int i=1;i<n;i++){
            lsum[i]=lsum[i-1]+nums[i-1];
            cout<<lsum[i]<<" ";
        }
        for(int i=n-2;i>=0;i--){
            Rsum[i]=Rsum[i+1]+nums[i+1];
            cout<<Rsum[i]<<" ";
        }
    
        for(int i=0;i<n;i++){
            if(lsum[i]==Rsum[i]) return i;
     }
     return -1;
    }
    int pivotIndex(vector<int>& nums) {
    return find_pivot(nums);
    }
};
                                                                                
