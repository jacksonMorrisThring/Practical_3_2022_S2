extern void multiples_of_seven(int* nums,int length);

int main(){
    int array[] = {1,2,3,4,7};
    int* ptr = array;
    int length = 5;

    multiples_of_seven(ptr, length);

    return 0;
}