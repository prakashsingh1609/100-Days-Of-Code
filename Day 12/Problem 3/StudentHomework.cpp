class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int c=0;
        for(int i=0;i<startTime.size();i++){
            if((queryTime>=startTime[i]) and (queryTime<=endTime[i]))c++;
        }
        return c;
    }
};