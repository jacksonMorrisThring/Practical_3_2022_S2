#include <string>
#include <iostream>
extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){
    std::string array1[3][2] = {
        {"John", "Peter"},
        {"John", "Peter"},
        {"John", "Peter"},
    };

    std::string array2[3][2];

    // string_2d_copy(array1, array2, 3);

    return 0;
}