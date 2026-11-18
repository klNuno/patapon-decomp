#include "common.h"

typedef struct T0 {
    u8 pad_00[0x13D0];
    s32 unk_13D0;
    s32 unk_13D4;
    s32 unk_13D8;
    s32 unk_13DC;
    s32 unk_13E0;
    s32 unk_13E4;
    s32 unk_13E8;
    u8 unk_13EC[0x1DB0 - 0x13EC];
    u8 unk_1DB0[0x2774 - 0x1DB0];
    u8 unk_2774[0x277C - 0x2774];
    u8 unk_277C[0x2814 - 0x277C];
    u8 unk_2814[0x2C48 - 0x2814];
    u8 unk_2C48[0x6B60 - 0x2C48];
    u8 unk_6B60[0xA1D0 - 0x6B60];
    u8 unk_A1D0[0xA500 - 0xA1D0];
    u8 unk_A500[0xA550 - 0xA500];
    u8 unk_A550[0xA880 - 0xA550];
} T0;

void *func_08827A50(s32, s32);
s32 func_08858B90(void);
void func_089B47FC(T0 *);
void func_089B47D4(void *, s32);
void func_0885A284(void *, s32);
void func_089B472C(void *);
void func_0887B7BC(void *);
void func_08877CB8(void *);
void func_08926770(void *);
void func_0880406C(void *, void *, void *, s32, s32);
void func_088C52F0(void);
void func_088C5360(void);
void func_08913614(void *);
void func_089B461C(void *);

T0 **func_089B450C(T0 **arg0) {
    T0 *p;

    if ((p = func_08827A50(0xA880, func_08858B90())) != NULL) {
        func_089B47FC(p);
        p->unk_13D0 = 0;
        p->unk_13D4 = 0;
        p->unk_13D8 = 0;
        p->unk_13DC = 0x1E0;
        p->unk_13E0 = 0x110;
        p->unk_13E4 = 0x1E0;
        p->unk_13E8 = 0x110;
        func_089B47D4(p->unk_13EC, 0x1105);
        func_089B47D4(p->unk_1DB0, 0x1105);
        func_0885A284(p->unk_2774, func_08858B90());
        func_089B472C(p->unk_277C);
        func_0887B7BC(p->unk_2814);
        func_08877CB8(p->unk_2C48);
        func_08926770(p->unk_6B60);
        func_0880406C(p->unk_A1D0, func_088C52F0, func_088C5360, 0x110, 3);
        func_08913614(p->unk_A500);
        func_089B461C(p->unk_A550);
    }
    *arg0 = p;
    return arg0;
}
