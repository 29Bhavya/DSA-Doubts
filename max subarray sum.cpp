int main(){
int n=nums.size();
        int maxSum=INT_MIN;
        //int currSum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int currSum=0;
                for(int k=i;k<=j;k++){
                    currSum=currSum+nums[k];   
                }
                //cout<<currSum<<endl;
                maxSum=max(maxSum,currSum);
                //cout<<maxSum<<endl;
            }
        }
        return maxSum;
}
