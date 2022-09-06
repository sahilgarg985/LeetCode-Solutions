class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> num2 = nums;
        for(int i=0;i<nums.size();i++){
            num2.push_back(nums[i]);
        }
        return num2;
    }
};