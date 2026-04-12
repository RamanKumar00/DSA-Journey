#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
  string s = "abcabcbb";
  unordered_set<char> st;

  int left = 0, right = 0, maxLen = 0;

  while (right < s.size())
  {

    while (st.find(s[right]) != st.end())
    {
      st.erase(s[left]);
      left++;
    }

    st.insert(s[right]);
    maxLen = max(maxLen, right - left + 1);
    right++;
  }

  cout << maxLen;
  return 0;
}