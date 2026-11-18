#include "common.h"

extern "C" {

class V_0897CFC4 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual s32 v30(s32);
};

class W_0897CFC4 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void v48(s32);
};

typedef struct {
    u8 pad_00[0xE8];
    V_0897CFC4 *unk_E8;
} N_0897CFC4;

typedef struct {
    u8 pad_00[0xEA8D0];
    u8 unk_EA8D0[0x10];
} G_0897CFC4;

typedef struct {
    u8 pad_00[0x918];
    u8 unk_918;
    u8 pad_919[0x930 - 0x919];
    f32 unk_930;
    f32 unk_934;
    f32 unk_938;
    f32 unk_93C;
    f32 unk_940;
    f32 unk_944;
    f32 unk_948;
    f32 unk_94C;
    u8 pad_950[0x96C - 0x950];
    W_0897CFC4 unk_96C;
    u8 pad_970[0x9E0 - 0x970];
    f32 unk_9E0;
    f32 unk_9E4;
    u8 pad_9E8[0xA00 - 0x9E8];
    s32 unk_A00;
    s32 unk_A04;
    u8 pad_A08[0x8];
    s32 unk_A10;
    s32 unk_A14;
} S_0897CFC4;

extern G_0897CFC4 *D_08AD1E28[];
extern f32 D_08A059F0[];
extern f32 D_08A059F4[];
extern f32 D_08A059F8[];
extern f32 D_08A059FC[];
extern f32 D_08A05A00[];
extern f32 D_08A05A08[];
extern f32 D_08A05A0C[];
extern s32 D_08A05A30[];
extern char D_089ECDF8[];
extern char D_089ECE00[];
extern char D_08A05A34[];
extern char D_08A05A44[];
extern char D_08A05A58[];
extern char D_08A05A74[];
extern char D_08A05A88[];
extern char D_08A05A98[];

void func_088F0DD8(S_0897CFC4 *);
void func_088F0EA4(S_0897CFC4 *, char *, char *);
N_0897CFC4 *func_0896CE18(void *, char *, s32, s32);

void func_0897CFC4(S_0897CFC4 *arg0) {
    s32 r;

    func_088F0DD8(arg0);
    arg0->unk_930 = D_08A059F0[0];
    arg0->unk_934 = D_08A059F4[0];
    arg0->unk_938 = D_08A059F8[0];
    arg0->unk_93C = D_08A059FC[0];
    arg0->unk_940 = D_08A05A00[0];
    arg0->unk_944 = D_08A05A00[1];
    arg0->unk_948 = D_08A05A08[0];
    arg0->unk_94C = D_08A05A0C[0];
    func_088F0EA4(arg0, D_089ECE00, D_089ECDF8);
    arg0->unk_A00 = 0;
    arg0->unk_A04 = 0;
    arg0->unk_A10 = 0;
    arg0->unk_A14 = 0;
    arg0->unk_918 = 1;
    arg0->unk_9E0 = 0.0f;
    arg0->unk_9E4 = -13.0f;
    r = func_0896CE18(func_0896CE18(func_0896CE18(func_0896CE18(func_0896CE18(func_0896CE18((D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_EA8D0, D_08A05A34, 0, 1), D_08A05A44, 0, 1), D_08A05A58, 0, 1), D_08A05A74, 0, 1), D_08A05A88, 0, 1), D_08A05A98, 0, 1)->unk_E8->v30(D_08A05A30[0]);
    arg0->unk_96C.v0C();
    arg0->unk_96C.v48(r);
}

}
