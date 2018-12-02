# Given an array of integers, return indices of the two numbers such that they add up to a specific target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# Example:

# Given nums = [2, 7, 11, 15], target = 9,

# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1].

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> comp(n-1);
        vector<int> twoSum;
        // find the pair     
        for (int i=0; i<n; i++){
            comp[i]=target-nums[i];
            if (i>0){
                for (int j=0;j<i;j++){
                     if (comp[j]==nums[i]){
                           twoSum={j,i};
                           return twoSum;
                     }
                } 
            }
        }
        // display the result to the users
        //for (int i=0; i<twoSum.size();i++){
          //  for (int j=0;j<twoSum[i].size();i++){
            //    cout<<twoSum[i][j];
            //}
          //cout<<endl;      
        //}       
    }
};
