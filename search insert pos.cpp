int main(){
  int searchInsert(vector<int>& nums, int target) {
        int x=0;
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                x=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        if(nums[x]>target) return x;
        else return x+1;
    }




}
