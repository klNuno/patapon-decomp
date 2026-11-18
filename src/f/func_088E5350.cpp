#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

struct T {
    u8 pad_00[0x128];
    s16 unk_128;
    s16 unk_12A;
    V2 unk_12C[1];

    V2 *get1(s32 i) {
        if (unk_128 > 0) {
            return &unk_12C[i];
        }
        return NULL;
    }
    V2 *get2(s32 i) {
        if (unk_12A > 0) {
            return &unk_12C[i + unk_128];
        }
        return NULL;
    }
};

typedef struct {
    u8 pad_00[0xEC];
    u8 unk_EC;
    u8 pad_ED[0x1B3];
    T *unk_2A0[3];
    s32 unk_2AC;
    u8 pad_2B0[0x10];
    u8 unk_2C0[0xC];
    s32 unk_2CC;
} S;

void func_0890AA8C(void *, s32, s32, s32);
void func_0890AB10(void *, s32, s32, f32, f32);

void func_088E5350(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    V2 *p;

    if (arg0->unk_EC != 0) {
        p = NULL;
        switch (arg0->unk_2CC) {
        case 0:
            break;
        case 1:
            p = arg0->unk_2A0[arg0->unk_2AC]->get1(arg2);
            break;
        case 2:
            p = arg0->unk_2A0[arg0->unk_2AC]->get2(arg2);
            break;
        }
        func_0890AA8C(arg0->unk_2C0, arg1, 1, 1);
        if (p != NULL) {
            func_0890AB10(arg0->unk_2C0, arg1, arg3, p->unk_00, p->unk_04);
        }
    }
}

}
