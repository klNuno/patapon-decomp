#include "common.h"

void func_0880416C(void *);
void func_088D4E74(void *, s32);
void func_08925D14(void *, s32);
extern u8 D_08A47874[];

typedef struct {
    u8 pad_00[0x2C];
} E_08953F7C;

typedef struct {
    E_08953F7C *unk_00;
    s32 unk_04;
} V_08953F7C;

typedef struct {
    u8 pad_00[0x190];
    V_08953F7C unk_190;
} S_08953F7C;

typedef struct {
    void *unk_00;
    u8 pad_04[0x74C - 0x4];
    S_08953F7C unk_74C;
} T_08953F7C;

T_08953F7C *func_08953F7C(T_08953F7C *arg0, s16 arg1) {
    E_08953F7C *p;
    V_08953F7C *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47874;
        func_08925D14((u8 *)arg0 + 0x8F8, -1);
        if (&arg0->unk_74C != NULL) {
            p = arg0->unk_74C.unk_190.unk_00;
            v = &arg0->unk_74C.unk_190;
            if ((u32)p != (u32)(p + arg0->unk_74C.unk_190.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_74C.unk_190.unk_04);
            }
            arg0->unk_74C.unk_190.unk_04 = 0;
        }
        func_088D4E74(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
