class Solution {
public:
    void backtrack(std::vector<std::string>& result, std::string current, int left, int right, int n) {
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }
        
        if (left < n) {
            backtrack(result, current + '(', left + 1, right, n);
        }
        
        if (right < left) {
            backtrack(result, current + ')', left, right + 1, n);
        }
    }
    
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};