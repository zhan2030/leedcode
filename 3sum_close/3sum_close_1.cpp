//16. 3Sum Closest
//Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.
//Example:
//Given array nums = [-1, 2, 1, -4], and target = 1.
//The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum;
   
    int L=nums.size();
    sort(nums.begin(),nums.end());
    
    for(int i=0; i<L; i++)
        cout<<nums[i]<<" ";
    cout<<endl;

    int p=-1;
    int q=L-1;
    int temp; 
        
    //fix the 1st element of a triple, moving the 2nd element from the i+1 th element to right, 3rd element from the L th element to left.     
    for(int i=0; i<L-2; i++){
        p=i+1; q=L-1;
        while(q-p>=1){
            temp=nums[i]+nums[p]+nums[q];
      
            if((i==0 && p==i+1 && q==L-1)||abs(temp-target)<abs(sum-target))
                sum=temp;
            
            if(temp>target)
                q=q-1;
            else if(temp<target)
                p=p+1;
            else if(temp==target)
                return target;
        }
    }
    return sum;
    }
};
