#include "common.h"

typedef struct Sub2_089A69C4 {
    u8 pad_00[0x20];
    u8 unk_20[4];
} Sub2_089A69C4;

typedef struct Sub_089A69C4 {
    u8 pad_00[0x120];
    Sub2_089A69C4 *unk_120;
} Sub_089A69C4;

typedef struct Obj_089A69C4 {
    u8 pad_00[0x10];
    Sub_089A69C4 *unk_10;
} Obj_089A69C4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089421BC(void *, s32, s32, s32, s32, s32, s32);

void func_089A69C4(Obj_089A69C4 *arg0, void *arg1) {
    s32 *temp;

    temp = func_0885356C(arg1, 0, 0, 4);
    if (arg0->unk_10 != NULL && arg0->unk_10->unk_120 != NULL) {
        func_089421BC(arg0->unk_10->unk_120->unk_20, 7, *temp, 0, 0, 1, 0);
    }
    func_08852F00(arg1, 0);
}
