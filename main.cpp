#include <iostream>
using namespace std;

int main()
{
    // Завдання Begin5
    // Оголошення змінних
    double a, V, S;

    // Введення довжини ребра куба
    cout << "Begin5" << endl;
    cout << "Enter edge a: ";
    cin >> a;

    // Обчислення об'єму та площі поверхні куба
    V = a * a * a;
    S = 6 * a * a;

    // Виведення результатів
    cout << "Volume of cube: " << V << endl;
    cout << "Surface area of cube: " << S << endl;


    // Завдання Begin43
    // Оголошення змінних
    double b, h, P;

    // Введення сторін паралелограма та висоти
    cout << "\nBegin43" << endl;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter height h: ";
    cin >> h;

    // Обчислення площі паралелограма
    P = a * h;

    // Виведення результату
    cout << "Area of parallelogram: " << P << endl;


    // Завдання Begin44
    // Оголошення змінних
    double x, y, D;

    // Введення двох чисел
    cout << "\nBegin44" << endl;
    cout << "Enter number x: ";
    cin >> x;
    cout << "Enter number y: ";
    cin >> y;

    // Обчислення різниці за модулем
    D = (x - y) * (x - y) / (x - y);

    // Виведення результату
    cout << "Absolute difference: " << D << endl;

    return 0;
}
