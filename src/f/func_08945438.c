#include "common.h"

typedef struct {
    u8 pad_00[0x6D0];
    void *unk_6D0;
    u8 pad_6D4[0xC];
    s32 unk_6E0;
    u8 unk_6E4[0x44];
    u8 *unk_728;
    s32 unk_72C;
} Obj;

typedef struct S_0891AB5C S_0891AB5C;
void func_0891A95C(S_0891AB5C *);
extern u8 D_08A476C0[];

Obj *func_08945438(Obj *arg0, s32 arg1) {
    func_0891A95C((S_0891AB5C *)arg0);
    arg0->unk_6D0 = D_08A476C0;
    arg0->unk_6E0 = arg1;
    arg0->unk_728 = (u8 *)(((u32)arg0->unk_6E4 & 3) + (u32)arg0 + 0x6E4);
    arg0->unk_72C = 0;
    return arg0;
}
