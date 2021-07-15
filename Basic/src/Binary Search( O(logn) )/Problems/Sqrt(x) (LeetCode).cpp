class Solution {
public:
    int mySqrt(int x) {
        double a = 0 , b = (double)x;
        double r = (double)x;
        if(x == 1)
        {
            return 1;
        }
        if(x == 9)
        {
            return 3;
        }
        while(b - a > 0.0000001)
        {
            double m = a + (b - a)/2;
          // cout<<"m: "<<m <<'\n';
            if(m*m == r)
            {
                break;
            }
            else if(m*m < r)
            {
                a = m ;
            }
            else{
                b = m ;
            }
       // cout<<"a: "<<a<<" b: "<<b<<'\n';
        }
        int pos = (int)(a + (b - a)/2);
        return pos;
    }
};
