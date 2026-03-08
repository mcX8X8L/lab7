#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Введіть номер обраного вами місяця.\n";
    cin >> m;
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout << "У обраному місяці днів - 31.\n"; break;
        case 4: case 6: case 9: case 11:
        cout << "У обраному вами місяці днів - 30.\n"; break;
        case 2:
        cout << "У обраному вами місяці днів - 28.\n"; break;
        default:
        cout << "hell nah.\n"; break;
    }
    return 0;
}