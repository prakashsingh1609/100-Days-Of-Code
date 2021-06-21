class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        map<char,char>mp = {{'a','0'},{'b','1'},{'c','2'},{'d','3'},{'e','4'},{'f','5'},{'g','6'},{'h','7'},{'i','8'},{'j','9'}};
        string s1 ="";
        string s2 ="";
        string s3 ="";
        for(int i=0;i<firstWord.length();i++){
            s1+=mp[firstWord[i]];
        }
        for(int i=0;i<secondWord.length();i++){
            s2+=mp[secondWord[i]];
        }
        for(int i=0;i<targetWord.length();i++){
            s3+=mp[targetWord[i]];
        }
        return stoi(s1) + stoi(s2) == stoi(s3);


    }
};