#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_089B9274;

typedef struct {
    u8 pad_00[0x404];
    V_089B9274 unk_404;
} M2614_089B9274;

typedef struct {
    u8 pad_00[0x1058];
    void *unk_1058;
    u8 pad_105C[0x14];
    u8 unk_1070[0x11A0 - 0x1070];
    u8 unk_11A0[0x1870 - 0x11A0];
    u8 unk_1870[0x1F40 - 0x1870];
    u8 unk_1F40[0x2614 - 0x1F40];
    M2614_089B9274 unk_2614;
    u8 unk_2A20[0x2C38 - 0x2A20];
    u8 unk_2C38[0x2F4C - 0x2C38];
    u8 unk_2F4C[0x2F5C - 0x2F4C];
    u8 unk_2F5C[0x3270 - 0x2F5C];
    u8 unk_3270[0x4];
} S_089B9274;

extern u8 D_08A48B38[];
extern u8 D_08A485BC[];
void func_089B8FD0(void *, s32);
void func_089B915C(void *, s32);
void func_0899B584(void *, s32);
void func_088F23D0(void *, s32);
void func_089A5724(void *, s32);
void func_08925D14(void *, s32);
void func_0880416C(void *);

S_089B9274 *func_089B9274(S_089B9274 *arg0, s16 arg1) {
    s32 *p;
    V_089B9274 *v;

    if (arg0 != NULL) {
        arg0->unk_1058 = D_08A48B38;
        if (arg0->unk_2F5C != NULL) {
            func_089B8FD0(arg0->unk_3270, 0);
            func_089B915C(arg0->unk_2F5C, 0);
        }
        if (arg0->unk_2C38 != NULL) {
            func_089B8FD0(arg0->unk_2F4C, 0);
            func_089B915C(arg0->unk_2C38, 0);
        }
        func_0899B584(arg0->unk_2A20, -1);
        if (&arg0->unk_2614 != NULL) {
            p = arg0->unk_2614.unk_404.unk_00;
            v = &arg0->unk_2614.unk_404;
            if ((u32)p != (u32)(p + arg0->unk_2614.unk_404.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_2614.unk_404.unk_04);
            }
            arg0->unk_2614.unk_404.unk_04 = 0;
        }
        func_088F23D0(arg0->unk_1F40, -1);
        func_088F23D0(arg0->unk_1870, -1);
        func_088F23D0(arg0->unk_11A0, -1);
        func_089A5724(arg0->unk_1070, -1);
        if (arg0 != NULL) {
            arg0->unk_1058 = D_08A485BC;
            func_08925D14(arg0, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
