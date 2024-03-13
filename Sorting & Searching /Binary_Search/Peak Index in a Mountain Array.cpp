class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size=arr.size();
        int start=0;
        int end=size-1;
        //int mid = start+(end-start)/2;
        while(start<end){ // Special Case where start is less than end (start<end)-- To avoid infinite Loop 
            int mid = start+(end-start)/2;
            if(arr[mid]<arr[mid+1]){ // means we are in part A(increasing function)
            // if we are in part A and we have to find peak index just go to Right part
            start=mid+1;
            }
            else{
                // If i'm in Part B(Decreasing function ) go to left part 
                end=mid; // Why do this ? beacause peak index will be skip in this case 

            }
            // mid_Update 
            //mid=start+(end-start)/2;
        }
        return start;
    }
};
