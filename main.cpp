#include <iostream>

using namespace std;

int main()
{
    int user_in = 17;
    bool cond = true;

    for (int i = 2; i <= (user_in - 1); i++)
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
