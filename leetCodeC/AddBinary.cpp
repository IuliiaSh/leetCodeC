#include <string>
#include <sstream>

using namespace std;

class AddBinary {
private:
    int getDigit(int i, string a) {
        if (i < 0) return 0;
        return a.at(i) - '0';
    }

public:
    string addBinary(string a, string b) {
        std::stringstream result;
        int current = 0;
        int reminder;
        int i = a.length() - 1;
        int j = b.length() - 1;
        while (i >= 0 || j >= 0) {
            current = current + getDigit(i, a) + getDigit(j, b);
            reminder = current % 2;
            current = current / 2;
            result << reminder;
            i--;
            j--;
        }
                
        if (current != 0) {
            result << current;
        }
        string stringResult = result.str();
        std::reverse(stringResult.begin(), stringResult.end());
        return stringResult;
    }
};
