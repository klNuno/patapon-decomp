#include "common.h"

typedef struct {
    u8 pad_00[0x30];
} E;

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    s16 unk_24;
    s16 unk_26;
    s16 unk_28;
    s16 unk_2A;
    s16 unk_2C;
    s16 unk_2E;
    s32 unk_30;
    s16 unk_34;
    u8 pad_36[0x1A];
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    char unk_60[0x20];
    s32 unk_80;
    u8 unk_84[0x24];
    s32 unk_A8;
    u8 pad_AC[0x28];
    u8 unk_D4[0x24];
    E unk_F8[3];
} T;

void func_08822B3C(char *, char *);
s32 func_0888AFAC(char *);
extern char D_089DD3DC[];
extern char D_089DD3E0[];
void func_088763F8(void *);
void func_088763E8(void *);
void func_08876338(void *);

T *func_0888C420(T *arg0) {
    E *p;

    arg0->unk_80 = 0;
    arg0->unk_60[0] = 0;
    arg0->unk_A8 = -1;
    func_088763F8(arg0->unk_D4);
    p = arg0->unk_F8;
    do {
        func_088763E8(p);
        p++;
    } while (p < arg0->unk_F8 + 3);
    func_08876338(arg0->unk_84);
    func_08822B3C(arg0->unk_00, D_089DD3E0);
    arg0->unk_20 = -1;
    arg0->unk_24 = 3;
    arg0->unk_26 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2A = 1;
    arg0->unk_2C = 0;
    arg0->unk_2E = 1;
    arg0->unk_30 = 0x19;
    arg0->unk_50 = 0;
    arg0->unk_54 = 0;
    arg0->unk_58 = 0;
    arg0->unk_5C = 0;
    arg0->unk_34 = 0;
    arg0->unk_80 = func_0888AFAC(D_089DD3DC);
    func_08822B3C(arg0->unk_60, D_089DD3DC);
    return arg0;
}
