class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int cnt=0;
            for(int n: nums){
                if(n<=mid) cnt++;
            }
            if(cnt<=mid) start=mid+1;
            else end=mid-1;
        }
        return start;
    }
};