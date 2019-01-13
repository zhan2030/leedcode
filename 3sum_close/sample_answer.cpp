class Solution {
public:
    int partition(vector<int>& arr,int l,int r){
        int i=l-1;
        auto pivot_position = r;
        for(int j=l;j<pivot_position;j++){
            if(arr[j]<arr[pivot_position]){
                i++;
                auto temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        auto temp = arr[i+1];
        arr[i+1] = arr[r];
        arr[r] = temp;
        return i+1;
    };
    void quicksort(vector<int>&arr, int l,int r){
        if(l<r){
            auto pivot = partition(arr,l,r);
            quicksort(arr,l,pivot-1);
            quicksort(arr,pivot+1,r);
        }
    };
    
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3) return -1;
        
        // first sort the array using quick sort.
        quicksort(nums,0,nums.size()-1);
        int closestsum = nums[0]+nums[1]+nums[2];

        for(int i=0;i<nums.size()-2;i++){
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(abs(sum-target)<abs(closestsum-target))
                    closestsum = sum;
                
                if(sum<target) left++;
                else right--;
            }
        }
        return closestsum;
        
    }
};
