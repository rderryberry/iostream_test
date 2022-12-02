//
//  main.cpp
//  iostream_test
//
//  Created by Richard Derryberry on 12/1/22.
//

#include <iostream>

int main() {
    std::cout << "Enter a whole number: ";
    
    int x {};
    std::cin >> x;
    
    std::cout << "You entered " << x << '\n';
    return 0;
}
