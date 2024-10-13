#include <iostream>
using namespace std;


string check_position(int x, int y, int h);

int main() {
    int h, x, y;

    
    cout << "Enter the value of h: ";
    cin >> h;
    cout << "Enter the coordinates of the point (x, y): ";
    cin >> x >> y;

    
    cout << check_position(x, y, h) << endl;

    return 0;
}


string check_position(int x, int y, int h) {
    
    if (x >= 0 && x <= h && y >= 0 && y <= 3 * h) {
        return "inside";  
    }

    
    if (x >= h && x <= 2 * h && y >= 2 * h && y <= 4 * h) {
        return "inside";  
    }

    return "outside"; 
}
