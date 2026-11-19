#include "common.h"

typedef struct S S;

typedef struct {
    u8 pad_00[0x44];
    S **unk_44;
    s32 unk_48;
    u8 unk_4C;
    u8 pad_4D[3];
    s32 unk_50;
} T;

struct S {
    S *volatile unk_00;
    T unk_04;
    void *unk_58;
};

extern u8 D_08A48A34[];

S *func_089B32D0(S *arg0, S *arg1) {
    S *temp;

    arg0->unk_58 = D_08A48A34;
    arg0->unk_00 = arg1;
    arg0->unk_04.unk_44 = (S **)(((u32)&arg0->unk_04 & 3) + (u32)arg0 + 4);
    arg0->unk_04.unk_48 = 0;
    arg0->unk_04.unk_4C = 0;
    arg0->unk_04.unk_50 = 0;
    temp = arg0->unk_00;
    if (temp != NULL) {
        T *temp2 = &temp->unk_04;
        S **temp3 = temp->unk_04.unk_44 + temp->unk_04.unk_48;
        if (temp3 != NULL) {
            *temp3 = arg0;
        }
        temp2->unk_48++;
    }
    return arg0;
}
