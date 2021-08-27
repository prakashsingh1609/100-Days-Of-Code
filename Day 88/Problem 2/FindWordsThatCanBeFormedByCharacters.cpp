class Solution
{
public:
  int countCharacters(vector<string> &words, string chars)
  {
    unordered_map<char, int> charsFreq, tmpCharsFreq;
    int ans = 0;
    for (const auto &ch : chars)
    {
      ++charsFreq[ch];
    }
    for (const auto &word : words)
    {
      tmpCharsFreq = charsFreq;
      bool success = true;
      for (const auto &ch : word)
      {
        if (tmpCharsFreq.find(ch) == tmpCharsFreq.end() || tmpCharsFreq[ch] <= 0)
        {
          success = false;
          break; 
        }
        --tmpCharsFreq[ch];
      }
      ans += success ? word.length() : 0;
    }
    return ans;
  }
};