#include <iostream>

int max_sub_sum(int *nums,int length){
    int max_sub = 0;
    int index1 = 0;
    int index2 = 0;
    int temp = 0;
    
    for(int i = 0; i < length; i++){
        for(int j = 1; j < length - 1; j++){
            if(j == 1){
                temp = *(nums + i);
            }
            else{
                temp = temp + *(nums + j);
            }
            
            if (temp > max_sub){
                max_sub = temp;
                index1 = i;
                index2 = j;
            }
        }
    }

    // std::cout << "Max sub array has value " << max_sub << std::endl;
    // std::cout << "Max sub array lies between indexes " << index1 << " and " << index2 << std::endl;

    return max_sub;
}