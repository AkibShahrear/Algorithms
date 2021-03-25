//find the maximum value for a function  that is first
increasing then decreasing

int x = -1;

for(int i = n; i >= 1; i /= 2){

    while(f(x + i) < f(x + i + 1)) x += i;

}
int k = x + 1;
