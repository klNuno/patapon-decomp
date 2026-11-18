#include "common.h"

extern "C" {

class V {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30(void *, void *, s32);
};

typedef struct {
    u8 pad_00[0xD90];
    u8 unk_D90[4];
    s32 unk_D94;
    u8 pad_D98[0x98];
    u8 unk_E30[0x1940];
    V unk_2770;
    u8 pad_27CC[0x11C4];
    V unk_3990;
    u8 pad_39EC[0x6F4];
    V unk_40E0;
    u8 pad_413C[0x1E4];
    V unk_4320;
    u8 pad_437C[0x794];
    u8 unk_4B10[0x1058];
    u8 unk_5B68[4];
} S;

void func_089ADE80(S *);
void func_08925F04(void *, s32, s32);
extern f32 D_089FDD00[];
extern f32 D_089FDD08[];
extern f32 D_089FDD0C[];
extern f32 D_089FDD10[];
extern f32 D_089FDD18[];
extern f32 D_089FDD20[];
extern f32 D_089FDD24[];
extern f32 D_089FDD28[];
extern f32 D_089FDD30[];
extern f32 D_089FDD38[];
extern f32 D_089FDD3C[];

void func_088F49A4(S *arg0) {
    f32 a[3];
    f32 b[3];
    f32 c[3];
    f32 d[3];
    f32 e[3];

    func_089ADE80(arg0);
    arg0->unk_2770.unk_30(arg0->unk_E30, arg0->unk_D90, arg0->unk_D94);
    arg0->unk_3990.unk_10(arg0->unk_E30);
    arg0->unk_4320.unk_10(arg0->unk_E30);
    arg0->unk_40E0.unk_10(arg0->unk_E30);
    a[0] = D_089FDD00[1];
    a[1] = D_089FDD08[0];
    a[2] = D_089FDD0C[0];
    func_08925F04(arg0->unk_4B10, (s32)a, 3);
    b[0] = D_089FDD10[0];
    b[1] = D_089FDD10[1];
    b[2] = D_089FDD18[0];
    func_08925F04(arg0->unk_4B10, (s32)b, 3);
    c[0] = D_089FDD18[1];
    c[1] = D_089FDD20[0];
    c[2] = D_089FDD24[0];
    func_08925F04(arg0->unk_4B10, (s32)c, 3);
    d[0] = D_089FDD28[0];
    d[1] = D_089FDD28[1];
    d[2] = D_089FDD30[0];
    func_08925F04(arg0->unk_5B68, (s32)d, 3);
    e[0] = D_089FDD30[1];
    e[1] = D_089FDD38[0];
    e[2] = D_089FDD3C[0];
    func_08925F04(arg0->unk_5B68, (s32)e, 3);
}

}
