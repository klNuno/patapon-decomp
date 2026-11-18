#include "common.h"

typedef struct Elem_08861924 {
    u8 pad_00[0x80];
} Elem_08861924;

typedef struct Obj_08861924 {
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0xC];
    Elem_08861924 *unk_54;
} Obj_08861924;

extern void func_08822B3C(char *, s32);

void func_08861924(Obj_08861924 *arg0, s32 arg1, s32 arg2) {
    s32 i;

    if (arg2 < 0) {
        for (i = 0; i < arg0->unk_44; i++) {
            func_08822B3C((char *)&arg0->unk_54[i], arg1);
        }
    } else {
        func_08822B3C((char *)&arg0->unk_54[arg2], arg1);
    }
}
