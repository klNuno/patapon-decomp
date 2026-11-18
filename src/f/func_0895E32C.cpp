#include "common.h"

extern "C" {

struct A_0895E32C {
    virtual void *v08(s32, s32);
};

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} B_0895E32C;

typedef struct {
    u8 pad_00[0x28];
    A_0895E32C *unk_28;
    u8 pad_2C[4];
    u8 unk_30[4];
    u8 unk_34[0x80];
    s32 unk_B4;
    s32 unk_B8;
    u8 pad_BC[4];
    void *unk_C0;
    u8 unk_C4[0x40];
    u8 unk_104[0x40];
    s32 unk_144;
    void *unk_148;
    s32 unk_14C;
    s32 unk_150;
    void *unk_154;
    s32 unk_158;
    void *unk_15C;
    u8 pad_160[0x1C];
    s32 unk_17C;
    s32 unk_180;
    u8 pad_184[0x10];
    u8 unk_194[0xEC];
    u8 unk_280[0xEC];
    u8 unk_36C[4];
} O_0895E32C;

s32 func_0895E290(void *, s32, void *);
s32 sceMpegRingbufferConstruct(void *, s32, void *, u32, s32 (*)(void *, s32, void *), void *);
s32 sceMpegCreate(void *, void *, u32, void *, u32, s32, s32);
s32 func_0895E508(O_0895E32C *);
s32 sceMpegRegistStream(void *, s32, s32);
void *sceMpegMallocAvcEsBuf(void *);
s32 sceMpegInitAu(void *, void *, void *);
s32 sceMpegQueryAtracEsSize(void *, s32 *, s32 *);
void func_0895C72C(void *);
void func_0895BE10(void *);
void func_0895CF0C(void *);
void func_0895C528(void *, A_0895E32C *, u32, s32, void *);
s32 func_0895BCD0(void *, A_0895E32C *, void *, u32, s32, s32, s32, void *);
void func_0895BA60(void *);

s32 func_0895E32C(O_0895E32C *arg0, B_0895E32C *arg1) {
    void *t;

    if (sceMpegRingbufferConstruct(arg0->unk_34, 0x3C0, arg0->unk_154, arg0->unk_150, func_0895E290, arg0) != 0) {
        return 0;
    }
    if (sceMpegCreate(arg0->unk_30, arg0->unk_15C, arg0->unk_158, arg0->unk_34, arg1->unk_48, 0, 0) != 0) {
        return 0;
    }
    if (func_0895E508(arg0) == 0) {
        return 0;
    }
    if ((arg0->unk_B4 = sceMpegRegistStream(arg0->unk_30, 0, 0)) == 0) {
        return 0;
    }
    if ((arg0->unk_B8 = sceMpegRegistStream(arg0->unk_30, 1, 0)) == 0) {
        return 0;
    }
    t = sceMpegMallocAvcEsBuf(arg0->unk_30);
    arg0->unk_C0 = t;
    if (t == NULL) {
        return 0;
    }
    if (sceMpegInitAu(arg0->unk_30, t, arg0->unk_C4) != 0) {
        return 0;
    }
    if (sceMpegQueryAtracEsSize(arg0->unk_30, &arg0->unk_144, &arg0->unk_14C) != 0) {
        return 0;
    }
    t = arg0->unk_28->v08(arg0->unk_144, 0x40);
    arg0->unk_148 = t;
    if (t == NULL) {
        return 0;
    }
    if (sceMpegInitAu(arg0->unk_30, t, arg0->unk_104) != 0) {
        return 0;
    }
    func_0895C72C(arg0->unk_194);
    func_0895BE10(arg0->unk_280);
    func_0895CF0C(arg0->unk_36C);
    func_0895C528(arg0->unk_194, arg0->unk_28, arg0->unk_14C, 4, arg0->unk_36C);
    func_0895BCD0(arg0->unk_280, arg0->unk_28, arg0->unk_30, 4, arg0->unk_17C, arg0->unk_180, arg1->unk_48, arg0->unk_36C);
    func_0895BA60(arg0->unk_194);
    func_0895BA60(arg0->unk_280);
    return 1;
}

}
