#include "common.h"

typedef struct S {
    u8 pad_00[0x80];
    void *unk_80;
    u8 pad_84[0x360];
    void *unk_3E4;
    u8 pad_3E8[0x8];
    s32 unk_3F0;
    s32 unk_3F4;
    s32 unk_3F8;
    u8 pad_3FC[0x10];
    s32 unk_40C;
    u8 unk_410[0x30];
    u8 unk_440[0x174];
    u8 unk_5B4;
    u8 pad_5B5[0xF];
    s32 unk_5C4;
} S;

extern u8 D_08A45924[];
extern u8 D_08A45940[];
void func_0889CBBC(void *);
void func_0889DC90(void *);
void func_089301E4(void *);
void func_0896728C(void *);

S *func_0889CAA4(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0896728C(arg0);
    arg0->unk_80 = D_08A45924;
    arg0->unk_3E4 = D_08A45940;
    arg0->unk_3F0 = arg1;
    arg0->unk_3F4 = arg2;
    arg0->unk_3F8 = arg3;
    arg0->unk_40C = 0;
    func_0889DC90(arg0->unk_410);
    func_089301E4(arg0->unk_440);
    arg0->unk_5B4 = 1;
    arg0->unk_5C4 = -1;
    func_0889CBBC(arg0);
    return arg0;
}
