#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0xC];
    u8 unk_20[0x80];
    u8 unk_A0[0x100];
    u8 unk_1A0[0x28];
    u8 unk_1C8[0x28];
    u8 unk_1F0[0x30];
} Sub_08926B24;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 unk_24;
    u8 pad_25[3];
    s32 unk_28;
    u8 pad_2C[4];
    Sub_08926B24 unk_30;
    s32 unk_250;
    s32 *unk_254;
} S_08926B24;

void func_0880406C(void *, void *, void *, s32, s32);
void func_0885C520(Sub_08926B24 *);
void func_08927480(Sub_08926B24 *);
void func_08927654(void *);
void func_08927694(void *);
void func_089277E8(void *);
void func_089278C8(S_08926B24 *);
void func_08924BBC(void);
void func_08924CC0(void *, s32);
void func_089277C4(void);
void func_08927754(void *, s32);
extern s32 D_08A46EC8[];
extern s32 D_08A46EF0[];

S_08926B24 *func_08926B24(S_08926B24 *arg0) {
    Sub_08926B24 *s;

    arg0->unk_254 = D_08A46EC8;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_14 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_18 = -1;
    arg0->unk_1C = -1.0f;
    arg0->unk_20 = -1.0f;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    s = &arg0->unk_30;
    func_0885C520(s);
    s->unk_00 = D_08A46EF0;
    func_089277E8(&s->unk_10);
    func_0880406C(s->unk_20, func_08924BBC, func_08924CC0, 0x10, 8);
    func_0880406C(s->unk_A0, func_089277C4, func_08927754, 0x20, 8);
    func_08927694(s->unk_1A0);
    func_08927694(s->unk_1C8);
    func_08927654(s->unk_1F0);
    func_08927480(s);
    s->unk_10 = 8;
    arg0->unk_250 = 0;
    func_089278C8(arg0);
    return arg0;
}
