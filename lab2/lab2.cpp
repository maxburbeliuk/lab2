#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Ukr");
    cout << "Вас зустрічає калькулятор!" << endl;
    int a, b, selection;
    cout << "Введіть число a:";
    cin >> a;
    cout << "Введіть число b:";
    cin >> b;
    cout << "Виьеріть математичну дію" << endl <<
        "1:Додавання" << endl <<
        "2:Віднімання" << endl <<
        "3:Множення" << endl <<
        "4:Ділення" << endl;
    cin >> selection;
    switch (selection)
    {
    case 1:
        cout << "Додавання" << " " << a + b << endl;
        break;
    case 2:
        cout << "Віднімання" << " " << a - b << endl;
        break;
    case 3:
        cout << "Множення" << " " << a * b << endl;
        break;
    case 4:
        cout << "Ділення" << " " << (float)a / b << endl;
        break;
    default:
        cout << "Помилка! Ви не обрали одну з математичних дій";
        break;
    }
}
