#ifdef __cplusplus
extern "C" {
#endif

#ifndef AUXMEM_HEAP_H
#define AUXMEM_HEAP_H

#include <auxmem.h>
#include <stdlib.h>
#include <stdbool.h>

#define AMALLOC_NULL 0

extern void AMALLOC_init(uint16_t blocksize);

extern AM_addr_t AMALLOC_alloc(size_t size);
extern void AMALLOC_free(size_t address);
extern void AMALLOC_clean();

extern size_t AMALLOC_getfree();
extern bool AMALLOC_isempty();

#endif

#ifdef __cplusplus
}
#endif
