class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size(), i=0,j=0,k=0;
        int n3=n1+n2;
        vector<int> nums3(n3);
        while(n1>i && n2>j){
            if(nums1[i]<nums2[j]){
                nums3[k]=nums1[i];
                k++;
                i++;
            }
            else{
                nums3[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(n1>i){
            nums3[k]=nums1[i];
            i++;
            k++;
        }
        while(n2>j){
            nums3[k]=nums2[j];
            j++;
            k++;
        }
        int mid;
        if(n3 % 2 !=0){
            mid=(n3-1)/2;
            return nums3[mid];
        }
        else{
            mid=(n3/2)-1;
            return (nums3[mid]+nums3[mid+1])/2.0;
        }
        return {};
    }
};