//Chocolate Distribution Problem

 long long findMinDiff(vector<long long> a, long long n, long long m){
    // code
        if(a.size() < m){
            return 0;
        }
           sort(a.begin(),a.end());
           int min=INT_MAX;
           for(int i=0;i<=a.size()-m;i++){
               int diff =a[i+m-1]-a[i];
               if(diff<min ){
                   min=diff;
               }
           }
           return min;
    
    }


//Two Sum 

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+ nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }

// Best Time to Buy and Sell Stock II
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int n =prices.size();
        for(int i=0;i<n-1;i++){
            if(prices[i+1] > prices[i]){
                sum+=prices[i+1] - prices[i];
            }
        }
        return sum;
    }