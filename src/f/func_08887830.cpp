#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[0x3];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    void *unk_18;
    u8 pad_1C[0x4];
    u8 unk_20[0xE80];
    u8 unk_EA0[0x114];
    u8 unk_FB4[0x14C];
    s32 unk_1100;
    s32 unk_1104;
    f32 unk_1108;
    u8 unk_110C;
} S08887830;

s32 func_08858B9C(void);
s32 func_08858BCC(void);
void func_0887FCCC(void *, s32);
void func_08885298(void *);
struct E {};
inline void func_1(void *p, const E &) { func_08885298(p); }
void func_08885768(void *);
void func_08885C28(void *, void *);
extern char D_089FA1BC[];
extern u8 D_08A44AD8[];

S08887830 *func_08887830(S08887830 *arg0) {
    s32 temp;

    temp = func_08858BCC();
    arg0->unk_18 = D_08A44AD8;
    arg0->unk_14 = 0;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_10 = 0;
    arg0->unk_0C = temp;
    func_0887FCCC(arg0->unk_20, func_08858B9C());
    func_1(arg0->unk_EA0, E());
    func_08885768(arg0->unk_FB4);
    arg0->unk_1100 = 0;
    arg0->unk_1104 = 0;
    arg0->unk_1108 = 1.0f;
    arg0->unk_110C = 0;
    func_08885C28(arg0->unk_FB4, D_089FA1BC);
    return arg0;
}

}
