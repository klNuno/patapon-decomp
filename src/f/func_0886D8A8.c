#include "common.h"

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} Mem_0886D8A8;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    Mem_0886D8A8 unk_60;
    u8 pad_AC[0x4];
    u8 unk_B0[0x1468];
    u8 unk_1518[0x4];
} Obj_0886D8A8;

extern u8 D_08A44D04[];
extern u8 D_08A44F44[];

void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_0886F084(void *, s32);
void func_0889A5A4(void *, s32);

Obj_0886D8A8 *func_0886D8A8(Obj_0886D8A8 *arg0, s16 arg1) {
    Mem_0886D8A8 *m;

    if (arg0 != NULL) {
        arg0->unk_50 = D_08A44D04;
        func_0889A5A4(arg0->unk_1518, -1);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F44;
            func_0885C534(arg0->unk_B0, -1);
            m = &arg0->unk_60;
            if (m != NULL) {
                arg0->unk_60.unk_48 = 0;
            }
            func_0886F084(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
