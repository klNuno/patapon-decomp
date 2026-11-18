#include "common.h"

extern "C" {

class B {
public:
    u8 pad_00[0x28];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32);
};

class C : public B {
public:
    s32 unk_2C;
    s32 unk_30;
    u8 pad_34[0xC];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    s32 unk_50;
    s32 unk_54;
};

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} N;

s32 func_088586E8(void);
s32 func_08868D9C(void *, s32, s32, s32);
s32 func_0887744C(void *, char *, s32);
void func_088C3688(void *);
void func_089320AC(C *);
N *func_0896CE18(void *, char *, s32, s32);
void *func_089B5470(s32, s32);
extern s32 D_08A02D14[];
extern char D_08A02D24[];
extern char D_08A02D34[];
extern char D_08A02D48[];
extern char D_08A02D64[];
extern char D_08A02D70[];
extern u8 *D_08AD1E28[];
extern void *D_08AD1F14[];

void func_08931B9C(C *arg0, s32 arg1) {
    u8 *g;
    u32 m;

    arg0->unk_40 = 5.0f;
    arg0->unk_44 = 5.0f;
    arg0->unk_48 = 5.0f;
    arg0->unk_4C = 5.0f;
    func_088C3688(func_089B5470(func_088586E8(), arg0->unk_50));
    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    arg0->unk_2C = func_08868D9C(g, 1, D_08A02D14[0], 1);
    arg0->unk_30 = func_0896CE18(func_0896CE18(func_0896CE18(func_0896CE18(&g[0xEA8D0], D_08A02D24, 0, 1), D_08A02D34, 0, 1), D_08A02D48, 0, 1), D_08A02D64, 0, 1)->unk_108;
    m = 0x7FFFFFFF;
    arg0->unk_50 = arg1;
    if (arg1 == 1) {
        m = 0x80000000;
    }
    arg0->v3(m);
    arg0->unk_54 = func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_08A02D70, 0xF);
    func_089320AC(arg0);
}

}
