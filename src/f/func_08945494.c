#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E_08945494;

typedef struct {
    E_08945494 *unk_00;
    u32 unk_04;
} V_08945494;

typedef struct {
    u8 pad_00[0x44];
    V_08945494 unk_44;
} M_08945494;

typedef struct {
    u8 pad_00[0x6D0];
    void *unk_6D0;
    u8 pad_6D4[0xC];
    s32 unk_6E0;
    M_08945494 unk_6E4;
} T_08945494;

extern u8 D_08A476C0[];
void func_0880416C(void *);
void func_0891A9A0(void *, s32);
void func_08945784(s32, s32);

T_08945494 *func_08945494(T_08945494 *arg0, s16 arg1) {
    E_08945494 *p;
    V_08945494 *v;
    u32 i;
    u32 j;
    V_08945494 *w;

    if (arg0 != NULL) {
        arg0->unk_6D0 = D_08A476C0;
        i = 0;
        if (arg0->unk_6E4.unk_44.unk_04 != 0) {
            j = 0;
            w = &arg0->unk_6E4.unk_44;
            do {
                func_08945784(((E_08945494 *)((u8 *)w->unk_00 + j))->unk_00, arg0->unk_6E0);
                i++;
                j += sizeof(E_08945494);
            } while (i < *(u32 *)&arg0->unk_6E4.unk_44.unk_04);
        }
        if (&arg0->unk_6E4 != NULL) {
            p = arg0->unk_6E4.unk_44.unk_00;
            v = &arg0->unk_6E4.unk_44;
            if ((u32)p != (u32)(p + arg0->unk_6E4.unk_44.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_6E4.unk_44.unk_04);
            }
            arg0->unk_6E4.unk_44.unk_04 = 0;
        }
        func_0891A9A0(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
