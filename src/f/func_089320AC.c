#include "common.h"

typedef struct Ret_089320AC {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;
} Ret_089320AC;

typedef struct Obj_089320AC {
    u8 pad_00[0x54];
    s32 unk_54;
} Obj_089320AC;

extern u8 D_08AD9408[];
extern s32 D_08AD91E0[];
extern s32 func_0885AB7C(s32, s32, s32);
extern s32 func_0885AAF8(s32);

void func_089320AC(Obj_089320AC *arg0) {
    s32 i;

    if (D_08AD9408[0] == 0) {
        D_08AD9408[0] = 1;
        for (i = ((Ret_089320AC *)func_0885AAF8(arg0->unk_54))->unk_20 - 1; i >= 0; i--) {
            D_08AD91E0[((Ret_089320AC *)func_0885AB7C(arg0->unk_54, 0, i))->unk_08] = i;
        }
    }
}
