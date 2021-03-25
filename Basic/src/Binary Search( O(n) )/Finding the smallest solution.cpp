//It returns the smallest value k that is a valid solution for a problem

int x = -1;

for(int i = n; i >= 1; i /= 2)
{
    while(!ok(x + i)) x += i; // ok() is a function
}

int k = x + 1;
