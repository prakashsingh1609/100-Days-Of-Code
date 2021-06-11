class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(true){
            if(num==0){
                return c;
            }
            if(num%2==0){
                num=num/2;
                c++;
            }
            else{
                num=num-1;
                c++;
            }
            
        }
    }
};