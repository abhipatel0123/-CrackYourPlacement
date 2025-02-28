Find the Duplicate Number

int findDuplicate(vector<int>& nums) {
        // int len =nums.size()+1;
        // int arr[len]={0};
        map<int,int> arr;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
            if(arr[nums[i]] >=2){
                return nums[i];
            }
        }
        return 1;
    }

->Sort Colors

    int arr[]= {0,0,0};
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        nums.clear();
        for(int i=0;i<3;i++){
            for(int j=0;j<arr[i];j++){
                nums.push_back(i);
            }
        }

Remove Duplicates from Sorted Array

int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }

Move Zeros -both 4 and 5

void moveZeroes(vector<int>& nums) {
        int it =0;
        for(int i=0;i<nums.size()-it;i++){
            if(nums[i] == 0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                it++;
                i--;
            }
        }
    }


Best Time to Buy and Sell Stock

int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < prices.size(); i++) {
        if(prices[i] < minPrice) {
            minPrice = prices[i];
        } else if(prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
    }