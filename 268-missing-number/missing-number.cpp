class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        map<int, int>m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        for(int i=0; i<=n; i++){
            if(m.find(i)==m.end()){
                return i;
            }
        }
        return -1;
        
    }
};