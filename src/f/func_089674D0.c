#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    void *unk_80;
    u8 pad_84[0x60];
    u8 unk_E4[0x8C];
    u8 unk_170[0x270];
    u8 unk_3E0[4];
    void *unk_3E4;
} Obj_089674D0;

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_088882F8(void *, s32);
void func_08927800(void *, s32);
void func_089675FC(Obj_089674D0 *);
extern u8 D_08A47A38[];
extern u8 D_08A47CA4[];
extern u8 D_08A47CC0[];
extern u8 D_08A47CDC[];

Obj_089674D0 *func_089674D0(Obj_089674D0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_80 = D_08A47CA4;
        arg0->unk_3E4 = D_08A47CC0;
        func_089675FC(arg0);
        if (arg0->unk_3E0 != NULL) {
            arg0->unk_3E4 = D_08A47A38;
        }
        if (arg0 != NULL) {
            arg0->unk_80 = D_08A47CDC;
            func_08927800(arg0->unk_170, -1);
            func_088882F8(arg0->unk_E4, -1);
            func_08865F78(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
