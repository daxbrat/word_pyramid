#include <iostream>
#include <string>

using namespace std;

int main () {
    string user_string {};
    
    cout << "Enter a String: ";
    cin >> user_string;
    size_t string_length = size(user_string);
    int mid_number = string_length + 1;
    int pyramid_max = string_length * 2 - 1;
    int line {1};
    
    for (int i {0}; i <= pyramid_max; i++) {
        if ( i == mid_number ) {
            cout << user_string.at(0);
        } else 
            cout << " ";
    }
        line++;
        cout << endl;
        
    for (int i {0}; i <= pyramid_max; i++) {
        if ( i == mid_number - 1) {
            for (int j {0}; j < mid_number - 2; j++) {
                cout << user_string.at(j);
            }
                cout << user_string.at(line-2);
    } else
        cout << " ";
    }
        line++;
        cout << endl;

    
    return 0;
}
