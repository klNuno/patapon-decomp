#include "common.h"

void func_0880416C(void *);
void func_088F23D0(void *, s32);
void func_089458C8(void *, s32);
void func_089B3344(void *, s32);
extern u8 D_08A489CC[];

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
    u8 unk_5C[0x14];
    u8 unk_70[0x6D0];
    u8 unk_740[0x6D0];
    u8 unk_E10[0x4];
} T089B2BA8;

T089B2BA8 *func_089B2BA8(T089B2BA8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_58 = D_08A489CC;
        func_088F23D0(arg0->unk_E10, -1);
        func_088F23D0(arg0->unk_740, -1);
        func_088F23D0(arg0->unk_70, -1);
        func_089458C8(arg0->unk_5C, -1);
        func_089B3344(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
