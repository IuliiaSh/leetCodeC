#include<string>

class LengthOfLastWord {
public:
    int lengthOfLastWord(std::string s) {
        int result = 0;
        int i = s.length() - 1;
        while (i >= 0 && s.at(i) == ' ') {
            i--;
        }
        
        while (i >= 0 && s.at(i) != ' ')
        {
            result++;
            i--;
        }
        return result;
        }
    };
