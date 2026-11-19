#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x18E8];
    void *unk_18E8;
} T;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} S1;

typedef struct {
    u8 pad_00[0x5C];
    void *unk_5C;
} U;

s32 func_0885AB7C(s32, s32, s32);
S1 *func_08877444(u8 *);
extern u8 *D_08AD1F14[];

static inline u8 *func_0888DB94_1(void) {
    u8 *temp = D_08AD1F14[0];

    if (temp != NULL) {
        return temp;
    } else {
        return NULL;
    }
}

s32 func_0888DB94(T *arg0) {
    s32 temp = arg0->unk_18E8 == NULL;

    arg0->unk_18E8 = ((U *)func_0885AB7C(func_08877444(func_0888DB94_1())->unk_1C, 0, 0))->unk_5C;
    return temp;
}
}
