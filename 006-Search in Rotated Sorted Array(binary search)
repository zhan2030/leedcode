//33. Search in Rotated Sorted Array 
//Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
//(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).
//You are given a target value to search. If found in the array return its index, otherwise return -1.
//You may assume no duplicate exists in the array.
//Your algorithm's runtime complexity must be in the order of O(log n).
//Example 1:
//Input: nums = [4,5,6,7,0,1,2], target = 0， Output: 4

//Example 2:
//Input: nums = [4,5,6,7,0,1,2], target = 3，  Output: -1


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int L=nums.size();
        
        //if the vector is empty, return -1
        if(L==0)
            return -1;
        
        //if the vector has only one element 
        if(L==1){
            if(nums[0]==target)
                return 0;
            else 
                return -1;
            }
        
        //if there is more than one element
        //find the rotating point
        int p=0;
        int q=L-1;
        
        while(nums[p]>nums[q] && q-p>1){
            int temp1=ceil((p+q)/2);
            if(nums[temp1]>nums[p])
                p=temp1;
            else 
                q=temp1;
        }
        //if the vector is not rotated
        if(nums[p]<nums[q]){
            p=q=0;
        }
         
        //locate the target 
        int k=-1;
        int j=-1;
        int pp[]={0,p,q,L-1};
        for (int i=0; i<4; i++){
              if(nums[pp[i]]==target)
                  return pp[i];
        }
        
        if(target>nums[0] && target<nums[p]){            //cout<<"part 1"<<endl;
            k=0;
            j=p;
        }
        else if(target>nums[q] && target<nums[L-1]){     //cout<<"part 2"<<endl;
            k=q;
            j=L-1;
        }
        else
            return -1;
        
        while(j-k>1){
            int temp2=ceil((k+j)/2);
            if(nums[temp2]>=target){
                j=temp2;  
            }
            else if(nums[temp2]<target){
                k=temp2;  
            }
            if(nums[k]==target){
                return k;}
            else if(nums[j]==target){
                return j;}
        }
        if(j-k==1 && target>nums[k] && target<nums[j])
                return -1;
    }
};
