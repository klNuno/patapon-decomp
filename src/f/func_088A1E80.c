#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} Vec;

typedef struct {
    u8 pad_00[0x60];
    Vec unk_60;
    f32 unk_6C;
    u8 pad_70[0x30];
} Sub;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x1C];
    Sub unk_20;
} Obj;

typedef struct S_088A250C S_088A250C;
void func_0881F5C0(void *, s32, s32);
s32 func_088A250C(S_088A250C *, s32);

s32 func_088A1E80(Obj *arg0) {
    volatile f32 temp2;
    Vec temp;
    temp = arg0->unk_20.unk_60;
    temp2 = arg0->unk_20.unk_6C;
    func_088A250C((S_088A250C *)&arg0->unk_20, arg0->unk_00);
    func_0881F5C0(&arg0->unk_20, 0, 0xA0);
    arg0->unk_20.unk_60 = temp;
    arg0->unk_20.unk_6C = temp2;
    return 1;
}
