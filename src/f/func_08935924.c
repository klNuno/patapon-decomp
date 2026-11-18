#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    char unk_20[0x20];
    u16 unk_40;
    u16 unk_42;
    u8 pad_44[8];
} E;

typedef struct { u8 pad_00[0xC]; u32 unk_0C; } List;
typedef struct { u8 pad_00[0x514]; List unk_514; } T;
typedef struct { f32 unk_00; f32 unk_04; } U;

typedef struct { s32 unk_00; } V;

void func_08822B3C(char *, const char *);
void func_0892C000(char *arg0, s8 arg1);
V func_08935358(List *);
void func_08935A10(List *, s32, E *);

void func_08935924(T *arg0, s32 arg1, s32 arg2, s32 arg3, const char *arg4, f32 arg5, U *arg6, s32 arg7) {
    V temp;
    E temp2;

    if (arg0->unk_514.unk_0C < 0x10U) {
        if (arg2 != 0) {
            func_0892C000((char *)arg2, 0);
            temp2.unk_00 = arg1;
            temp2.unk_04 = arg2;
            temp2.unk_08 = arg5;
            temp2.unk_10 = arg3;
            temp2.unk_40 = 0;
            temp2.unk_42 = 0;
            temp2.unk_0C = 0.0f;
            temp2.unk_18 = arg6->unk_00;
            temp2.unk_1C = arg6->unk_04;
            temp2.unk_14 = arg7;
            func_08822B3C(temp2.unk_20, arg4);
            temp = func_08935358(&arg0->unk_514);
            func_08935A10(&arg0->unk_514, temp.unk_00, &temp2);
        }
    }
}
