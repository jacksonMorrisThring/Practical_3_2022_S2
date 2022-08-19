#include <iostream>
extern int max_sub_sum(int *nums,int length);

int main(){
    int length = 5;
    int array[] = {1,-2,-3,4,-5};
    int result;

    result = max_sub_sum(array, length);

    std::cout << "Result is " << result << std::endl;

    return 0;
}