#include <iostream>
using namespace std;

int main()
{
    int y = 1;
    int x = 1;
    int z = 0;
    int i = 0;

    cout << "\n\n Fibonacci \n\t";
    for (i = 0; i < 8; i++)
    {
        if (i == 0)
        {
            cout << " " << y;
            cout << " " << x;
        }
        z = y + x;
        cout << " " << z;
        x = y;
        y = z;
    }

    system("pause");
    break;
}
