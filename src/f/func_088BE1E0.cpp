#include "common.h"

extern "C" {

struct V {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};
void func_088BE5E8(s32, s32);
struct H {
    s32 unk_00;
    V *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        if (unk_08 != 0) {
            --*unk_0C;
            if (count() == 0) {
                unk_04->v0C(unk_08, *(s32 **)&unk_0C, unk_00);
                func_088BE5E8(unk_08, unk_00);
            }
        }
    }
};
struct S {
    u8 pad_00[0x7C];
    u8 unk_7C[0x410];
    s32 unk_48C;
    s32 unk_490;
    u8 unk_494;
    u8 pad_495[3];
    s32 unk_498;
};
s32 func_08822AD0(s32, s32);
void func_088BDC78(H *, u8 *, u32);
s32 func_0894B478(s32);

void func_088BE1E0(S *arg0, s32 arg1) {
    H h0;
    H h1;
    H h2;
    H h3;
    s32 a;
    s32 b;

    s32 i = arg0->unk_48C;
    func_088BDC78(&h0, arg0->unk_7C, i);
    func_088BDC78(&h1, arg0->unk_7C, arg1);
    func_088BDC78(&h2, arg0->unk_7C, arg0->unk_48C);
    a = func_0894B478(h2.unk_08);
    h2.release();
    func_088BDC78(&h3, arg0->unk_7C, arg1);
    b = func_0894B478(h3.unk_08);
    h3.release();
    if (func_08822AD0(a + 0xC0, b + 0xC0) == 0 && func_08822AD0(a + 0xE0, b + 0xE0) == 0) {
        arg0->unk_494 = 0;
    } else {
        arg0->unk_494 = 1;
    }
    arg0->unk_498 = 0;
    arg0->unk_490 = arg1;
    h1.release();
    h0.release();
}

}
