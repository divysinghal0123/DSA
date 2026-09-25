class Solution {
public:
    string countAndSay(int n) {

        string s = "1";

        for (int x = 1; x < n; x++) {

            string temp = "";

            for (int i = 0; i < s.size(); ) {

                int count = 0;
                char ch = s[i];

                // Count same consecutive characters
                while (i < s.size() && s[i] == ch) {
                    count++;
                    i++;
                }

                // Add count + character
                temp += to_string(count);
                temp += ch;
            }

            s = temp;
        }

        return s;
    }
};