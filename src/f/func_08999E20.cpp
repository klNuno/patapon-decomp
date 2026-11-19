#include "common.h"

extern "C" {

struct SV_08999E20 {
    s32 *unk_00;

    s32 &operator[](u32 i) { return unk_00[i]; }
};

typedef struct {
    u8 pad_00[0x1C];
    SV_08999E20 unk_1C;
    u8 pad_20[0x4];
} V_08999E20;

typedef struct {
    u32 unk_00;
    V_08999E20 unk_04;
} E_08999E20;

struct Vec_08999E20 {
    E_08999E20 *unk_00;
    u32 unk_04;

    E_08999E20 *at(u32 i) { return &unk_00[i]; }
};

struct M_08999E20 {
    u8 pad_00[0xFB0];
    Vec_08999E20 unk_FB0;

    E_08999E20 *end() { return unk_FB0.unk_00 + *(volatile u32 *)&unk_FB0.unk_04; }
    E_08999E20 *find(u32 key) {
        s32 lo;
        s32 hi;
        u32 mid;
        E_08999E20 *e;
        u32 n;
        Vec_08999E20 *vec;

        n = unk_FB0.unk_04;
        if (n == 0) {
            return unk_FB0.unk_00 + n;
        }
        lo = 0;
        hi = n;
        if (lo <= hi) {
            do {
                vec = &unk_FB0;
                mid = lo + (hi - lo) / 2;
                if (mid >= n) {
                    break;
                }
                e = vec->at(mid);
                if (key < e->unk_00) {
                    hi = mid - 1;
                } else if (e->unk_00 < key) {
                    lo = mid + 1;
                } else {
                    return e;
                }
            } while (lo <= hi);
        }
        return end();
    }
};

typedef struct {
    u8 pad_00[0x14A8];
    M_08999E20 unk_14A8;
} G_08999E20;

extern G_08999E20 *D_08AD1F14[];

inline G_08999E20 *getg_08999E20() {
    G_08999E20 *g = D_08AD1F14[0];
    return g != NULL ? g : NULL;
}

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
} F_08999E20;

struct FV_08999E20 {
    F_08999E20 *unk_00;
    u32 unk_04;
    u32 unk_08;

    F_08999E20 &operator[](u32 i) { return unk_00[i]; }
};

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0xF1C];
    u8 unk_F28;
    u8 unk_F29;
    u8 pad_F2A[0x66];
    FV_08999E20 unk_F90;
    u8 pad_F9C[0x8C];
    s32 unk_1028;
} Obj_08999E20;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} R_08999E20;

u8 func_089A1238(void *);
R_08999E20 *func_089A1250(void *);
u32 func_0888AFAC(R_08999E20 *);
void func_0899D584(void *, void *, s32);

void func_08999E20(Obj_08999E20 *arg0) {
    M_08999E20 *m;
    V_08999E20 *v;
    u32 i;

    if (func_089A1238(arg0->unk_0C) == 0) {
        return;
    }
    arg0->unk_1028 = func_089A1250(arg0->unk_0C)->unk_24;
    arg0->unk_F28 = 1;
    arg0->unk_F29 = 0;
    m = &getg_08999E20()->unk_14A8;
    v = &m->find(func_0888AFAC(func_089A1250(arg0->unk_0C)))->unk_04;
    i = 0;
    if (arg0->unk_F90.unk_08 != 0) {
        u32 temp1 = 0;
        u32 temp2 = 0;
        FV_08999E20 &f = arg0->unk_F90;
        SV_08999E20 &q = v->unk_1C;
        do {
            F_08999E20 *temp3 = *(F_08999E20 * *)&f.unk_00;
            s32 *temp4 = *(s32 * *)&q.unk_00;
            void *temp5 = (void *)((F_08999E20 *)((u8 *)temp3 + temp1))->unk_08;
            s32 temp6 = *(s32 *)((u8 *)temp4 + temp2);
            func_0899D584(temp5, arg0->unk_0C, temp6);
            ++i;
            temp1 += 16;
            temp2 += 4;
        } while (i < arg0->unk_F90.unk_08);
    }
}

}
