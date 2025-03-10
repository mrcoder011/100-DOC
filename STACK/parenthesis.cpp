class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;  // ✅ Changed stack<int> to stack<char>
            for (int i = 0; i < s.length(); i++) {
                char ch = s[i];
                if (ch == '(' || ch == '[' || ch == '{') {
                    st.push(ch);
                } 
                else {
                    if (!st.empty()) {  // ✅ Ensure stack is not empty before accessing st.top()
                        if ((ch == ')' && st.top() == '(') ||
                            (ch == '}' && st.top() == '{') ||
                            (ch == ']' && st.top() == '[')) {
                            st.pop();
                        } 
                        else {
                            return false;
                        }
                    } 
                    else {
                        return false;  // Stack empty but encountered closing bracket
                    }
                }
            }
            return st.empty();  // ✅ If stack is empty, it's valid; otherwise, invalid
        }
    };
    //jubfofjbk