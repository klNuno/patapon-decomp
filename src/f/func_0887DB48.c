#include "common.h"

typedef struct {
    u8 pad_00[0x40];
} M_0887DB48;

typedef struct {
    M_0887DB48 unk_00;
    u8 pad_40[0x10];
} N_0887DB48;

typedef struct {
    s32 *unk_00;
    u32 unk_04;
} V_0887DB48;

typedef struct {
    M_0887DB48 unk_00;
    M_0887DB48 unk_40;
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
    f32 unk_8C;
    s32 unk_90;
    s32 unk_94;
    f32 unk_98;
    s32 unk_9C;
    u8 pad_A0[0x24];
    V_0887DB48 unk_C4;
    u8 pad_CC[4];
    s32 unk_D0;
    s32 unk_D4;
    f32 unk_D8;
    f32 unk_DC;
    s32 unk_E0;
    u8 unk_E4;
    u8 pad_E5[3];
    s32 unk_E8;
    s32 unk_EC;
    u8 unk_F0;
    u8 pad_F1[3];
    s32 unk_F4;
    u8 unk_F8;
} S_0887DB48;

void func_08855354(M_0887DB48 *);
void func_08866B54(void *, s32, s32);
s32 func_08866B80(M_0887DB48 *, s32);
u32 func_0887DB40(void);

void func_0887DB48(S_0887DB48 *arg0) {
    N_0887DB48 a;
    M_0887DB48 b;
    V_0887DB48 *v;
    s32 *p;
    s32 *q;
    u32 i;

    func_08855354(&a.unk_00);
    func_08866B54(arg0, 0, func_08866B80(&a.unk_00, 0));
    func_08866B54(arg0, 1, func_08866B80(&a.unk_00, 1));
    func_08866B54(arg0, 2, func_08866B80(&a.unk_00, 2));
    func_08866B54(arg0, 3, func_08866B80(&a.unk_00, 3));
    func_08855354(&b);
    func_08866B54(&arg0->unk_40, 0, func_08866B80(&b, 0));
    func_08866B54(&arg0->unk_40, 1, func_08866B80(&b, 1));
    func_08866B54(&arg0->unk_40, 2, func_08866B80(&b, 2));
    func_08866B54(&arg0->unk_40, 3, func_08866B80(&b, 3));
    arg0->unk_80 = 1.0f;
    arg0->unk_84 = 1.0f;
    arg0->unk_88 = 1.0f;
    arg0->unk_8C = 1.0f;
    v = &arg0->unk_C4;
    p = arg0->unk_C4.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_C4.unk_04)) {
        do {
            p++;
        } while (p != v->unk_00 + arg0->unk_C4.unk_04);
    }
    arg0->unk_C4.unk_04 = 0;
    arg0->unk_98 = 1.0f;
    arg0->unk_9C = -1;
    arg0->unk_D0 = 0;
    arg0->unk_D4 = 0;
    arg0->unk_D8 = 1.0f;
    arg0->unk_DC = 1.0f;
    arg0->unk_E0 = 0;
    arg0->unk_E4 = 0;
    arg0->unk_E8 = 1;
    arg0->unk_EC = -1;
    arg0->unk_F0 = 0;
    arg0->unk_90 = 0;
    arg0->unk_94 = 0;
    arg0->unk_F4 = 0;
    arg0->unk_F8 = 1;
    for (i = 0; i < func_0887DB40(); i++) {
        q = arg0->unk_C4.unk_00 + arg0->unk_C4.unk_04;
        if (q != NULL) {
            *q = 0;
        }
        arg0->unk_C4.unk_04++;
    }
}
