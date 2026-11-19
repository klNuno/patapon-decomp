#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[1];
} T;

void func_0886E47C(void *, s32, void *, s32, s32);
void func_089D5C34(void *, s32, void *);
extern u8 D_08A48FF4[];

T *func_089D59A0(T *arg0, s32 arg1, void *arg2) {
    func_0886E47C(arg0, arg1, arg2, 0, -1);
    arg0->unk_50 = D_08A48FF4;
    arg0->unk_1510 = 0;
    func_089D5C34(arg0->unk_1514, arg1, arg2);
    return arg0;
}
