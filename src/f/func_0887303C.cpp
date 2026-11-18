#include "common.h"

extern "C" {

struct V_0887303C {
    u8 pad_00[0x8100];
    virtual void v0();
    virtual void v1();
    virtual void v2(void *, s32, void *, s32);
};

typedef struct {
    u8 pad_00[0x151C];
    s32 unk_151C;
    u8 pad_1520[0x36B18 - 0x1520];
    s32 unk_36B18;
    u8 pad_36B1C[4];
    u8 unk_36B20[0x40];
    V_0887303C unk_36B60;
    u8 pad_3EC64[0x53CC0 - 0x3EC64];
    u8 unk_53CC0[0x55428 - 0x53CC0];
    s32 unk_55428;
} O_0887303C;

extern void *D_08AD1E28[];
extern char D_089F9278[];
extern char D_089F92BC[];

s32 *func_08868E8C(void *, s32, char *);
void func_088BC764(void *, s32, s32);
void func_0891B3C8(s32);
void func_08929F94(void *, s32);

s32 func_0887303C(O_0887303C *arg0) {
    void *g;
    s32 *a;
    s32 *b;
    s32 v;

    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    a = func_08868E8C(g, 6, D_089F9278);
    b = func_08868E8C(g, 6, D_089F92BC);
    func_088BC764(&arg0->unk_36B60, *a, *b);
    arg0->unk_36B60.v2(arg0->unk_36B20, arg0->unk_36B18, arg0->unk_53CC0, 0x20);
    func_08929F94(arg0->unk_53CC0, arg0->unk_36B18);
    func_0891B3C8(arg0->unk_55428);
    v = arg0->unk_151C + 1;
    v = v > 10 ? 0 : (v < 0 ? 10 : v);
    return v;
}

}
