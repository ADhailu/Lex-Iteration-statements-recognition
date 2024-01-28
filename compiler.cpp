#include <iostream>

int main() {
    // For loop 
    std::cout << "For Loop Example:" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        for(int j = 1; j < 3; ++j){
            std::cout << "Iteration " << i << std::endl;
        }
    }
    // While loop 
    std::cout << "\nWhile Loop Example:" << std::endl;
    int j = 1;
    while (j <= 5) {
        std::cout << "Iteration " << j << std::endl;
        ++j;
    }
    
    std::cout << "\nDo-While Loop Example:" << std::endl;
    int k = 1;
    do {
        std::cout << "Iteration " << k << std::endl;
        ++k;
    } while (k <= 5);

    return 0;
}
