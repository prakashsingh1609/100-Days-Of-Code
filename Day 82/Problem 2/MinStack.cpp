class MinStack
{
public:
    /** initialize your data structure here. */
    stack<long long> s;
    long long minEle;
    MinStack()
    {
    }

    void push(int val)
    {
        if (s.empty())
        {
            s.push(val);
            minEle = val;
        }
        else
        {
            if (minEle <= val)
                s.push(val);
            else
            {
                s.push((long long)2 * val - minEle);
                minEle = val;
            }
        }
    }

    void pop()
    {
        if (s.top() >= minEle)
        {
            s.pop();
        }
        else
        {
            minEle = 2 * minEle - s.top();
            s.pop();
        }
    }

    int top()
    {
        if (s.top() >= minEle)
        {
            return s.top();
        }
        else
        {
            return minEle;
        }
    }

    int getMin()
    {
        return minEle;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */