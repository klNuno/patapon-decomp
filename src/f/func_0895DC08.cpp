#include "common.h"

extern "C" {

struct A0895DC08 {
    virtual void *v0(s32, s32);
};

typedef struct {
    u8 pad_00[0x28];
    A0895DC08 *unk_28;
    u8 pad_2C[0x150 - 0x2C];
    s32 unk_150;
    void *unk_154;
    s32 unk_158;
    void *unk_15C;
    u8 pad_160[0xC];
    u8 unk_16C;
    u8 pad_16D[0x194 - 0x16D];
    u8 unk_194[0x280 - 0x194];
    u8 unk_280[0x36C - 0x280];
    u8 unk_36C[0x3E4 - 0x36C];
    u8 unk_3E4[0x430 - 0x3E4];
    s32 unk_430;
} T0895DC08;

s32 sceMpegRingbufferQueryMemSize(s32);
s32 sceMpegQueryMemSize(s32);
void func_0895CD38(void *, s32, void *, void *);
void func_0881F5C0(void *, s32, s32);

s32 func_0895DC08(T0895DC08 *arg0) {
    arg0->unk_150 = sceMpegRingbufferQueryMemSize(0x3C0);
    arg0->unk_158 = sceMpegQueryMemSize(0);
    if ((arg0->unk_154 = arg0->unk_28->v0(arg0->unk_150, 4)) == NULL) {
        return 0;
    }
    if ((arg0->unk_15C = arg0->unk_28->v0(arg0->unk_158, 4)) == NULL) {
        return 0;
    }
    func_0895CD38(arg0->unk_36C, 4, arg0->unk_280, arg0->unk_194);
    arg0->unk_16C = 1;
    func_0881F5C0(arg0->unk_3E4, 0, 0x4C);
    arg0->unk_430 = 0;
    return 1;
}

}
