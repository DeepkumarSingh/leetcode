class Solution {
public:
    void sortColors(vector<int>& nums) {
    int size=nums.size();
    int index=0;
    int left=0;
    int right=size-1;
    while(index<=right){
        if(nums[index]==0){
            swap(nums[index],nums[left]);
            left++;
            index++;
        }
        else if(nums[index]==2){
            swap(nums[index],nums[right]);
            right--;
        }
        else{
            index++;
        }
    }
//     int size= nums.size();
//     int zeroCount=0;
//     int onesCount=0;
//     int twosCount=0;
//     for(int i=0;i<size;i++){
//         if(nums[i]==0){
//             zeroCount++;
//         }
//         if(nums[i]==1){
//             onesCount++;
//         }
//         if(nums[i]==2){
//             twosCount++;
//         }
//     }
//     int index =0;
//     while(zeroCount--){
//         nums[index]=0;
//         index++;
//     }
//     while(onesCount--){
//         nums[index]=1;
//         index++;
//     }
//     while(twosCount--){
//         nums[index]=2;
//         index++;
//     }
//     for(int i=0; i<size; i++) {
//     cout << nums[i] << " ";
// }
    }
};