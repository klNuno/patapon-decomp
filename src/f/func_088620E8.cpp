#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} E_088620E8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 *unk_20;
} Pool_088620E8;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x15C];
} D_088620E8;

typedef struct {
    u8 pad_00[0xDC];
    D_088620E8 *unk_DC;
    u8 pad_E0[0x630];
    Pool_088620E8 unk_710;
} Obj_088620E8;

E_088620E8 *func_08862234(Pool_088620E8 *, s32);

inline E_088620E8 *get(Pool_088620E8 *p, s32 i) {
    if (i < 0 || p->unk_18 <= i) {
        return NULL;
    }
    return (E_088620E8 *)(p->unk_20 + p->unk_1C * i);
}

void func_088620E8(Obj_088620E8 *arg0, s32 arg1) {
    E_088620E8 *e;
    E_088620E8 *t;

    ((D_088620E8 *)((u8 *)arg0->unk_DC + arg1 * 0x168))->unk_08 = 0;
    e = get(&arg0->unk_710, arg1);
    if (e != NULL) {
        if (e != NULL) {
            if (arg0->unk_710.unk_00 == e->unk_00) {
                arg0->unk_710.unk_00 = e->unk_08;
            }
            if (arg0->unk_710.unk_08 == e->unk_00) {
                arg0->unk_710.unk_08 = e->unk_04;
            }
            if (e->unk_04 != -1) {
                t = func_08862234(&arg0->unk_710, e->unk_04);
                t->unk_08 = e->unk_08;
            }
            if (e->unk_08 != -1) {
                t = func_08862234(&arg0->unk_710, e->unk_08);
                t->unk_04 = e->unk_04;
            }
            t = func_08862234(&arg0->unk_710, arg0->unk_710.unk_0C);
            t->unk_08 = e->unk_00;
            e->unk_04 = arg0->unk_710.unk_0C;
            e->unk_08 = -1;
            arg0->unk_710.unk_0C = e->unk_00;
            if (arg0->unk_710.unk_04 == -1) {
                arg0->unk_710.unk_04 = e->unk_00;
            }
            arg0->unk_710.unk_10--;
            arg0->unk_710.unk_14++;
        }
    }
}

}
