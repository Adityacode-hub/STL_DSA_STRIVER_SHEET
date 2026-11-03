class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>ans;
        int len1=nums1.size();
        int len2=nums2.size();
        for(int i=0;i<len1;i++)
        {
            
            for(int j=0;j<len2;j++)
            {
                int index=j;
              
                if(nums1[i]==nums2[j])
                {
                      bool found=false;
                    for(int k=index+1;k<len2;k++)
                    {
                        if(nums2[k]>nums1[i])
                        {
                            ans.push_back(nums2[k]);
                            found=true;
                            break;
                        }
                      
                    }
                 if(found==false)
                 {
                    ans.push_back(-1);
                 }
                 break;
                }
            }
        }
        return ans;
    }
};