#include "common.h"

extern u32 func_0895CC2C(void *);
typedef struct {
    u8 pad_00[0x194];
    u8 unk_194;
} T;

f32 func_0895EF64(T *arg0) {
    return (f32)func_0895CC2C(&arg0->unk_194) / 44100.0f;
}
