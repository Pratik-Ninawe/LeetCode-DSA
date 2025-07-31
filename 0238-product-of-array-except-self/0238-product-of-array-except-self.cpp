class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n,1);
        vector<int> suff(n,1);
        vector<int> output(n,1);


        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
        for(int j=n-2;j>=0;j--){
            suff[j]=suff[j+1]*nums[j+1];
        }
        for(int i=0;i<n;i++){
            output[i]=pre[i]*suff[i];
        }
        return output;
    }
};