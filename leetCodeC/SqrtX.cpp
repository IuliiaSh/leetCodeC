#include <iostream>

class SqrtX {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        
        int digitNumber = 1;
        int current = x;
        while (current > 10) {
            current = current / 10;
            digitNumber++;
        }
        
        float guess = 1;
        for (int i = 0; i < (digitNumber - 1) / 2; i++) {
            guess = guess * 10;
        }
        
        float newGuess = (x / guess + guess) / 2;
        while ((int)guess != (int)newGuess) {
            guess = newGuess;
            newGuess = (x / newGuess + newGuess) / 2;
        }
        
        int result = (int)guess;
        if (result * result > x) {
            return result - 1;
        }
        return result;
    }
};
