class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size()-1;
        vector<pair<int,int>>v;
        for(int i=0;i<=n;i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        
        int i=0;
        int j=n;
        
        while(j>i)
        {
            if((v[i].first+v[j].first)==target)
            {
                ans.push_back(v[i].second);
                ans.push_back(v[j].second);
                break;
            }
            else if((v[i].first+v[j].first)>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};
