#include <iostream>
using namespace std;

class Student {
public:
    Student() : roll{0} {}

    void setRoll(int r) {
        roll = r;
    }

    void show() const {
        cout << roll << '\n';
    }

private:
    int roll;
};

int main() {
    Student group[3];

    for (int i = 0; i < 3; ++i) {
        group[i].setRoll(101 + i);
        group[i].show();
    }

    return 0;
}