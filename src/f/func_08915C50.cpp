#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x321C8];
    u64 unk_321C8;
} C_08915C50;

typedef struct {
    u8 pad_00[0x1498];
    C_08915C50 *unk_1498;
} B_08915C50;

typedef struct {
    u8 pad_00[0x42820];
    B_08915C50 *unk_42820;
} A_08915C50;

typedef struct {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0x2434 - 0x1504];
    u8 unk_2434;
    u8 pad_2435[0x24C8 - 0x2435];
    u32 unk_24C8;
    u8 unk_24CC;
    u8 pad_24CD[3];
    u32 unk_24D0;
    u8 pad_24D4[0x2600 - 0x24D4];
    u8 unk_2600;
} S_08915C50;

extern A_08915C50 *D_08AD1E28[];
extern void *D_08A8812C[];
s32 func_088586E8(void);
s32 func_08860820(void *, s32);
void func_08876A3C(B_08915C50 *);
s32 func_0887ED88(s32, s32);
void func_089234AC(void *, s32, f32, f32);
u8 *func_089B53D8(s32);
void scePowerSetClockFrequency350(s32, s32, s32);

s32 func_08915C50(S_08915C50 *arg0, u32 arg1) {
    if (arg0->unk_2434 == 0) {
        return 0;
    }
    if (arg0->unk_24CC != 0) {
        return 1;
    }
    if (arg0->unk_24CC != 0) {
        arg0->unk_24C8 += arg1;
    }
    bool b = !(bool)func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0);
    if (b) {
        if (arg0->unk_2600 == 0) {
            func_08876A3C((D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820);
            arg0->unk_2600 = 1;
            scePowerSetClockFrequency350(0xDE, 0xDE, 0x6F);
        }
        if (arg0->unk_24D0 >= 0x11940 || arg0->unk_24D0 == 0) {
            func_089234AC(func_089B53D8(func_088586E8()) + 0x2844, 7, 1.0f, 0.0f);
            arg0->unk_24D0 = 0;
        }
        arg0->unk_24D0 += arg1;
        if (func_0887ED88(arg0->unk_1500, 0xF309) != 0) {
            arg0->unk_24CC = 1;
            return 1;
        }
        (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1498->unk_321C8 += arg1;
    }
    return 0;
}

}
