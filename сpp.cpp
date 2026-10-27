// AndrejMarc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*float a;
    cin >> a;
    float b;
    cin >> b;
    cout << a + b << "\n" << a - b << "\n" << a * b << "\n" << a/b << "\n";*/
    /*string str;
    string str2;
    cin >> str;
    cin >> str2;
    if (str2.length() > str.length())
    {
        cout << str2;
    }
    else if ( str == str2)
    {
        cout << str << "\t" << str2;
    }
    else
    {
        cout << str;
    }*/

    //ЗАДАЧА 1
    //float g = 9.8;
    //float m;
    //cout << "Введите массу в кг: ";
    //cin >> m;
    //float f=m*g;
    //cout << f;

    //ЗАДАЧА 2
    /*float s;
    cout << "Введите расстояние в км: ";
    cin >> s;
    float t;
    cout << "Введите время в часах: ";
    cin >> t;
    float v = s / t;
    cout << v;*/

    //ЗАДАЧА 3
    float a;
    cout << "Введите длину в сm: ";
    cin >> a;
    float b;
    cout << "Введите ширину в сm: ";
    cin >> b;
    float s = a * b;
    float p = (a + b) * 2;
    cout << s << " " << "cm^2" << "\n" << p << " " << "сm";
}

