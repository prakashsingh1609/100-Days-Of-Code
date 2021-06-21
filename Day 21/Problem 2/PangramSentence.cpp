class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        set<char> s;
        for (char &ch : sentence)
        {
            s.insert(ch);
        }
        return s.size() == 26;
    }
};