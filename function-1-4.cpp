void copy_doubles(double *old_array,double *new_array,int length){
    double* ptr1 = old_array;
    double* ptr2 = new_array;

    for(int i = 0; i < length; i++){
        *(ptr2 + i) = *(ptr1 + i);
    }
}