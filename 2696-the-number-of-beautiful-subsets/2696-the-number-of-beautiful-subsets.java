class Solution {
    public int beautifulSubsets(int[] nums, int k) {
        List<Integer> list = new ArrayList<>();
        return helper(nums,0,k,list)-1;
        
    }

    int helper(int[] nums,int index,int k,List<Integer> list){
        if(index == nums.length) return 1;

        //pick
        int pick = 0;
        if(!list.contains(nums[index]+k) && !list.contains(nums[index]-k)){
            list.add(nums[index]);
            pick = helper(nums,index+1,k,list);
            list.remove(list.size()-1);
        }

        //notpick
        int notpick = helper(nums,index+1,k,list);

        return pick+notpick;
    }
}