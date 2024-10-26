#include <iostream>
#include <cmath>

using namespace std;

bool isPointInShadedArea(double x, double y, double R) {
    bool inUpperCircle = (x * x + pow(y - R, 2) <= R * R) && (y >= x);
    bool inLowerCircle = (x * x + pow(y + R, 2) <= R * R) && (y <= x);
    return inUpperCircle || inLowerCircle;
}

int main() {
    double R, x, y;
    cout << " R= ";
    cin >> R;
    cout << " x= ";
    cin >> x;
    cout << "y= ";
    cin >> y;

    if (isPointInShadedArea(x, y, R)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}