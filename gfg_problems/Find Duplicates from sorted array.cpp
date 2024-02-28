
class Solution{
public:
    int remove_duplicate(vector<int>& nums){
        // code here
        int i=1,j=0;
        while(i< nums.size()){
            if(nums[i]==nums[j]){
                i++;
            }
            //else{
                //j++;
                //a[j]=a[i];
                //i++;
            //}
            else nums[++j]=nums[i++];
        }
        return j+1;
    }
};

