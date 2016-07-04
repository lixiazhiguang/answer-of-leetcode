class Solution {
public:
    int compareVersion(string version1, string version2) {    	
    	int i = 0;
    	int j = 0;

    	while (i < version1.length() && j < version2.length())
    	{
    		int curNum1 = 0;
    		for (; version1[i] != '.' && i < version1.length(); ++i)
    			curNum1 = curNum1 * 10 + version1[i] - '0';

    		int curNum2 = 0;
    		for (; version2[j] != '.' && j < version2.length(); ++j)
    			curNum2 = curNum2 * 10 + version2[j] - '0';

    		if (curNum1 < curNum2)
    			return -1;
    		else if (curNum1 > curNum2)
    			return 1;

    		++i;
    		++j;
    	}

    	
    	while (i < version1.length())
    	{
    		int curNum1 = 0;
    		for (; version1[i] != '.' && i < version1.length(); ++i)
    			curNum1 = curNum1 * 10 + version1[i] - '0';

    		if (curNum1 > 0)
    			return 1;

    		++i;
    	}
    	
    	while (j < version2.length())
    	{
    		int curNum2 = 0;
    		for (; version2[j] != '.' && j < version2.length(); ++j)
    			curNum2 = curNum2 * 10 + version2[j] - '0';

    		if (curNum2 > 0)
    			return -1;

    		++j;
    	}
	    
	    return 0;
    }
};