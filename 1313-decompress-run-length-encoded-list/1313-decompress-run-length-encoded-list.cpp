class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v2;
        for(int i=0;i<nums.size();i=i+2){
            pair<int,int> p = {nums[i],nums[i+1]};
            
            vector<int> v(nums[i],nums[i+1]);
            
            for(int j=0;j<v.size();j++){
                v2.push_back(v[j]);
            }
            
        }
        return v2;
    }
};