// TOOP 10a
// 3/c Giselle Johnson

#include <iostream>
using namespace std;


// Even function that prints if called from odd
int even(int I){
    cout << "It is even! \n";
    return 0;
}

// Odd function that compares the integer and prints if odd or calls even
int odd (int I){
    int x = I;
    if (I % 2 != 0){
        cout << "Success, it is odd! \n";
    }
    else
        even(x);
    return 0;
}

// Main function that gets integer and calls proper function or quits program
int main(){
    int y =1;

    while (y != 0){
        cout << "Enter an integer or 0 to stop: ";
        cin >> y;
        
        if (y ==0){
            cout << "End \n";
            break;
        }
        else
            odd(y);
        }
        return 0;
    }