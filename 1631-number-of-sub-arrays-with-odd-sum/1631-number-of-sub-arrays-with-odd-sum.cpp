class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        // int cnt=0;
        // for(int i=0;i<arr.size();i++){
        //     int sum=0;
        //     for(int j=i;j<arr.size();j++){
        //         sum+=arr[j];
        //         if(sum%2!=0)    cnt++;
        //     }
        // }
        // return cnt;
        const int MOD = 1e9 + 7;
        long long cnt = 0;
        long long sum = 0;
        long long evenCount = 1, oddCount = 0;
        
        for (int num : arr) {
            sum += num;
            
            if (sum % 2 != 0) {
                cnt += evenCount;
                oddCount++;
            } else {
                cnt += oddCount;
                evenCount++;
            }

            cnt %= MOD;  
        }
        
        return cnt;
    }
};