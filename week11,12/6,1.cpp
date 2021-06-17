#include <iostream>  //#3,2
#include <math.h>

int main()
{
    int x;
    std::cout << "Enter X: " << std::endl;
    std::cin >> x;

    if (x > 3)
        std::cout << "y = " << 5 * x - 10;

    if (x == 3)
        std::cout << "y = " << 1;

    if (x < 3)
        std::cout << "y = " << 2 * fabs(x) - 5;

    

    return 0;

}