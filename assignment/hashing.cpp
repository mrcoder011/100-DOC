class Solution {
    public:
      int firstRepeated(vector<int> &arr) {
          unordered_map<int, int> hash;
  
          // First pass: count frequencies
          for (int i = 0; i < arr.size(); i++) {
              hash[arr[i]]++;
          }
  
          // Second pass: find first element with freq > 1
          for (int i = 0; i < arr.size(); i++) {
              if (hash[arr[i]] > 1) {
                  return i + 1; // 1-based index
              }
          }
  
          return -1; // No repeated element found
      }
  };