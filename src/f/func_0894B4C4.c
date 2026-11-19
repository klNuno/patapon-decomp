#include "common.h"

typedef struct {
    u8 *volatile unk_00;
    s32 unk_04;
} T;

extern u8 D_08A47798[];
extern u8 D_08A477CC[];
void func_0894B624(T *);

T *func_0894B4C4(T *arg0, s32 arg1) {
    arg0->unk_00 = D_08A477CC;
    arg0->unk_00 = D_08A47798;
    arg0->unk_04 = arg1;
    func_0894B624(arg0);
    return arg0;
}
