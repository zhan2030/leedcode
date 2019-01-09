//15. 3Sum
//Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
//Note:
//The solution set must not contain duplicate triplets.
//Example:
//Given array nums = [-1, 0, 1, 2, -1, -4],
//A solution set is:
//[
//  [-1, 0, 1],
//  [-1, -1, 2]
//]

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets{};
        
        sort(nums.begin(),nums.end());
        
        int ll=nums.size();
        int j=0;
        if (ll>=3){
        //fix at the i-th element, set two points, 1st moves from the (i+1)-th element to the right, 2nd moves from the last element to the left. 
            for(int i=0; i<nums.size()-2; i++){
                int k=i+1; 
                int r=nums.size()-1;
                while(k<r){
                    if(nums[i]+nums[k]+nums[r]==0){
                           if(j==0){
                            triplets.push_back({nums[i],nums[k],nums[r]});
                               j++;
                           }
                            else{
                                 for(int q=j-1; q>=0;q--){
                                 //check whether the triplet has appeared or not. If yes, skip this triple and search for the next. 
                                     if(triplets[q][0]==nums[i] && triplets[q][1]==nums[k] && triplets[q][2]==nums[r])
                                         break;
                                     if(q==0){
                                         triplets.push_back({nums[i],nums[k],nums[r]});
                                         j++;
                                     }
                            }
                           }     
                        r--;
                    }
                    else if(nums[i]+nums[k]+nums[r]>0){
                        r--;
                    }
                    else{
                        k++;
                    }    
                }
            }
        }
    return triplets;
    }
};
