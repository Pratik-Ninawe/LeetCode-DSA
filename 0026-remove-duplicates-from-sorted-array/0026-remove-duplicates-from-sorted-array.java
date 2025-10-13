class Solution {
    public int removeDuplicates(int[] nums) {
        Set<Integer> set = new HashSet<>();
        int index=0;
        for(int a : nums){
            if(!set.contains(a)){
                nums[index] = a;
                set.add(a);
                index++;
            }
        }
        return set.size();
    }
}