#include "common.h"

extern "C" {

void func_089ADE80(void *);
void func_089AE728(void *, void *, void *);
void func_08925F04(void *, s32, s32);
extern f32 D_089FDDA8[];
extern f32 D_089FDDB0[];
extern f32 D_089FDDB8[];
extern f32 D_089FDDBC[];
extern f32 D_089FDDC0[];
extern f32 D_089FDDC8[];
extern f32 D_089FDDD0[];
extern f32 D_089FDDD4[];
extern f32 D_089FDDD8[];
extern f32 D_089FDDE0[];

class T {
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
    s32 unk_D90;
    s32 unk_D94;
    u8 pad_D98[0x98];
    u8 unk_E30[0x1940];
    T unk_2770;
    u8 pad_27CC[0x11B4];
    u8 unk_3980[0xEC0];
    T unk_4840;
    u8 pad_489C[0x1484];
    T unk_5D20;
    u8 pad_5D7C[0x734];
    u8 unk_64B0[0x1058];
    u8 unk_7508[1];
} S;

void func_088F5588(S *arg0) {
    f32 a[3];
    f32 b[3];
    f32 c[3];
    f32 d[3];
    f32 e[3];

    func_089ADE80(arg0);
    arg0->unk_2770.unk_30(arg0->unk_E30, &arg0->unk_D90, arg0->unk_D94);
    func_089AE728(arg0->unk_3980, arg0->unk_E30, &arg0->unk_D90);
    arg0->unk_4840.unk_10(arg0->unk_E30);
    arg0->unk_5D20.unk_10(arg0->unk_E30);
    a[0] = D_089FDDA8[0];
    a[1] = D_089FDDA8[1];
    a[2] = D_089FDDB0[0];
    func_08925F04(arg0->unk_64B0, (s32)a, 3);
    b[0] = D_089FDDB0[1];
    b[1] = D_089FDDB8[0];
    b[2] = D_089FDDBC[0];
    func_08925F04(arg0->unk_64B0, (s32)b, 3);
    c[0] = D_089FDDC0[0];
    c[1] = D_089FDDC0[1];
    c[2] = D_089FDDC8[0];
    func_08925F04(arg0->unk_7508, (s32)c, 3);
    d[0] = D_089FDDC8[1];
    d[1] = D_089FDDD0[0];
    d[2] = D_089FDDD4[0];
    func_08925F04(arg0->unk_7508, (s32)d, 3);
    e[0] = D_089FDDD8[0];
    e[1] = D_089FDDD8[1];
    e[2] = D_089FDDE0[0];
    func_08925F04(arg0->unk_7508, (s32)e, 3);
}

}
