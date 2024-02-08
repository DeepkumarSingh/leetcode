                                                                      // Negative visting Method time-O(n) Space-O(1)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        { 
            // evaluate index of selected element if array would have been sorted..
            int index = abs(nums[i]) - 1;
            
            // negate the element
            nums[index]*=-1;
            
            // if this element is positive means double negation had happened which 
            // means we editied this element twice.
            if(nums[index]>0)
                ans.push_back(index+1);  
        }
        return ans;
    }
};
