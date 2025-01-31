#include <windows.h>
#include "Vector.h"
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    Vector v1(3);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_front(0);
    v1.emplace(3, 7);
    v1.printVector();

    Vector rev = v1.reversed();
    rev.printVector();

    v1.fillVector(10);
    v1.printVector();
    cout << "Длина: " << v1.length() << endl;
}
