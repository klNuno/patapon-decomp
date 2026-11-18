#include "common.h"

typedef struct {
    u8 pad_00[0x131800];
} Buf_0895E730;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
    u8 pad_20[0xC];
    s32 unk_2C;
    u8 unk_30[0x130];
    s32 unk_160;
    s32 unk_164;
    s32 unk_168;
    u8 pad_16C[0x28];
    u8 unk_194[0x29C];
    u32 unk_430;
} Obj_0895E730;

extern s32 func_0886095C(void);
s32 func_08863E94(s32, s32);
void func_08864658(s32, s32, u32);
void func_088646D4(s32, s32, s32, s32);
void func_0895C8D8(void *);
s32 sceMpegFlushAllStream(void *);

void func_0895E730(Obj_0895E730 *arg0, s32 arg1) {
    u32 size;
    u32 n;

    if (arg1 == 0) {
        if (func_08863E94(func_0886095C(), arg0->unk_2C) == 0) {
            size = arg0->unk_164 - arg0->unk_160;
            func_08864658(func_0886095C(), arg0->unk_2C, size);
            sceMpegFlushAllStream(arg0->unk_30);
            func_0895C8D8(arg0->unk_194);
            arg0->unk_430 = 0x263;
            arg0->unk_168 = (s32)((u8 *)arg0->unk_160 + arg0->unk_430 * 0x800);
            n = size >> 11;
            if (n < arg0->unk_430) {
                arg0->unk_430 = n;
            }
            arg0->unk_1C = 3;
        }
    } else {
        func_088646D4(func_0886095C(), 0, arg0->unk_2C, arg0->unk_160);
        arg0->unk_1C = 2;
    }
}