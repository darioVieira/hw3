/* A simple test harness for memory alloction. */

#include "mm_alloc.h"
#include <stdio.h>
int main(int argc, char **argv)
{
    int *data;
		printf("0..\n");
    data = (int*) mm_malloc(4);
    printf("1..\n");
    data[0] = 1;
    printf("2..\n");
    mm_free(data);
    printf("malloc sanity test successful!\n");
    return 0;
}
