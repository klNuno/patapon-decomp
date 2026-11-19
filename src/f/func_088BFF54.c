#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} V;

typedef struct {
    u8 pad_00[0x1C];
    V unk_1C;
    u8 pad_28[0x10];
} E;

typedef struct {
    u8 pad_00[4];
    E *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[8];
    u8 unk_18;
} T;

void func_088BFF54(T *arg0, const V *arg1) {
    V temp = *arg1;
    E *p = arg0->unk_04;
    if (p != NULL && arg0->unk_18 != 0) {
        ((E *)((u32)p + arg0->unk_0C * sizeof(E)))->unk_1C = temp;
    }
}
