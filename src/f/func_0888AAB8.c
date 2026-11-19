#include "common.h"
typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T0;

extern s32 D_089FA26C[];

s32 func_0888AAB8(T0 *arg0) {
    s32 *temp = arg0->unk_10 < D_089FA26C[0] ? D_089FA26C : &arg0->unk_10;
    return *temp;
}
