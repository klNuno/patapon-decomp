#include "common.h"

typedef struct {
    void *unk_00;
} Sub_08917164;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0xA0 - 0x10];
    u8 unk_A0[0x130 - 0xA0];
    u8 unk_130[0x1C0 - 0x130];
    u8 unk_1C0[0x250 - 0x1C0];
    u8 unk_250[0x2E0 - 0x250];
    u8 unk_2E0[0x334 - 0x2E0];
    u8 unk_334[0x1064 - 0x334];
    Sub_08917164 unk_1064;
    u8 pad_1068[0x1080 - 0x1068];
    u8 unk_1080[0x12160 - 0x1080];
    u8 unk_12160[0x12220 - 0x12160];
    u8 unk_12220[0x24438 - 0x12220];
    u8 unk_24438[0x34E80 - 0x24438];
    u8 unk_34E80[0x4];
} S_08917164;

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_089136C0(void *, s32);
void func_08914E34(void *, s32);
void func_089778AC(void *, s32);
void func_089D0D04(void *, s32);
void func_089D21B8(void *, s32);
void func_089D50D0(void *, s32);
extern u8 D_08A46884[];
extern u8 D_08A46AB8[];

S_08917164 *func_08917164(S_08917164 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_089136C0(arg0->unk_34E80, -1);
        func_089D0D04(arg0->unk_24438, -1);
        func_089D21B8(arg0->unk_12220, -1);
        func_089D50D0(arg0->unk_12160, -1);
        func_089778AC(arg0->unk_1080, -1);
        if (&arg0->unk_1064 != NULL) {
            arg0->unk_1064.unk_00 = D_08A46AB8;
            if (&arg0->unk_1064 != NULL) {
                arg0->unk_1064.unk_00 = D_08A46884;
            }
        }
        func_08914E34(arg0->unk_334, -1);
        func_089136C0(arg0->unk_2E0, -1);
        func_08865F78(arg0->unk_250, -1);
        func_08865F78(arg0->unk_1C0, -1);
        func_08865F78(arg0->unk_130, -1);
        func_08865F78(arg0->unk_A0, -1);
        func_08865F78(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
