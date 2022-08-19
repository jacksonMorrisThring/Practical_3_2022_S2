#include <iostream>

int max_sub_sum(int *nums,int length){
    int max_sub = 0;

    int index1;
    int index2;
    
    // std::cout << "\nLength: " << length << std::endl;
    for(int i = 0; i < length; i++){
        int sum = 0;
        // std::cout << std::endl;
        for(int j = i + 1; j < length; j++){
            // std::cout << "Value of i: " << i << "   Value of j: " << j << std::endl; 
            if(j == i + 1){
                index1 = i;
                index2 = j;
                sum = sum + *(nums + index1) + *(nums + index2);
                // temp = *(nums + i) + *(nums + j);
            }
            else{
                index1 = i;
                int len = j-i + 1;

                for(int k = index1; k < index1 + len; k++)
                {
                    sum = sum + *(nums + k);
                    // std::cout << "\nSum of index " << k << " with value " << *(nums+k) << " has value " << sum << std::endl;
                }
            }
            
            if (sum > max_sub){
                max_sub = sum;
            }
        }
    }

    // std::cout << "Max sub array has value " << max_sub << std::endl;
    // std::cout << "Max sub array lies between indexes " << index1 << " and " << index2 << std::endl;

    if(max_sub < 0){
        return 0;
    }
    else{
        return max_sub;
    }
}