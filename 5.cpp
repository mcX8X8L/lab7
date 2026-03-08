#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int figure;
    cout << "Введіть номер обраної вами фігури (1 - квадрат, 2 - коло, 3 - трикутник):\n";
    cin >> figure;
    switch (figure){
        case 1: int st;
        cout << "Введіть сторону вашого квадрата:\n";
        cin >> st;
        cout << "Площа = " << st*st << endl; break;
        case 2: int R;
        cout << "Введіть радіув вашого кола:\n";
        cin >> R;
        cout << "Площа = " << (R*R) * M_PI << endl; break;
        case 3: int a, h;
        cout << "Введіть сторону та висоту вашого трикутника:\n";
        cin >> a >> h;
        cout << "Площа = " << (a*h) / 2 << endl; break;
        default: cout << "hell nah."; break;
}
return 0;
}