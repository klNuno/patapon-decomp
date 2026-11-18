#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_0895C44C;

typedef struct {
    u8 pad_00[0x44];
    V_0895C44C unk_44;
} M_0895C44C;

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    u8 pad_18[0x2C];
    M_0895C44C unk_44;
    M_0895C44C unk_90;
} S_0895C44C;

void func_0895C72C(void);
void func_0895B9E8(S_0895C44C *, s32);
void func_0880416C(void *);
extern u8 D_08A479E4[];

S_0895C44C *func_0895C44C(S_0895C44C *arg0, s16 arg1) {
    s32 *p;
    V_0895C44C *v;

    if (arg0 != NULL) {
        arg0->unk_14 = D_08A479E4;
        func_0895C72C();
        if (&arg0->unk_90 != NULL) {
            p = arg0->unk_90.unk_44.unk_00;
            v = &arg0->unk_90.unk_44;
            if ((u32)p != (u32)(p + arg0->unk_90.unk_44.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_90.unk_44.unk_04);
            }
            arg0->unk_90.unk_44.unk_04 = 0;
        }
        if (&arg0->unk_44 != NULL) {
            p = arg0->unk_44.unk_44.unk_00;
            v = &arg0->unk_44.unk_44;
            if ((u32)p != (u32)(p + arg0->unk_44.unk_44.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_44.unk_44.unk_04);
            }
            arg0->unk_44.unk_44.unk_04 = 0;
        }
        func_0895B9E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
