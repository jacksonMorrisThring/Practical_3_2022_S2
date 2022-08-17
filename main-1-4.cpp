extern void copy_doubles(double *old_array,double *new_array,int length);

int main(){
    int length = 5;
    double array1[] = {1.0, 1.1, 1.2, 1.3, 1.455356};
    double array2[length];

    copy_doubles(array1, array2, length);


    return 0;
}