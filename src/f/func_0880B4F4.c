#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x4C];
    s32 unk_50;
} T;

extern u8 D_08A44580[];
void func_0880BEA0(T *, s32);
void func_0880B54C(T *, s32, s32);

T *func_0880B4F4(T *arg0, s32 arg1) {
    s32 temp = arg1;
    T *obj = arg0;

    func_0880BEA0(obj, 0);
    obj->unk_00 = D_08A44580;
    obj->unk_50 = temp;
    func_0880B54C(obj, 0, 0);
    return obj;
}
