#include "common.h"

extern "C" {

struct N {
    N *unk_00;
    u8 pad_04[4];
    s32 unk_08;
};

struct I {
    N *unk_00;

    s32 eq(const I &arg0) { return unk_00 == arg0.unk_00; }
    bool ne(const I &arg0) { return !(bool)eq(arg0); }
    s32 eq2(const I &arg0) { N *t = *(N *const volatile *)&arg0.unk_00; return unk_00 == t; }
    bool ne2(const I &arg0) { return !(bool)eq2(arg0); }
};

typedef struct {
    f32 unk_00[16];
} M_088E5458;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} F;

typedef struct {
    M_088E5458 unk_00;
    F unk_40;
    M_088E5458 unk_50;
    u8 pad_90[0x18];
    I unk_A8;
    I unk_AC;
} T;

typedef struct {
    u8 pad_00[0x34];
    u8 unk_34[0x278];
    s32 unk_2AC;
    u8 pad_2B0[0x20];
    u8 unk_2D0[1];
} S;

void func_088664DC(M_088E5458 *, void *, s32);
s32 func_08866B80(M_088E5458 *, s32);
void func_08866B54(void *, s32, s32);
void func_08923DE0(void *);
void func_08923C70(s32 *arg0, char *arg1);
void func_08923C7C(s32 *, char *);
void func_0892376C(s32 *, F *);
void func_0893036C(void *, s32, s32);

void func_088E5A3C(S *arg0, s32 arg1) {
    T t;
    func_08923DE0(arg0->unk_34);
    func_08923C70((s32 *)&t.unk_AC, (char *)arg0->unk_34);
    func_08923C7C((s32 *)&t.unk_A8, (char *)arg0->unk_34);
    if (t.unk_AC.ne2(t.unk_A8)) {
        do {
            func_088664DC(&t.unk_00, (u8 *)arg0 + arg0->unk_2AC * 0x90 + 0xF0, t.unk_AC.unk_00->unk_08);
            func_08866B54(&t.unk_50, 0, func_08866B80(&t.unk_00, 0));
            func_08866B54(&t.unk_50, 1, func_08866B80(&t.unk_00, 1));
            func_08866B54(&t.unk_50, 2, func_08866B80(&t.unk_00, 2));
            func_08866B54(&t.unk_50, 3, func_08866B80(&t.unk_00, 3));
            t.unk_40.unk_00 = t.unk_50.unk_00[12];
            t.unk_40.unk_04 = t.unk_50.unk_00[13];
            t.unk_40.unk_0C = t.unk_50.unk_00[15];
            t.unk_40.unk_08 = 0.0f;
            func_0892376C(&t.unk_AC.unk_00->unk_08, &t.unk_40);
            t.unk_AC.unk_00 = t.unk_AC.unk_00->unk_00;
        } while (t.unk_AC.ne(t.unk_A8));
    }
    func_0893036C(arg0->unk_2D0, -1, arg1);
}

}
