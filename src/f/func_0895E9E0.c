#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[0x4];
    s32 unk_24;
    u8 pad_28[0x8];
    u8 unk_30[0x140];
    s32 unk_170;
    u8 unk_174;
    u8 pad_175[0x1F];
    u8 unk_194[0xEC];
    u8 unk_280[0xEC];
    u8 unk_36C[0x4];
} Obj;

void func_0895D1BC(void *, s32);
void func_0895D17C(void *, s32);
void func_0895BAB4(void *);
void func_0895BAC0(void *);
void func_0895BF74(void *);
void func_0895C8D8(void *);
void func_0895CF0C(void *);
s32 sceMpegFlushAllStream(void *);

void func_0895E9E0(Obj *arg0) {
    arg0->unk_1C = 0;
    arg0->unk_18 = 0;
    func_0895D1BC(arg0->unk_36C, 0);
    func_0895D17C(arg0->unk_36C, 0xB);
    func_0895BAB4(arg0->unk_194);
    func_0895BAB4(arg0->unk_280);
    func_0895BAC0(arg0->unk_194);
    func_0895BAC0(arg0->unk_280);
    func_0895BF74(arg0->unk_280);
    func_0895C8D8(arg0->unk_194);
    func_0895CF0C(arg0->unk_36C);
    if (arg0->unk_174 != 0) {
        sceMpegFlushAllStream(arg0->unk_30);
        arg0->unk_174 = 0;
        arg0->unk_170 = 1;
        arg0->unk_24 = 0;
    }
}
