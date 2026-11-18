#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
    u8 unk_5C[0x14];
    s32 unk_70;
    s32 unk_74;
    f32 *unk_78;
    u8 pad_7C[0xC];
    f32 unk_88;
    f32 unk_8C;
    u8 pad_90[0x6B0];
    s32 unk_740;
} T;

void func_089B32D0(void *, s32);
void func_089457D8(void *);
void func_088F232C(void *, s32);
void func_088AF260(void *, s32);
extern u8 D_08A48894[];

T *func_089AF140(T *arg0, s32 arg1) {
    f32 *temp;
    func_089B32D0(arg0, arg1);
    arg0->unk_58 = D_08A48894;
    func_089457D8(arg0->unk_5C);
    func_088F232C(&arg0->unk_70, 1);
    arg0->unk_740 = 0;
    func_088AF260(&arg0->unk_70, 1);
    arg0->unk_74 = 1;
    temp = arg0->unk_78;
    arg0->unk_88 = 15.0f - temp[0];
    arg0->unk_8C = 15.0f - temp[1];
    return arg0;
}
