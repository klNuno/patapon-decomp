#include "common.h"

typedef struct Obj_0895CF0C {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x44];
    s32 *unk_50;
    s32 unk_54;
    u8 pad_58[4];
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    u8 unk_6C;
} Obj_0895CF0C;

s32 sceKernelClearEventFlag(s32, u32);
void func_0895D17C(Obj_0895CF0C *, s32);

void func_0895CF0C(Obj_0895CF0C *arg0) {
    s32 *temp;
    s32 *end;

    sceKernelClearEventFlag(arg0->unk_08, 0);
    sceKernelClearEventFlag(arg0->unk_04, 0);
    func_0895D17C(arg0, 8);
    arg0->unk_5C = 0;
    arg0->unk_60 = 0;
    arg0->unk_64 = 0;
    arg0->unk_68 = 0;
    arg0->unk_6C = 1;
    end = arg0->unk_50 + arg0->unk_54;
    for (temp = arg0->unk_50; temp != end; temp++) {
        *temp = 0;
    }
}
