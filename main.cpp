#include <iostream>
#include <cmath>

using namespace std;


int main() {
    char a, b, c;

    cin >> a >> b >> c;

    if (a > b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    if (a > c) {
        a = a ^ c;
        c = a ^ c;
        a = a ^ c;
    }

    if (b > c) {
        b = b ^ c;
        c = b ^ c;
        b = b ^ c;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}

//int main() {
//    double x1, y1, x2, y2;
//    cin >> x1 >> y1 >> x2 >> y2;
//    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//    cout.setf(ios::fixed);
//    cout.precision(2);
//    cout << distance << endl;
//    return 0;
//}





