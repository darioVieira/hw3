#ifndef _malloc_H_
#define _malloc_H_

 /* Define the block size since the sizeof will be wrong */
/*

#ifdef __cplusplus
extern "C" {
#endif*/

#include <stdlib.h>
#include <stdbool.h>
#define BLOCK_SIZE 40

typedef struct s_block {
    size_t size;
    struct s_block *next;
    struct s_block *prev;
    bool free;
    void *ptr;//address
    bool isHead;
 }t_block;


//different methods used
void* mm_malloc(size_t size);
void putInList(struct s_block **list, size_t size, void *ptr);
void mm_free(void *ptr);
void makeCircle(struct s_block **tempList);
void* mm_realloc(void *ptr, size_t size);
void reInitList();
void* findBlock(size_t size);
bool isInList(void *ptr);

/*#ifdef __cplusplus
}
#endif*/

#endif
