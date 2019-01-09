//27. Remove Element (easy)
//Given an array nums and a value val, remove all instances of that value in-place and return the new length.

//Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

//The order of elements can be changed. It doesn't matter what you leave beyond the new length.

//Example 1:

//Given nums = [3,2,2,3], val = 3,

//Your function should return length = 2, with the first two elements of nums being 2.

//It doesn't matter what you leave beyond the returned length.

//Example 2:

//Given nums = [0,1,2,2,3,0,4,2], val = 2,

//Your function should return length = 5, with the first five elements of nums containing 0, 1, 3, 0, and 4.

//Note that the order of those five elements can be arbitrary.

//It doesn't matter what values are set beyond the returned length.

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int L=nums.size();
        //if the vector is empty
        if(L==0)
            return 0;
        
        //if the vector has only one element 
        else if(L==1){
            if(val==nums[0]){
                nums={};
                return 0;
            } 
            else{
                return 1; 
            }
        }
        //if the vector has more than one element 
        else{
            int j=0;
            for(int i=0; i<L; i++){
                if(nums[i]==val){   
                    for(j=i+1; j<L; j++){
                        if(nums[j]!=val){
                            nums[i]=nums[j];
                            nums[j]=val;
                            break;
                        }
                    }
                    if(j==L && nums[j-1]==val)
                        return i;  
                }
            }
            //if the vector does not contain val
            if(j==0)
                return L;
        }     
    }
};

//comments: syntax error: 1
//algorithm error: 1 (for loop process)
//initalization -> check condition -> satisfied, run code -> increase counter. 
//can be simpler. Find the number of no-val elements, and if nums[i]=val, change nums[i]=nums[j]. 

