/*program to get all subsets of an array 
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size(); 
        int p=1<<n; //2^n
        vector<vector<int>> sub(p);
        for(int i=0;i<p;i++){
            for(int j=0;j<n;j++){
                if(i>>j&1){ //
                    sub[i].push_back(nums[j]);
                }
            }
        }
      return sub;  
    }
};
