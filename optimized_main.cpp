#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int user_in = 17;
    bool cond = true;

    for (int i = 2; i*i <= (user_in); i++)
    {
        if (user_in % i == 0)
        {
            std::cout << "NON-Prime\n";
            cond = false;
            break;
        }
    }

    if (cond) {
        std::cout << "Prime\n";
    }

    return 0;
}
