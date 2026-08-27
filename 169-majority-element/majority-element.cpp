class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int val=n/2;
        map<int, int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>val){
                return i.first;
            }
        }
        return -1;
        
    }
};