#include "common.h"

typedef struct { f32 unk_00[4]; } V4;
typedef struct {
    V4 unk_00;
    u8 pad_10[0x20];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[8];
} M_08888E54;
typedef struct { u8 pad_00[0x670]; u8 unk_670[1]; } T;

void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);
void func_088B5F14(void *, M_08888E54 *);
void *func_088B60A8(void *);
void func_08854F60(f32, V4 *, V4 *);

void func_08888F30(T *arg0, s32 arg1) {
    M_08888E54 temp;
    V4 temp2;
    void *temp3 = func_088B60A8(arg0->unk_670);
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    V4 *temp8;

    func_08866B54(&temp, 0, func_08866B80(temp3, 0));
    func_08866B54(&temp, 1, func_08866B80(temp3, 1));
    func_08866B54(&temp, 2, func_08866B80(temp3, 2));
    func_08866B54(&temp, 3, func_08866B80(temp3, 3));
    temp8 = &temp.unk_00;
    func_08854F60((f32)(arg1 != 0 ? -1 : 1), &temp2, temp8);
    temp5 = temp2.unk_00[0];
    temp6 = temp2.unk_00[1];
    temp4 = temp2.unk_00[2];
    temp.unk_00.unk_00[0] = temp5;
    temp7 = temp2.unk_00[3];
    temp.unk_00.unk_00[1] = temp6;
    temp.unk_00.unk_00[2] = temp4;
    temp.unk_00.unk_00[3] = temp7;
    func_088B5F14(arg0->unk_670, &temp);
}
