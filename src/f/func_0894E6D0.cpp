#include "common.h"

extern "C" {

struct Unk {
    Unk *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[4];

    s32 unk_14(Unk *arg0) { return this == arg0; }
    bool unk_18(Unk *arg0) { return !(bool)unk_14(arg0); }
};

struct C;

struct Unk1 {
    u8 pad_00[0x19094];
    Unk unk_19094;
    u8 pad_190A8[0x10BC];
    s32 unk_1A164;
    f32 unk_1A168;
    u8 pad_1A16C[0x14];
    u8 unk_1A180[4];
};

void func_08912CC4(s32 arg0);
void func_08931B80(char *arg0, f32 fparg0);
void func_08931B9C(C *arg0, s32 arg1);

void func_0894E6D0(Unk1 *arg0)
{
    struct { Unk *unk_00; } p;
    Unk *q;

    arg0->unk_1A164 = 0;
    arg0->unk_1A168 = 1.0f;
    p.unk_00 = arg0->unk_19094.unk_00;
    q = &arg0->unk_19094;
    if (p.unk_00->unk_18(q)) {
        do {
            func_08912CC4((s32)p.unk_00->unk_10);
            p.unk_00 = p.unk_00->unk_00;
        } while (p.unk_00->unk_18(q));
    }
    func_08931B9C((C *)arg0->unk_1A180, 2);
    func_08931B80((char *)arg0->unk_1A180, 10.0f);
}

}
