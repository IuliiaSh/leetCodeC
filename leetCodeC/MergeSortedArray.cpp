class MergeSortedArray {
private:
    int getNext(int i, int numsSize, vector<int> nums) {
        if (i < numsSize) return nums[i];
        return std::numeric_limits<int>::max();
    }
    
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(nums1);
        int i = 0;
        int j = 0;
        int next1;
        int next2;
        while (i < m || j < n) {
            next1 = getNext(i, m, temp);
            next2 = getNext(j, n, nums2);
            if (next1 <= next2) {
                nums1[i + j] = next1;
                i++;
            } else {
                nums1[i + j] = next2;
                j++;
            }
        }
    }
};
