    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            
            if(sum<nums[i]){
                sum=nums[i];
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }