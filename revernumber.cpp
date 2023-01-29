#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int a = -12345;
    int number_a = a;
    int result = 0;
    int digit_a = 0;
    while(a<0)
    {
        number_a = number_a / 10;
        number_a = floor(number_a);
        number_a = number_a * 10;
        int digit_a = a - number_a;
        result = result * 10 + digit_a;
        a = a/10;
        number_a = a;
    }
    while(a>0)
    {
        number_a = number_a / 10;
        number_a = floor(number_a);
        number_a = number_a * 10;
        int digit_a = a - number_a;
        result = result * 10 + digit_a;
        a = a/10;
        number_a = a;
    }
    printf("Result:%d\n",result);

    return 0;
}
