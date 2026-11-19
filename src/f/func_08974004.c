#include "common.h"

typedef struct {
    u8 pad_00[0x92E4];
    s32 unk_92E4;
} T;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
} U;

typedef struct {
    u8 pad_00[0x3A0];
    T *unk_3A0;
    u8 pad_3A4[0x111C];
    U unk_14C0;
} V;

typedef struct {
    u8 pad_00[4];
    V *unk_04;
} W;

void func_08974004(W *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    U *temp = &arg0->unk_04->unk_14C0;
    if (temp != NULL) {
        *arg1 = temp->unk_08;
        *arg2 = temp->unk_00;
        *arg3 = arg0->unk_04->unk_3A0->unk_92E4;
    }
}
