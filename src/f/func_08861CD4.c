#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    s32 unk_80;
} B_08861CD4;

typedef struct {
    u8 pad_00[0xC];
    void (*unk_0C)(s32);
    u8 pad_10[0x34];
    s32 unk_44;
    u8 pad_48[0x700];
    B_08861CD4 *unk_748;
} A_08861CD4;

void func_0881F5C0(void *, s32, s32);

void func_08861CD4(A_08861CD4 *arg0) {
    s32 i;
    B_08861CD4 *e;

    for (i = 0; i < arg0->unk_44; i++) {
        e = &arg0->unk_748[i];
        if (e->unk_80 != 0) {
            if (e->unk_80 != 0) {
                arg0->unk_0C(e->unk_80);
            }
            func_0881F5C0(e, 0, 0x84);
        }
    }
}
