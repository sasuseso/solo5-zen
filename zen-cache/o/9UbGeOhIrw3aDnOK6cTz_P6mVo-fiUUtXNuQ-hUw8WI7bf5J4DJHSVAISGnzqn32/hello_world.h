#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H


#ifdef __cplusplus
#define HELLO_WORLD_EXTERN_C extern "C"
#else
#define HELLO_WORLD_EXTERN_C
#endif

#define HELLO_WORLD_EXPORT HELLO_WORLD_EXTERN_C

struct struct_solo5_start_info {
    const uint8_t * cmdline;
    uintptr_t heap_start;
    uintptr_t heap_size;
};

HELLO_WORLD_EXTERN_C int solo5_app_main(const struct struct_solo5_start_info * si);

#endif
