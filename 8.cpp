class Solution {
public:
    int myAtoi(string str) {
    	int i = 0;
    	for (; i < str.length(); ++i)
    		if (str[i] != ' ')
    			break;

    	if (i == str.length())
    		return 0;

    	bool positive = true;
        if (str[i] == '+' || str[i] == '-')
        {
        	if (str[i] == '-')
        		positive = false;
        	++i;
        }
        else if (str[i] < '0' || str[i] > '9')
        	return 0;

        long result = 0;
        for (; i < str.length(); ++i)
        {
        	if (str[i] >= '0' && str[i] <= '9')
        	{
        		result = result * 10 + str[i] - '0';
        		if (result > 2147483647)
        			break;
        	}
        	else
        		break;
        }

        if (result > 2147483647)
        	if (positive)
        		return 2147483647;
        	else
        		return -2147483648;

        if (!positive)
        	result = -result;

        return result;
    }
};