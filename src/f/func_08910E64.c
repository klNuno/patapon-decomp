#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
    void *unk_10;
} A;
typedef struct {
    u8 pad_00[0x1C20];
    u8 unk_1C20[0x1680];
    u8 unk_32A0[0x16D160];
    A *unk_170400;
    u8 pad_170404[9];
    u8 unk_17040D;
    u8 pad_17040E[2];
    s32 unk_170410;
} B;

extern u8 D_08A001C4[];
void func_0890B8FC(void *);
void func_0890B8C0(void *, f32);
u32 func_088AE2A8(void *);
void func_088D43C8(void *, f32, f32);
void func_088D43FC(void *, u8 *, f32);
void func_088D4448(void *, u8 *, f32);

void func_08910E64(B *arg0) {
    A *temp;
    s32 temp2;
    u32 temp3;
    f32 temp4;

    func_0890B8FC(arg0->unk_32A0);
    temp = arg0->unk_170400;
    if (temp == NULL) {
        goto block;
    }
    temp2 = temp->unk_08 != NULL;
    if (temp2 == 0) {
        temp2 = temp->unk_10 != NULL;
    }
    if (temp2 != 0) {
        temp3 = func_088AE2A8(temp->unk_10);
        if (temp3 > 4U) {
            temp4 = 14.0f - 2.0f * (f32)(temp3 - 4U);
            func_088D43C8(arg0->unk_1C20, temp4, temp4);
        } else {
            func_088D43C8(arg0->unk_1C20, 14.0f, 14.0f);
        }
        func_088D4448(arg0->unk_1C20, (u8 *)temp->unk_10, 0.0f);
    } else {
block:
        func_088D43FC(arg0->unk_1C20, D_08A001C4, 0.0f);
    }
    func_0890B8C0(arg0->unk_32A0, 1.5f);
    arg0->unk_170410 = 2;
    arg0->unk_17040D = 0;
}
