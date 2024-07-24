// Find All Duplicates in an Array

vector<int> findDuplicates(vector<int>& nums) {
        vector<int> x;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if((nums[i]^nums[i+1]) == 0)
            {
                x.push_back(nums[i]);
                // i++;
            }
        }
        return x;
    }


//  Spiral Matrix 

     vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> x;
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0,right=n-1,top=0,bottom=m-1;

        while(left<=right && top<=bottom )
        {
            for(int i=left;i<=right;i++)
            {
                x.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                x.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    x.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    x.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return x;

    }


// Valid Parentheses
 bool isValid(string s) {
        stack<char> st;
    for(size_t i = 0; i < s.length(); ++i) {
        char c = s[i];
        if(c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if(st.empty()) return false;
            char top = st.top();
            st.pop();
            if((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    return st.empty();
    }

//  Longest Common Prefix

string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j);
        }

        return prefix;
    }