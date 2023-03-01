class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        vector<vector<int>> ans;
        int i,j,k;
        for(i=0;i<len && nums[i]<=0;i++){
            while(i>0 && i<len && nums[i]==nums[i-1]){
                i++;
            }
            k=i+1;j=len-1;
            while(k<j){
                int sum=nums[i]+nums[k]+nums[j];
                if(sum==0){
                    ans.push_back(vector<int>{nums[i],nums[k],nums[j]});
                    k++;
                    while(k<j && nums[k]==nums[k-1]){
                        k++;
                    }
                }else if(sum<0){
                    k++;
                    while(k<j && nums[k]==nums[k-1]){
                        k++;
                    }
                }else{
                    j--;
                    while(j>k && nums[j]==nums[j+1]){
                        j--;
                    }
                }
            }
        }
        return ans;
    }
    // vector<vector<int>> threeSum(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<nums.size();i++){
    //         printf("%d\t",nums[i]);
    //     }
    //     vector<vector<int>> ans;
    //     for(int i=0;i<nums.size() && nums[i]<=0;i++){
    //         if(i>0 && nums[i]==nums[i-1]){
    //             continue;
    //         }
    //         for(int j=nums.size()-1;j>=0 && nums[j]>=0;j--){
    //             if(j< nums.size()-1 && nums[j]==nums[j+1]){
    //                     continue;
    //                 }
    //             for(int k=i+1;k<j;k++){
    //                 if(k>i+1 && nums[k]==nums[k-1]){
    //                     continue;
    //                 }
    //                 if(nums[i]+nums[k]+nums[j]==0){
    //                     printf("dd");
    //                     ans.push_back(vector<int>{nums[i],nums[k],nums[j]});
    //                 }
    //             }
    //         }
    //     }
    //     return ans;
    // }
};