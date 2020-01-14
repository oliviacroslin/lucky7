// Olivia Croslin
// This is my own work

#include <iostream>

using namespace std;

int main() {
//    int a,b,c,d,e;
//
//    cout << "Enter 5 integers: ";
//    cin >> a >> b >> c >> d >> e;
//    cout << "The numbers are " << a << " " << b << " " << c << " " << d << " " << e  << endl;
//
//    int max = a;
//    if (b > max) max = b;
//    if (c > max) max = c;
//    if (d > max) max = d;
//    if (e > max) max = e;
//
//    cout << "The max value is " << max << endl;
//
//    int min = e;
//    if (a < min) min = a;
//    if (b < min) min = b;
//    if (c < min) min = c;
//    if (d < min) min = d;
//
//    cout << "The min value is " << min << endl;
//
//    return 0;
//}
    int sum = 0;

    int i = 1;
    while (i <= 50)
    {
        sum = sum + i * 7;
        i++;
    }
    cout << sum << endl;
}


