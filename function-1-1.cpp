#include <string>
#include <iostream>

void string_2d_copy(std::string first[][2], std::string second[][2], int n){
    int cols = 2;
    int rows = n;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            second[i][j] = first[i][j];
        }
    }

    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++){
    //         if(j == cols - 1){
    //             std::cout << second[i][j] << std::endl;
    //         }
    //         else{
    //             std::cout << second[i][j] << " ";
    //         }
            
    //     }
    // }



}