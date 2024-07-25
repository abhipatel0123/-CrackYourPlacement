// Subarray Sums Divisible by K

int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1; 
    int sum = 0, count = 0;

    for(int num : nums) {
        sum += num;
        int remainder = (sum % k + k) % k; 
        if (prefixSumCount.find(remainder) != prefixSumCount.end()) {
            count += prefixSumCount[remainder];
        }
        prefixSumCount[remainder]++;
    }

    return count;

    }