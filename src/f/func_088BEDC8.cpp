#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x10];
} E;

struct S;

struct N {
    N *unk_00;
    N *unk_04;
    S *unk_08;

    s32 func_00(const N &arg0) const {
        s32 t = 0;
        if (unk_08 == arg0.unk_08 && unk_04 == arg0.unk_04) {
            t = 1;
        }
        return t;
    }

    s32 func_04(const N &arg0) const {
        s32 t = 0;
        if (func_00(arg0) && unk_00 == arg0.unk_00) {
            t = 1;
        }
        return t;
    }

    bool func_08(const N &arg0) const {
        return !(bool)func_04(arg0);
    }
};

struct S {
    u8 pad_00[0x20];
    V unk_20;
    u8 pad_28[8];
    V unk_30;
    u8 pad_38[0x4050];
    N unk_4088;
    u8 pad_4094[0x78];
    s32 unk_410C;
};

extern E D_089E0230[];
extern char D_08AD1D2C[];

s32 func_088CEEE0(char *arg0);
void func_08814BB4(s32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_0885A4E4(char *, s32, E *);
void func_0885A58C(char *);
void func_0885A610(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2);
V *func_0885429C(V *, V *);

void func_088BEDC8(S *arg0) {
    L_0893CEA8 l;
    struct {
        V unk_00;
        u8 pad_08[0x10];
    } v;
    N *end;
    N *p;

    if (func_088CEEE0((char *)arg0) != 0) {
        func_08864A30(&l);
        func_08814BB4(4);
        p = arg0->unk_4088.unk_04;
        end = &arg0->unk_4088;
        func_0885A4E4(D_08AD1D2C, 1, &D_089E0230[arg0->unk_410C]);
        while (p->func_08(*end)) {
            f32 t0, t1, x, y;
            arg0 = *(S *volatile *)&p->unk_08;
            func_0885429C(&v.unk_00, &arg0->unk_30);
            f32 t = 35.0f;
            t1 = v.unk_00.unk_04 * t;
            t0 = v.unk_00.unk_00 * t;
            y = arg0->unk_20.unk_04 - t1;
            x = arg0->unk_20.unk_00 - t0;
            func_0885A610(D_08AD1D2C, arg0->unk_20.unk_00, arg0->unk_20.unk_04, 0.0f);
            func_0885A610(D_08AD1D2C, x, y, 0.0f);
            if (p != NULL) {
                p = p->unk_04;
            }
        }
        func_0885A58C(D_08AD1D2C);
        func_08864A68(&l, -1);
    }
}

}
