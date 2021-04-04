/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int a = 0 , b = n , pos = 0;
       while(a <= b)
        {
            int m = a + (b - a)/2;
           // cout<<"g_m: "<<guessNumber(m)<<'\n';
            if( guess(m) == 0)
            {
                pos = m;
                break;
            }
            else if(guess(m) == -1)
            {
                b = m - 1;
            }
            else if(guess(m) == 1)
            {
                a = m + 1;
            }
        }
        return pos;
    }
};
