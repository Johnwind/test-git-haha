#include <stdio.h>
#include <unistd.h>
#include "type.h"

void test_func(void);

int main(int argc, char **argv) {


    printf("hello git %s", "123 just a test.\r\n");

    MYGIT git;

    MYGIT git2;

    MYGIT test;

    
    

    return 0;

}


void test_func(void) {

    int a = 10;
    int b = 20;


    printf("add a func\r\n");
    printf("here %d, %d\n", a, b);


}
