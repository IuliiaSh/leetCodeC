class PlusOne {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool isAdded = false;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits.at(i) != 9) {
                digits.at(i)++;
                isAdded = true;
                break;
            } else {
                digits.at(i) = 0;
            }
        }
        
        if (!isAdded) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
