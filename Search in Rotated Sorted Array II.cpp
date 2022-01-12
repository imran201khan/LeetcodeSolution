
 bool search(vector<int>& nums, int target) {
        
        int i=0;
     
        int j=nums.size()-1;
       while(i<=j){
           int mid=i+(j-i)/2;
        if(target==nums[mid]){
            return true;
        }
        if(nums[i]==nums[mid] && nums[j]==nums[mid]){
            j--;
            i++;
        }
          else if(nums[i]<=nums[mid]){
              if(nums[i]<=target && target<nums[mid]){
                  j=mid-1;
              }
              else{
                  i=mid+1;
              }
          }
           else{
               if(nums[j]>=target && nums[mid]<target){
                   i=mid+1;
               }
               else{
                   j=mid-1;
               }
           }
       }                                  
        return false;
    }
};