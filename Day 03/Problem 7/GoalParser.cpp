class Solution {
public:
    string interpret(string command) {
        string s="";
        for(int i=0;i<command.length();)
        {
            if(command[i]=='G')
            {
                s=s+'G';
                i++;
            }
            else if (command[i]=='(' && (i+1<command.length()) && command[i+1]==')')
            {
                s = s + 'o';
                i=i+2;
            }
            else
            {
                s =  s + "al";
                i=i+4;
            }
        }
        return s;
    }
    
};