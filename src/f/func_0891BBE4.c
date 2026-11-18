#include "common.h"

typedef struct {
    f32 unk_00[2];
} Unk;

typedef struct {
    Unk unk_00;
    Unk unk_08;
} Unk1;

typedef struct {
    u8 pad_00[0x1020];
    u8 unk_1020[4];
} Unk2;

typedef struct {
    u8 pad_00[0x36B10];
    Unk2 *unk_36B10;
    u8 pad_36B14[0x4C];
    u8 unk_36B60[4];
} Unk3;

typedef struct {
    u8 pad_00[0x8C];
    Unk3 *unk_8C;
} Unk4;

extern Unk D_08A00AF0[];
extern Unk D_08A00AF8[];
extern Unk D_08A00B00[];
extern Unk D_08A00B08[];
void *func_088BCF78(void *);
void func_0891E074(char *arg0, s8 arg1, char *arg2);

s32 func_0891BBE4(Unk4 *arg0)
{
    Unk1 a;
    Unk1 b;

    a.unk_00 = D_08A00AF0[0];
    a.unk_08 = D_08A00AF8[0];
    b.unk_00 = D_08A00B00[0];
    b.unk_08 = D_08A00B08[0];
    func_0891E074(func_088BCF78(arg0->unk_8C->unk_36B60), 1, (char *)&a);
    func_0891E074((char *)arg0->unk_8C->unk_36B10->unk_1020, 1, (char *)&b);
    return 1;
}
