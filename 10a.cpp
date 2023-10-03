// TOOP 10a
// 3/c Giselle Johnson

#include <iostream>
using namespace std;

// Create subtract function that compares values and subtracts
int subtract (int x, int y){
    if (x>y){
        int result = x - y;
        return result;
    }
    else {
        int result = y - x;
        return result;
    }

}

// main function that gets input, calls subtract() and prints results
int main(){
    int y;
    int x;
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;
    int z = subtract(x,y);

    // value of z from function
    cout << "This is z: " << z <<"\n";

    // value of subtract x and y
    if (x>y){
        int result = x - y;
        cout << result << "\n";
    }
    else {
        int result = y - x;
        cout << result << "\n";
    }

    return 0;
}