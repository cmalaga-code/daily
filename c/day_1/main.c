#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.14

void test_long_long();

struct MyLongStructName {
    int x;
    char name[20];
};


int main() 
{
    // primitive types
    // char grade = 'A';
    // short age = 100;
    // int id = 12323;
    // long secondary_id = 23232323L;
    // long long true_id = 23223232323LL;
    // printf("%ld %lld", secondary_id, true_id);
    // printf("Size of long is ... %ld ... Size of long long is ... %ld", sizeof(secondary_id) * 8, sizeof(true_id) * 8);

    // printf("\n \n");

    // test_long_long();
    // printf("%.2LF", PI);
    // typedef struct MyLongStructName my_cool_struct;

    // my_cool_struct x;
    // strcpy(x.name, "yes sir");
    // x.x = 22;

    // printf("%s", x.name);
    // const int COUNT = 10; 
    // for (int i = 0; i < COUNT; i++) {
    //     int input_char = getchar();
    //     printf("%c", input_char);
    // }
    // const int SIZE = 200;
    // char* data = calloc(SIZE, sizeof(char));
    // fgets(data, 200, stdin);
    // printf("%s", data);
    // free(data);
    fprintf(stdout, "%d", 90);
    return 0;
}

void test_long_long()
{
    float amount = 2023.23F;
    double full_amount = 23.23L;
    long double fullest_amount = 1212.12L; // 128 bits

    printf(
        "The size of amount in bits is ..\
         %ld and the size of full_amount in bits is .. \
        %ld and the size of fullest_amount in bits is .. %ld", 
        sizeof(amount) * 8, sizeof(full_amount) * 8, sizeof(fullest_amount) * 8
    );
}