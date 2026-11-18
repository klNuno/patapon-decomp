#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } V4;
typedef struct { u8 pad_00[0x20]; s32 unk_20; } T1;
typedef struct {
    u8 pad_00[0x140];
    V4 unk_140;
    u8 pad_150[0x10];
    V4 unk_160;
    u8 pad_170[0x10];
} T2;
typedef struct {
    u8 pad_00[0x64];
    T1 *unk_64;
    T2 *unk_68;
} T;

extern s32 func_088CEE58(T *);
extern s32 func_088CEE60(T *);
extern s32 func_088CEE68(T *);
extern f32 func_088CEE70(T *);
void func_08854CD8(V4 *, V4 *, V4 *);
void func_08854F60(f32, V4 *, V4 *);
void func_08854D10(V4 *, V4 *, V4 *);

static inline void func_inline(V4 *arg0, const V4 *arg1) {
    f32 temp0 = arg1->unk_00;
    f32 temp1 = arg1->unk_0C;
    f32 temp2 = arg1->unk_08;
    f32 temp3 = arg1->unk_04;

    arg0->unk_00 = temp3;
    arg0->unk_04 = temp2;
    arg0->unk_08 = temp1;
    arg0->unk_0C = temp0;
}

void func_088B97D4(V4 *arg0, T *arg1, s32 arg2) {
    V4 temp0, temp1, temp2, temp3;
    T2 *temp4;
    s32 temp5;
    f32 temp6;

    temp5 = arg1->unk_64[arg2].unk_20;
    temp4 = &arg1->unk_68[temp5];
    if ((u8)func_088CEE68(arg1) == 1) {
        func_inline(&temp0, func_088CEE58(arg1) == 0 ? &temp4->unk_140 : &temp4->unk_160);
        func_inline(&temp1, func_088CEE60(arg1) == 0 ? &temp4->unk_140 : &temp4->unk_160);
        temp6 = func_088CEE70(arg1);
        func_08854D10(&temp3, &temp1, &temp0);
        func_08854F60(temp6, &temp2, &temp3);
        func_08854CD8(arg0, &temp0, &temp2);
    } else {
        func_inline(arg0, func_088CEE58(arg1) == 0 ? &temp4->unk_140 : &temp4->unk_160);
    }
}
