#include "common.h"

typedef struct Vec_0895CE84 {
    s32 *unk_00;
    s32 unk_04;
} Vec_0895CE84;

typedef struct Obj_0895CE84 {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x44];
    Vec_0895CE84 unk_50;
} Obj_0895CE84;

void func_0895CF0C(Obj_0895CE84 *);
s32 sceKernelDeleteEventFlag(s32);
void func_0881762C(s32, s32, s32);

void func_0895CE84(Obj_0895CE84 *arg0) {
    s32 *p;
    Vec_0895CE84 *v;

    if (arg0->unk_08 != 0) {
        func_0895CF0C(arg0);
        p = arg0->unk_50.unk_00;
        v = &arg0->unk_50;
        if ((u32)p != (u32)(p + arg0->unk_50.unk_04)) {
            do {
                p++;
            } while (p != v->unk_00 + arg0->unk_50.unk_04);
        }
        arg0->unk_50.unk_04 = 0;
        sceKernelDeleteEventFlag(arg0->unk_08);
        sceKernelDeleteEventFlag(arg0->unk_04);
        func_0881762C(0xF, 0, 0);
        arg0->unk_08 = 0;
        arg0->unk_04 = 0;
    }
}
