#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
    s32 unk_20;
} S6_089C6138;

typedef struct {
    u8 pad_00[0x166C];
    S6_089C6138 *unk_166C;
    volatile u32 unk_1670;
} Obj_089C6138;

extern s32 D_08A09638[];

inline S6_089C6138 *inl_089C6138_0(Obj_089C6138 *arg0, s32 arg1) {
    u32 i;
    S6_089C6138 *p;

    for (i = 0; i < arg0->unk_1670; i++) {
        p = &arg0->unk_166C[i];
        if (p->unk_20 == arg1) {
            return p;
        }
    }
    return NULL;
}

inline s32 *inl_089C6138_1(s32 *a, s32 *b) {
    return (*a < *b) ? b : a;
}

void func_089C6138(Obj_089C6138 *arg0, s32 arg1) {
    S6_089C6138 *temp;
    s32 spC;

    if (arg1 != 0) {
        temp = inl_089C6138_0(arg0, arg1);
        if (temp != NULL) {
            spC = temp->unk_1C - 1;
            temp->unk_1C = *inl_089C6138_1(D_08A09638, &spC);
        }
    }
}
