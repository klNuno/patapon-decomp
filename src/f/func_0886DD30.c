#include "common.h"

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} S0886DD30;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    S0886DD30 unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1468];
    u8 unk_1518[4];
} T0886DD30;

extern u8 D_08A44E34[];
extern u8 D_08A44F44[];

void func_089A60FC(void *, s32);
void func_0885C534(void *, s32);
void func_0886F084(T0886DD30 *, s32);
void func_0880416C(void *);

T0886DD30 *func_0886DD30(T0886DD30 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A44E34;
        func_089A60FC(arg0->unk_1518, -1);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F44;
            func_0885C534(arg0->unk_B0, -1);
            if (&arg0->unk_60 != NULL) {
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
