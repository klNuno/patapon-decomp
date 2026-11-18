#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x48];
    s32 unk_A8;
    u8 pad_AC[0x4];
    u8 unk_B0[0x1460];
    u8 unk_1510[0x4];
} Obj_0886DE40;

extern u8 D_08A44E80[];
extern u8 D_08A44F88[];
extern u8 D_08A44F44[];

void func_0886EC30(u8 *, s32);
void func_0885C534(u8 *, s32);
void func_0886F084(Obj_0886DE40 *, s32);
void func_0880416C(Obj_0886DE40 *);

Obj_0886DE40 *func_0886DE40(Obj_0886DE40 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A44E80;
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F88;
            func_0886EC30(arg0->unk_1510, -1);
            if (arg0 != NULL) {
                arg0->unk_50 = D_08A44F44;
                func_0885C534(arg0->unk_B0, -1);
                if (arg0->unk_60 != NULL) {
                    arg0->unk_A8 = 0;
                }
                func_0886F084(arg0, 0);
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
