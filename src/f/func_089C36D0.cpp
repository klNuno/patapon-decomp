#include "common.h"

extern "C" {

struct A_089C36D0 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_0886A45C(s32, s32);

struct H_089C36D0 {
    s32 unk_00;
    A_089C36D0 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return (unk_0C != NULL) ? *unk_0C : 0; }
    void release() {
        if (unk_08 != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vfunc_0C(unk_08, *(void **)&unk_0C, unk_00);
                func_0886A45C(unk_08, unk_00);
            }
        }
    }
};

struct B_089C36D0 {
    u8 pad_00[0x28];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14(s32);
};

struct T_089C36D0 : B_089C36D0 {
    u8 pad_2C[0x20];
    u8 *unk_4C;
    s32 unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x90];
    f32 unk_F0;
    f32 unk_F4;
    f32 unk_F8;
    s32 unk_FC;
    f32 unk_100;
    u8 pad_104[0x10];
    f32 unk_114;
    s32 unk_118;
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V_089C36D0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V;

typedef struct {
    V unk_00[4];
} Mtx;

typedef struct {
    u8 pad_00[0x34];
    f32 unk_34;
    u8 pad_38[0x14];
} M;

void func_08855354(M *);
s32 func_0887C5A8(Mtx *);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
void func_08858024(s32);
extern s32 func_088581B0(s32);
f32 func_08856234(f32);
void func_08866B54(M *, s32, void *);
s32 func_0898A324(void *);
s32 func_0898583C(s32);
void func_088CE1EC(s32, T_089C36D0 *);
s32 func_088C6484(s32);
s32 func_088BCF94(s32);
void func_08865FEC(void *, s32, s32);
void func_089912C8(H_089C36D0 *, s32, void *);

void func_089C36D0(T_089C36D0 *arg0, u8 *arg1, V_089C36D0 *arg2) {
    struct {
        H_089C36D0 unk_00;
        u8 pad_10[4];
    } h;
    M a;
    Mtx b;
    V c, d, e, f;
    f32 x;

    func_088CE1EC(func_0898583C(func_0898A324(&arg0->unk_4C[0x1212D0])), arg0);
    arg0->v14(-2);
    arg0->unk_50 = 0;
    arg0->unk_FC = 0;
    arg0->unk_F0 = arg2->unk_00;
    arg0->unk_F4 = arg2->unk_04;
    arg0->unk_F8 = 0;
    arg0->unk_100 = 1.0f;
    arg0->unk_118 = *(s16 *)arg1;
    func_08855354(&a);
    func_0887C5A8(&b);
    func_08858024(1);
    func_088581B0((s32)&b);
    func_08858024(2);
    func_0887C590((char *)&c, 0.0f, 0.0f, 0.0f, 1.0f);
    x = -b.unk_00[3].unk_08 * func_08856234(45.0f) / 136.0f;
    c.unk_00 = -b.unk_00[3].unk_00 + (-240.0f * x);
    c.unk_04 = -b.unk_00[3].unk_04 + (136.0f * x);
    func_08866B54(&a, 0, func_0887C590((char *)&d, x, 0.0f, 0.0f, 0.0f));
    func_08866B54(&a, 1, func_0887C590((char *)&e, 0.0f, x, 0.0f, 0.0f));
    func_08866B54(&a, 2, func_0887C590((char *)&f, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&a, 3, &c);
    arg0->unk_114 = a.unk_34;
    func_089912C8(&h.unk_00, func_088BCF94(func_088C6484((s32)&arg0->unk_4C[0x506F0])), arg1 + 0x28);
    func_08865FEC(arg0->unk_60, h.unk_00.unk_08, 1);
    h.unk_00.release();
}

}
