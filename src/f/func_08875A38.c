#include "common.h"

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    s16 unk_24;
    s16 unk_26;
    u8 pad_28[6];
    s16 unk_2E;
    u8 pad_30[0x20];
    f32 unk_50;
    u32 unk_54;
    u32 unk_58;
    u32 unk_5C;
    u8 pad_60[0x128];
} B;

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    s32 unk_24;
    u32 unk_28;
    u32 unk_2C;
    u32 unk_30;
    u32 unk_34;
    u8 pad_38[0xCC];
} C;

typedef struct {
    char unk_00[8];
    u32 unk_08;
    u32 unk_0C;
    u32 unk_10;
    u8 pad_14[0xC];
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2C;
    u32 unk_30;
    u32 unk_34;
    u8 pad_38[8];
    char unk_40[0x20];
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x11C];
    B unk_184[3];
    C unk_61C[18];
} A;

void func_08822B3C(char *, char *);
void func_08875BAC(B *);
void func_08875B9C(A *);
extern char D_089DD3BC[];
extern char D_089DD3C4[];
extern char D_089DD3CC[];
extern char D_089DD3D4[];

void func_08875A38(A *arg0) {
    s32 i;
    u8 *q;
    u8 *p;
    func_08822B3C(arg0->unk_00, D_089DD3D4);
    arg0->unk_08 = 0x40;
    arg0->unk_0C = 0x3F4CCCCD;
    arg0->unk_10 = 3;
    arg0->unk_20 = 1;
    arg0->unk_24 = 0x144;
    arg0->unk_28 = 3;
    arg0->unk_2C = 0x188;
    arg0->unk_30 = 0x12;
    arg0->unk_34 = 0x104;
    func_08822B3C(arg0->unk_40, D_089DD3CC);
    arg0->unk_60 = 0;
    arg0->unk_64 = 3;
    i = 0;
    p = (u8 *)arg0;
    do {
        q = (u8 *)&((A *)p)->unk_184[0];
        func_08875BAC((B *)q);
        func_08822B3C(((B *)q)->unk_00, D_089DD3C4);
        ((B *)q)->unk_20 = i;
        ((B *)q)->unk_24 = 0;
        ((B *)q)->unk_26 = 0;
        ((B *)q)->unk_2E = 0;
        ((B *)q)->unk_50 = 20.0f * (f32)i;
        ((B *)q)->unk_54 = 0;
        ((B *)q)->unk_58 = 0;
        ((B *)q)->unk_5C = 0xC1700000;
        ++i;
        p += sizeof(B);
    } while (i < 3);
    i = 0;
    q = (u8 *)arg0;
    do {
        p = (u8 *)&((A *)q)->unk_61C[0];
        func_08822B3C(((C *)p)->unk_00, D_089DD3BC);
        ((C *)p)->unk_20 = -1;
        ((C *)p)->unk_24 = -1;
        ((C *)p)->unk_28 = 0;
        ((C *)p)->unk_2C = 0;
        ((C *)p)->unk_30 = 0;
        ((C *)p)->unk_34 = 0;
        ++i;
        q += sizeof(C);
    } while (i < 0x12);
    func_08875B9C(arg0);
}
