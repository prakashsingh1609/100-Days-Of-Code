class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> words;
        istringstream ss(s);
        string word;
        while(ss>>word)
            words.push_back(word);
        word = "";
        if (words.size() > k){
            for (int i=0;i < k;i++)
                word += words[i] + " ";
            return word.substr(0, word.length() - 1);
        }
        return s;
    }
};