class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;
        for(auto& op:ops){
            if(s.empty()){
                s.push(stoi(op));
            }
            else if(op=="C")s.pop();
            else if(op=="D")s.push(s.top()*2);
            else if(op=="+"){
                int x = s.top();
                s.pop();
                int y = s.top();
                s.push(x);
                s.push(x+y);
            }
            else{
                s.push(stoi(op));
            }
        }
        int ans =0;
        while(!s.empty()){
            ans = ans + s.top();
            s.pop();
        }
        return ans;
    }
};