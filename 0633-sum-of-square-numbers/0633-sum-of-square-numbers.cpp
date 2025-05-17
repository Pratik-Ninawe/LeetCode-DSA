class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long left=0, right=sqrt(c);
        while(left<=right){
            long long sum=left*left + right*right;
            if(sum == c)    return true;
            else if(sum > c) right--;
            else    left++;
        }
        return false;
    }
};