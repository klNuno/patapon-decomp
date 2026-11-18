#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
    u8 pad_8D1[0xF];
    s32 unk_8E0;
    u8 pad_8E4[0x8];
    u8 unk_8EC;
    u8 unk_8ED;
} Obj2_089991B0;

typedef struct {
    u8 pad_00[0x6D2E4];
    s32 unk_6D2E4;
    Obj2_089991B0 *unk_6D2E8;
} Obj_089991B0;

extern void *D_08AD8DD8[];
extern u8 *D_08AD1F14[];
extern f32 D_089EED60[];
extern f32 D_089EED64[];
extern f32 D_089EED68[];

Obj2_089991B0 *func_0892E894(void *);
void func_088D46FC(Obj2_089991B0 *, f32, f32, f32, f32);
void func_0892DFB4(Obj2_089991B0 *, s32);
void func_088D450C(Obj2_089991B0 *, s32);
s32 func_089A8B5C(u8 *, s32, s32);

void func_089991B0(Obj_089991B0 *arg0) {
    if (arg0->unk_6D2E8 == NULL) {
        arg0->unk_6D2E8 = func_0892E894(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL);
        arg0->unk_6D2E8->unk_8D0 = 1;
        func_088D46FC(arg0->unk_6D2E8, D_089EED60[0], D_089EED64[0], D_089EED68[0], 1.0f);
        func_0892DFB4(arg0->unk_6D2E8, 0);
        arg0->unk_6D2E8->unk_8E0 = -1;
        arg0->unk_6D2E8->unk_8EC = 1;
        arg0->unk_6D2E8->unk_8ED = 0;
        if (arg0->unk_6D2E4 != -1) {
            func_088D450C(arg0->unk_6D2E8, func_089A8B5C((D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL) + 0x2460, 2, arg0->unk_6D2E4));
        }
    }
}
