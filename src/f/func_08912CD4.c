#include "common.h"

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0x2C];
    f32 unk_68;
    u8 pad_6C[0x3C];
} E_08912CD4;

typedef struct {
    E_08912CD4 *unk_00;
    s32 unk_04;
} Vec_08912CD4;

typedef struct {
    u8 pad_00[0xFCC];
    Vec_08912CD4 unk_FCC;
    u8 pad_FD4[4];
    E_08912CD4 unk_FD8;
} T_08912CD4;

void func_088D68BC(void *);

void func_08912CD4(T_08912CD4 *arg0) {
    E_08912CD4 *p;
    E_08912CD4 **d;
    s32 *n;
    f32 f;

    arg0->unk_FD8.unk_38 = 0;
    f = arg0->unk_FD8.unk_68;
    func_088D68BC(&arg0->unk_FD8);
    arg0->unk_FD8.unk_68 = f;
    p = arg0->unk_FCC.unk_00;
    d = &arg0->unk_FCC.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_FCC.unk_04)) {
        n = &arg0->unk_FCC.unk_04;
        do {
            p->unk_38 = 0;
            f = p->unk_68;
            func_088D68BC(p);
            p->unk_68 = f;
            p++;
        } while (p != *d + *n);
    }
}
