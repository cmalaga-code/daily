#include <stdio.h>

int adder(int num, int count);

int main()
{
    printf("%d", adder(20, 2));
    return 0;
}

int adder(int num, int count)
{
    if (count > 0) {
        count--;
        return adder(num + num, count);
    }
    return num;
}