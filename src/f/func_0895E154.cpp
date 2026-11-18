#include "common.h"

extern "C" {

class Alloc_0895E154 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[0x8];
    Alloc_0895E154 *unk_28;
    s32 unk_2C;
    u8 unk_30[4];
    u8 unk_34[0xB4 - 0x34];
    void *unk_B4[3];
    void *unk_C0;
    u8 pad_C4[0x144 - 0xC4];
    s32 unk_144;
    void *unk_148;
    s32 unk_14C;
    u8 pad_150[0x160 - 0x150];
    s32 unk_160;
    s32 unk_164;
    s32 unk_168;
    u8 unk_16C;
    u8 pad_16D[3];
    s32 unk_170;
    u8 unk_174;
    u8 pad_175[3];
    s32 unk_178;
    s32 unk_17C;
    s32 unk_180;
    u8 pad_184[0x194 - 0x184];
    u8 unk_194[0xEC];
    u8 unk_280[0xEC];
} Obj_0895E154;

void func_0895BB40(Obj_0895E154 *);
void func_0895BB48(Obj_0895E154 *);
s32 func_0886095C(void);
void func_0886455C(s32, s32, s32);
void func_0895C72C(u8 *);
void func_0895BE10(u8 *);
void sceMpegFreeAvcEsBuf(u8 *, void *);
void sceMpegUnRegistStream(u8 *, void *);
void sceMpegDelete(u8 *);
void sceMpegRingbufferDestruct(u8 *);

void func_0895E154(Obj_0895E154 *arg0) {
    s32 i;

    func_0895BB40(arg0);
    arg0->unk_18 = 0;
    func_0895BB48(arg0);
    arg0->unk_1C = 0;
    arg0->unk_160 = 0;
    arg0->unk_164 = 0;
    arg0->unk_168 = 0;
    arg0->unk_16C = 1;
    arg0->unk_170 = 1;
    arg0->unk_174 = 0;
    arg0->unk_17C = 0;
    arg0->unk_180 = 0;
    if (arg0->unk_2C >= 0) {
        func_0886455C(func_0886095C(), 0, *(s32 *)&arg0->unk_2C);
        arg0->unk_2C = -1;
        func_0895C72C(arg0->unk_194);
        func_0895BE10(arg0->unk_280);
        if (arg0->unk_148 != NULL) {
            arg0->unk_28->unk_10(arg0->unk_148);
            arg0->unk_148 = NULL;
        }
        arg0->unk_14C = 0;
        arg0->unk_144 = 0;
        if (arg0->unk_C0 != NULL) {
            sceMpegFreeAvcEsBuf(arg0->unk_30, arg0->unk_C0);
            arg0->unk_C0 = NULL;
        }
        for (i = 0; i < 3; i++) {
            if (arg0->unk_B4[i] != NULL) {
                sceMpegUnRegistStream(arg0->unk_30, arg0->unk_B4[i]);
                arg0->unk_B4[i] = NULL;
            }
        }
        sceMpegDelete(arg0->unk_30);
        sceMpegRingbufferDestruct(arg0->unk_34);
        func_0895BB40(arg0);
        arg0->unk_178 = 0;
        func_0895BB48(arg0);
    }
}

}
