// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     int a = 0 , b = n, pos = 0;
        while(a <= b)
        {
            int m = a + (b - a)/2;

            if(isBadVersion(m) == true)
            {

                if(!isBadVersion(m - 1))
                {

                    pos = m;
                    break;
                }
                else{
                b = m - 1;

                }
            }
            else{

                 if(isBadVersion(m + 1))
                {
                    pos = m + 1;
                     break;
                }
                else{
                a = m + 1;


            }
            }

        }
        return pos;

    }
};
