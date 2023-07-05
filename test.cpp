class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> mpp(256, -1);

        int left = 0;
        int right = 0;
        int n = s.size();

        int len = 0;

        while(right < n)
        {
            if(mpp[s[right]] != -1)   // is character present in our map or not
            {    // it is
                left = max(mpp[s[right]] + 1, left);  //then check is character's index value
            }                                        // smaller/larger than the index value stored by the "left"

// if the index value of character is smaller than the index value stored by the "left"
// It's mean we already skip the character it is no longer in our substring.                
        

            mpp[s[right]] = right;    // updating or storing the index value of character in our map; 

            len = max(len, (right - left + 1));    // updating the length
            right++;                // moving forward in our string
        }
    return len;
    }
};