#include "common.h"

extern "C" {

class C_08894234 {
public:
    u8 pad_00[0x78];
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[0x10];
    virtual void vf_08();
    virtual void vf_0C();
};

typedef struct {
    u8 pad_00[0x118];
    s32 unk_118;
    u8 pad_11C[0x378 - 0x11C];
    u8 unk_378[0x92E4 - 0x378];
    s32 unk_92E4;
} S_08894234;

void func_088812A4(C_08894234 *, s32);
void func_08882530(s32, C_08894234 *);
s32 func_08895CA0(s32);
void func_0892ABA4(s32, s32, s32);
s32 func_0893D3C4(void *);
s32 func_0893D40C(void *);
C_08894234 *func_08965A10(s32, s32);
extern const s32 D_089DE620[];
extern const s32 D_089DE684[];

s32 func_08894234(S_08894234 *arg0) {
    s32 h;
    s32 j;
    s32 i;
    s32 k;
    C_08894234 *p;

    h = arg0->unk_118;
    j = 0;
    for (i = 0; i < 2; i++) {
        switch (arg0->unk_92E4) {
        case 0:
            k = j + 3;
            break;
        case 1:
            k = j + 10;
            break;
        default:
            k = 14;
            break;
        }
        p = func_08965A10(h, j);
        if (p != NULL) {
            p->vf_0C();
            func_08882530(func_0893D3C4(arg0->unk_378), p);
            func_088812A4(p, 1);
            p->unk_78 = D_089DE620[k];
            p->unk_7C = D_089DE684[k];
        }
        j = func_08895CA0(j);
    }
    func_0892ABA4(func_0893D40C(arg0->unk_378), arg0->unk_92E4, 1);
    return 1;
}

}
