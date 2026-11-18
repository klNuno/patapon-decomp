#include "common.h"

extern "C" {

class A_08915278 {
public:
    virtual void v0();
    virtual void v1(s32, s32);
};

typedef struct {
    u8 pad_00[0x1498];
    s32 *unk_1498;
} G2_08915278;

typedef struct {
    u8 pad_00[0x42820];
    G2_08915278 *unk_42820;
} G_08915278;

typedef struct {
    u8 pad_00[0x858];
    u8 unk_858;
    u8 pad_859[0x864 - 0x859];
    s32 unk_864;
    u8 pad_868[0x898 - 0x868];
    A_08915278 *unk_898;
} T_08915278;

extern G_08915278 *D_08AD1E28[];

void func_088773E0(G2_08915278 *);
s32 func_088A88C0(void);
void func_088A89DC(s32);
s32 func_08913DFC(s32);
s32 func_0891558C(void);

void func_08915278(T_08915278 *arg0) {
    s32 temp;
    G_08915278 *g;
    G2_08915278 *g2;

    arg0->unk_858 = 0;
    temp = func_0891558C();
    if (arg0->unk_898 != NULL) {
        arg0->unk_898->v1(arg0->unk_864, func_08913DFC(temp));
    }
    if (func_08913DFC(temp) == 0) {
        if (arg0->unk_864 == 2) {
            g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
            g2 = g->unk_42820;
            func_088A89DC(func_088A88C0());
            func_088773E0(g2);
        }
    } else if (arg0->unk_864 == 1) {
        g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
        --*g->unk_42820->unk_1498;
    }
    arg0->unk_864 = 0;
}

}
