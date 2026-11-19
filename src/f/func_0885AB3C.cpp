#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
    u32 unk_10;
    u8 pad_14[0xC];
    u8 unk_20[1][8];
} T;

void *func_0885AB3C(T *arg0, u32 arg1) {
    if (arg0 == NULL) return NULL;
    arg0 = arg0 != NULL ? arg0 : NULL;
    if (arg1 >= arg0->unk_10) return NULL;
    u32 temp = (u32)arg0->unk_20;
    return (void *)(temp + arg1 * 8);
}

}
