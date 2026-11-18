#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x58 - 0xC];
    void *unk_58;
    u8 pad_5C[0x7C - 0x5C];
    void *unk_7C;
    u8 pad_80[0xCC - 0x80];
    void *unk_CC;
    u8 pad_D0[0x370 - 0xD0];
    void *unk_370;
    u8 pad_374[0x3A8 - 0x374];
    u8 unk_3A8[0x6BC - 0x3A8];
    u8 unk_6BC[4];
} Obj_088A8F74;

extern u8 D_08A45B24[];
extern u8 D_08A45B40[];
extern u8 D_08A45B58[];
extern u8 D_08A45B68[];
extern u8 D_08A45BB4[];

void func_0880416C(Obj_088A8F74 *);
void func_088A8D84(void *, s32);
void func_088A8F10(void *, s32);
void func_089692D8(void *, s32);

Obj_088A8F74 *func_088A8F74(Obj_088A8F74 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A45B24;
        arg0->unk_58 = D_08A45B40;
        arg0->unk_7C = D_08A45B58;
        arg0->unk_CC = D_08A45B68;
        arg0->unk_370 = D_08A45BB4;
        if (arg0->unk_3A8 != NULL) {
            func_088A8D84(arg0->unk_6BC, 0);
            func_088A8F10(arg0->unk_3A8, 0);
        }
        func_089692D8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
