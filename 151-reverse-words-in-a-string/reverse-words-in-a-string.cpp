class Solution {
public:
    string reverseWords(string s) {
        string result = "";   // Final reversed string
        string word = "";     // Current word
        int n = s.length();

        for (int i = n - 1; i >= 0; i--) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
                word = s[i] + word;  // Build word from right to left
            } 
            else if (s[i] == ' ') {
                if (!word.empty()) {
                    if (!result.empty()) result += " ";
                    result += word;
                    word = "";
                }
            }
        }

        // Add last word if exists
        if (!word.empty()) {
            if (!result.empty()) result += " ";
            result += word;
        }

        return result;
    }
};