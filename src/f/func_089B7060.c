#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_089B7060;

typedef struct {
    u8 pad_00[0x404];
    V_089B7060 unk_404;
} K_089B7060;

typedef struct {
    u8 pad_00[0x1058];
    void *unk_1058;
    u8 pad_105C[0x14];
    u8 unk_1070[0x90];
    u8 unk_1100[0x90];
    u8 unk_1190[0x90];
    u8 unk_1220[0x90];
    u8 unk_12B0[0x90];
    u8 unk_1340[0x90];
    u8 unk_13D0[0x90];
    u8 unk_1460[0x2F8];
    u8 unk_1758[0xF18];
    u8 unk_2670[0x800];
    u8 unk_2E70[0x1058];
    u8 unk_3EC8[0x1058];
    u8 unk_4F20[0x1058];
    K_089B7060 unk_5F78;
    K_089B7060 unk_6384;
} T_089B7060;

void func_089B73B4(T_089B7060 *);
void func_08925D14(void *, s32);
void func_0899D42C(void *, s32);
void func_089A0814(void *, s32);
void func_0899EBC8(void *, s32);
void func_08865F78(void *, s32);
void func_0880416C(void *);
extern u8 D_08A48B20[];
extern u8 D_08A485BC[];

T_089B7060 *func_089B7060(T_089B7060 *arg0, s16 arg1) {
    s32 *p;
    V_089B7060 *v;
    s32 *n;

    if (arg0 != NULL) {
        arg0->unk_1058 = D_08A48B20;
        func_089B73B4(arg0);
        if (&arg0->unk_6384 != NULL) {
            p = arg0->unk_6384.unk_404.unk_00;
            v = &arg0->unk_6384.unk_404;
            if ((u32)p != (u32)(p + arg0->unk_6384.unk_404.unk_04)) {
                n = &arg0->unk_6384.unk_404.unk_04;
                do {
                    p++;
                } while (p != v->unk_00 + *n);
            }
            arg0->unk_6384.unk_404.unk_04 = 0;
        }
        if (&arg0->unk_5F78 != NULL) {
            p = arg0->unk_5F78.unk_404.unk_00;
            v = &arg0->unk_5F78.unk_404;
            if ((u32)p != (u32)(p + arg0->unk_5F78.unk_404.unk_04)) {
                n = &arg0->unk_5F78.unk_404.unk_04;
                do {
                    p++;
                } while (p != v->unk_00 + *n);
            }
            arg0->unk_5F78.unk_404.unk_04 = 0;
        }
        func_08925D14(arg0->unk_4F20, -1);
        func_08925D14(arg0->unk_3EC8, -1);
        func_08925D14(arg0->unk_2E70, -1);
        func_0899D42C(arg0->unk_2670, -1);
        func_089A0814(arg0->unk_1758, -1);
        func_0899EBC8(arg0->unk_1460, -1);
        func_08865F78(arg0->unk_13D0, -1);
        func_08865F78(arg0->unk_1340, -1);
        func_08865F78(arg0->unk_12B0, -1);
        func_08865F78(arg0->unk_1220, -1);
        func_08865F78(arg0->unk_1190, -1);
        func_08865F78(arg0->unk_1100, -1);
        func_08865F78(arg0->unk_1070, -1);
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
