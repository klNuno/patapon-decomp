#include "common.h"

extern "C" {

typedef struct S_089C3194 {
    u8 pad_00[0x28];
    void *unk_28;
    s32 unk_2C;
    s32 unk_30;
    struct S_089C3194 *unk_34;
    s32 unk_38;
    u8 pad_3C[0xC];
    void *unk_48;
    s32 unk_4C;
    s32 unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x90];
    s32 unk_F0;
    s32 unk_F4;
    s32 unk_F8;
    s32 unk_FC;
    s32 unk_100;
    s32 unk_104;
    u8 unk_108;
    u8 pad_109[3];
    s32 unk_10C;
    s32 unk_110;
    u8 pad_114[4];
    s32 unk_118;
    s32 unk_11C;
} S_089C3194;

extern u8 D_08A48CBC[];
extern u8 D_08A48CD4[];
void func_088CE4F4(void *, s32);
void func_08865EE0(void *);

struct A_089C3194 {};

inline void func_089C3194_init(void *p, const A_089C3194 &a) { func_08865EE0(p); }

S_089C3194 *func_089C3194(S_089C3194 *arg0, s32 arg1, s32 arg2) {
    func_088CE4F4(arg0, 0);
    arg0->unk_28 = D_08A48CBC;
    arg0->unk_48 = D_08A48CD4;
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = NULL;
    arg0->unk_38 = 0;
    arg0->unk_4C = arg1;
    arg0->unk_50 = -1;
    func_089C3194_init(arg0->unk_60, A_089C3194());
    arg0->unk_F0 = 0;
    arg0->unk_F4 = 0;
    arg0->unk_F8 = 0;
    arg0->unk_FC = 0;
    arg0->unk_100 = 0;
    arg0->unk_104 = 0;
    arg0->unk_108 = 0;
    arg0->unk_10C = 0;
    arg0->unk_110 = arg2;
    arg0->unk_118 = 0;
    arg0->unk_11C = 0;
    arg0->unk_34 = arg0;
    return arg0;
}

}
