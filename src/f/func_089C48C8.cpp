#include "common.h"

extern "C" {

typedef struct { f32 unk_00, unk_04; } Unk1;

typedef struct H {
    u8 pad_00[8];
    s32 unk_08;
} H;

typedef struct Obj_089C4234 {
    Obj_089C4234 *unk_00;
    Obj_089C4234 *unk_04;
    u8 pad_08[4];
    Obj_089C4234 *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    u8 *unk_24;
} Obj_089C4234;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x128];
    Obj_089C4234 unk_130;
    Obj_089C4234 unk_158;
    u8 pad_180[4];
    s32 unk_184[100];
} S;

typedef struct Unk_089CA058_Local {
    u8 pad_00[0x30];
    Unk1 unk_30;
    u8 pad_38[0x10];
} Unk_089CA058_Local;

extern s32 D_08A09604[];

s32 func_088586E8(void);
void func_08866464(Unk_089CA058_Local *, char *, s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_08945908(s32 *, s32);
char *func_08985828(s32, s32);
void func_08985884(f32, s32, s32, Unk1 *);
s32 func_089B53D8(s32);
u32 func_089B5464(s32);
void func_089C36D0(s32, s32, Unk1 *);
s32 func_089C3D94(s32 arg0);
s32 func_089C3F58(s32, s32);
void func_089C4360(s32 *, Obj_089C4234 *, s32);
void func_089C43F8(s32 *, Obj_089C4234 *);

void func_089C48C8(S *arg0, s32 arg1, s32 arg2) {
    s32 a, b;
    Unk1 v, w;
    Unk_089CA058_Local m;
    s32 c = ((H *)arg0->unk_130.unk_04)->unk_08;

    func_089C43F8(&b, &arg0->unk_130);
    func_089C4360(&a, &arg0->unk_130, b);
    s32 d = func_089C3F58(arg2, arg0->unk_158.unk_20);
    char *p = func_08985828(arg1, 0);
    func_08866464(&m, p, D_08A09604[d]);
    u32 i = func_089B5464(func_088586E8()) % 100U;
    s32 k = arg0->unk_184[i];
    v = m.unk_30;
    func_089C36D0(c, func_08945908(&arg0->unk_04, k), &v);

    Obj_089C4234 *q = (Obj_089C4234 *)func_089C3D94(c);
    if (&arg0->unk_158 != q) {
        s32 r;
        if (arg0->unk_158.unk_00 != &arg0->unk_158) {
            q->unk_00 = arg0->unk_158.unk_00;
            arg0->unk_158.unk_00->unk_04 = q;
            arg0->unk_158.unk_00 = q;
            r = 1;
        } else {
            arg0->unk_158.unk_00 = q;
            arg0->unk_158.unk_04 = q;
            q->unk_00 = &arg0->unk_158;
            r = 1;
        }
        q->unk_04 = &arg0->unk_158;
        if (r) {
            q->unk_0C = &arg0->unk_158;
            ++arg0->unk_158.unk_20;
        }
    }
    func_08878864(func_089B53D8(func_088586E8()), 0x20010B, 2, 1.0f, 0.0f, 0.0f);
    w = m.unk_30;
    func_08985884(8.0f, arg0->unk_00, 0x74, &w);
}

}
