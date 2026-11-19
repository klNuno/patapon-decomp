#include "common.h"

extern "C" {

void func_088CE4F4(void *, s32);
void func_08865EE0(void *);
extern u8 D_08A48DCC[];
extern u8 D_08A48DE4[];

typedef struct S_089CA388 {
    u8 pad_00[0x28];
    void *unk_28;
    s32 unk_2C;
    s32 unk_30;
    struct S_089CA388 *unk_34;
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
} S_089CA388;

struct E {};

static inline void func_089CA388_1(void *arg0, const E &) {
    func_088CE4F4(arg0, 0);
}

S_089CA388 *func_089CA388(S_089CA388 *arg0, s32 arg1) {
    func_089CA388_1(arg0, E());
    arg0->unk_28 = D_08A48DCC;
    arg0->unk_48 = D_08A48DE4;
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = NULL;
    arg0->unk_38 = 0;
    arg0->unk_4C = arg1;
    arg0->unk_50 = 0;
    func_08865EE0(arg0->unk_60);
    arg0->unk_F0 = 0;
    arg0->unk_F4 = 0;
    arg0->unk_F8 = 0;
    arg0->unk_FC = 0;
    arg0->unk_100 = 0;
    arg0->unk_104 = 0;
    arg0->unk_34 = arg0;
    return arg0;
}

}
