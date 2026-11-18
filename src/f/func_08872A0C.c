#include "common.h"

void func_08822B3C(char *, char *);
s32 func_0888AFAC(char *);
extern char D_089DD3BC[], D_089DD3C4[], D_089DD3CC[], D_089DD3D4[], D_089DD3DC[], D_089DD3E0[];

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    s16 unk_24, unk_26, unk_28, unk_2A, unk_2C, unk_2E;
    s32 unk_30;
    s16 unk_34;
    u8 pad_36[0x1A];
    f32 unk_50, unk_54, unk_58, unk_5C;
    char unk_60[0x20];
    s32 unk_80;
    u8 pad_84[0x104];
} T;

typedef struct {
    char unk_00[0x20];
    s32 unk_20, unk_24, unk_28, unk_2C, unk_30, unk_34;
    u8 pad_38[0xCC];
} U;

typedef struct {
    char unk_00[8];
    s32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    u8 pad_14[0xC];
    s32 unk_20, unk_24, unk_28, unk_2C, unk_30, unk_34;
    u8 pad_38[8];
    char unk_40[0x20];
    s32 unk_60, unk_64;
    u8 pad_68[0x11C];
    T unk_184[3];
    U unk_61C[18];
} A;

void func_08872A0C(void *arg0, s32 arg1) {
    U *temp2;
    s32 i, j;
    T *temp;
    char *p;
    f32 f;
    A *a = arg0;

    func_08822B3C(a->unk_00, D_089DD3D4);
    a->unk_08 = 0x40;
    a->unk_0C = 0.8f;
    a->unk_10 = 3;
    a->unk_20 = 1;
    a->unk_24 = 0x144;
    a->unk_28 = 3;
    a->unk_2C = 0x188;
    a->unk_30 = 18;
    a->unk_34 = 0x104;
    func_08822B3C(a->unk_40, D_089DD3CC);
    a->unk_60 = 0;
    a->unk_64 = 3;
    i = 0;
    p = arg0;
    do {
        temp = &((A *)p)->unk_184[0];
        func_08822B3C(temp->unk_00, D_089DD3E0);
        temp->unk_20 = -1;
        temp->unk_24 = 3;
        temp->unk_26 = 0;
        temp->unk_28 = 0;
        temp->unk_2A = 1;
        temp->unk_2C = 0;
        temp->unk_2E = 1;
        temp->unk_30 = 25;
        temp->unk_50 = 0.0f;
        temp->unk_54 = 0.0f;
        temp->unk_58 = 0.0f;
        temp->unk_5C = 0.0f;
        temp->unk_34 = 0;
        temp->unk_80 = func_0888AFAC(D_089DD3DC);
        func_08822B3C(temp->unk_60, D_089DD3DC);
        func_08822B3C(temp->unk_00, D_089DD3C4);
        temp->unk_20 = i;
        temp->unk_24 = 0;
        temp->unk_26 = 0;
        temp->unk_2E = 0;
        f = 20.0f * (f32)i;
        i++;
        p += sizeof(T);
        temp->unk_50 = f;
        temp->unk_54 = 0.0f;
        temp->unk_58 = 0.0f;
        temp->unk_5C = -15.0f;
    } while (i < 3);
    j = 0;
    p = arg0;
    do {
        temp2 = &((A *)p)->unk_61C[0];
        func_08822B3C(temp2->unk_00, D_089DD3BC);
        temp2->unk_20 = -1;
        temp2->unk_24 = -1;
        temp2->unk_28 = 0;
        temp2->unk_2C = 0;
        j++;
        temp2->unk_30 = 0;
        temp2->unk_34 = 0;
        p += sizeof(U);
    } while (j < 18);
    if (arg1 != 0) {
        a->unk_184[0].unk_26 = 0;
        a->unk_184[1].unk_26 = 0;
        a->unk_184[2].unk_26 = 0;
    }
}
