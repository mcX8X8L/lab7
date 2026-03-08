#include <iostream>
using namespace std;
int main()
{
    int a, all, price;
    cout << "Меню:\n(1)світ ті - 68\n(2)big makkk - 148\n(3)cheesy tacos - 120\n(4)chicken littles - 111\n(5)turkey legs - 79\n(6)krispy kremes - 199\n(7)onion ring - 90\n";
    cout << "Введіть номер обраного вами товару, після чого введіть 0, щоб закінчити свій чек.\n";
    do {
        cin >> a;
        switch (a)
        {
            case 1: price = 68; break;
            case 2: price = 148; break;
            case 3: price = 120; break;
            case 4: price = 111; break;
            case 5: price = 79; break;
            case 6: price = 199; break;
            case 7: price = 90; break;
            default: price = 0; break;
        }
        all = all + price;}
        while (a != 0);
        cout << "Всього: " << all << "грн.\n";
        return 0;
    }