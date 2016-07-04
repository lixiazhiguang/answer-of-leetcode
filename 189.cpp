class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        if (k >= length)
        	k %= length;
        if (k <= 0)
        	return;

        int middleAll = (length>>1) - 1;
        for (int i = 0; i <= middleAll; i++)
        {
        	int j = length - 1 - i;
        	nums[i] ^= nums[j];
        	nums[j] ^= nums[i];
        	nums[i] ^= nums[j];
        }

        int middleL = (k>>1) - 1;
        for (int i = 0; i <= middleL; i++)
        {
        	int j = k - 1 - i;
        	nums[i] ^= nums[j];
        	nums[j] ^= nums[i];
        	nums[i] ^= nums[j];
        }

        int middleR = ((length - k)>>1) - 1 + k;
        for (int i = k; i <= middleR; i++)
        {
        	int j = length + k - 1 - i;
        	nums[i] ^= nums[j];
        	nums[j] ^= nums[i];
        	nums[i] ^= nums[j];
        }
    }
};