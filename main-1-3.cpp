extern void copy_integers(int old_array[],int new_array[],int length);

int main(){
    int length = 5;
    int array1[] = {1,2,3,4,5};
    int array2[5]; 

    copy_integers(array1, array2, length);

    return 0;
}