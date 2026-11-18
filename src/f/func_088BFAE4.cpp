#include "common.h"

extern "C" {

class C_088BFAE4;
struct N_088BFAE4;
typedef void (C_088BFAE4::*P_088BFAE4)(N_088BFAE4 *);

class C_088BFAE4 {
public:
    s32 unk_00;
};

struct N_088BFAE4 {
    u8 pad_00[0x4];
    N_088BFAE4 *unk_04;
    u8 pad_08[0x14];
    P_088BFAE4 unk_1C;
};

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[0x4];
    u32 unk_14;
} S_088BFAE4;

N_088BFAE4 *func_088BFE2C(S_088BFAE4 *, u32);

void func_088BFAE4(S_088BFAE4 *arg0, C_088BFAE4 *arg1) {
    u32 n;
    u32 i;
    u32 c;
    N_088BFAE4 *p;

    n = arg0->unk_14;
    i = 0;
    c = 0;
    for (; i < n; i++) {
        for (p = func_088BFE2C(arg0, i); p != NULL; p = p->unk_04) {
            P_088BFAE4 f = p->unk_1C;
            if (f) {
                (arg1->*f)(p);
            }
            c++;
        }
        if (c >= arg0->unk_0C) {
            break;
        }
    }
}

}
