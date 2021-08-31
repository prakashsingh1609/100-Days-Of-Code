class Solution {
public:
string sortString(string s) {

  string str;
sort(s.begin(),s.end());
while(s.length()!=0)
{
        str+=s[0];
        char temp=s[0];
        s.erase(s.begin()+0);
        int len = s.length();
        if(len!=0)
        {
            for(int i = 0 ; i < len ; i++)
            {
                if(s[i]>temp)
                {
                    str+=s[i];
                    temp=s[i];
                    s.erase(s.begin()+i);
                    --len;
                    --i;
                }

            }
        }

          if(len!=0)
          {
                len = s.length();temp = s[len-1];
                str+=s[len-1]; s.erase(s.begin()+len-1);
                len = s.length();
                if(len!=0)
                {
                    for(int i = len-1 ; i>=0 ; i--)
                    {
                        if(s[i]<temp)
                        {
                            str+=s[i];
                            temp=s[i];
                            s.erase(s.begin()+i);
                            --len;
                        }
                    }
                }
          }

}
return str;
}
};