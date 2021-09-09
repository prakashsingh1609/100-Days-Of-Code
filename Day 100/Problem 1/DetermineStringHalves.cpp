class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int i = 0;
        int j = s.length() - 1;
        
        int a = 0;
        int b = 0;
        
        while(i < j)
        {
            if( (s[i] == 'A') ||
                (s[i] == 'E') ||
                (s[i] == 'I') ||
                (s[i] == 'O') ||
                (s[i] == 'U') ||
                (s[i] == 'a') ||
                (s[i] == 'e') ||
                (s[i] == 'i') ||
                (s[i] == 'o') ||
                (s[i] == 'u') )
                    a++;
            
            if( (s[j] == 'A') ||
                (s[j] == 'E') ||
                (s[j] == 'I') ||
                (s[j] == 'O') ||
                (s[j] == 'U') ||
                (s[j] == 'a') ||
                (s[j] == 'e') ||
                (s[j] == 'i') ||
                (s[j] == 'o') ||
                (s[j] == 'u') )
                    b++;
            
            i++;
            j--;
        }
        
        if(a == b)
            return true;
        
        return false;
        
    }
};