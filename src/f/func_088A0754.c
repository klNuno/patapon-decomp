#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    V4 unk_00;
    V4 unk_10;
    V4 unk_20;
    V4 unk_30;
} M;
typedef M Mtx;

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0x48];
    f32 unk_90;
    f32 unk_94;
    f32 unk_98;
    u8 pad_9C[0x34];
    u8 unk_D0[1];
} A;

void func_08855354(char *);
void func_08866B54(Mtx *, s32, void *);
void *func_08866B80(Mtx *, s32);
void func_088A0890(void *, s32, M *);
void func_08854F60(f32, V4 *, V4 *);
extern int func_08864E80(char *, char *);

void func_088A0754(A *arg0, f32 arg1, s32 arg2) {
    M temp;
    V4 temp2;
    M temp3;
    M temp4;
    V4 temp5;

    func_08855354((char *)&temp);
    temp2.unk_00 = arg0->unk_90;
    temp2.unk_04 = arg0->unk_94;
    temp2.unk_08 = arg0->unk_98;
    temp2.unk_0C = 1.0f;
    temp3.unk_00.unk_0C = 0.0f;
    temp3.unk_10.unk_0C = 0.0f;
    temp3.unk_20.unk_0C = 0.0f;
    func_08866B54(&temp3, 3, &temp2);
    func_088A0890(arg0->unk_D0, 0, &temp3);
    func_08866B54(&temp4, 0, func_08866B80(&temp3, 0));
    func_08866B54(&temp4, 1, func_08866B80(&temp3, 1));
    func_08866B54(&temp4, 2, func_08866B80(&temp3, 2));
    func_08866B54(&temp4, 3, func_08866B80(&temp3, 3));
    func_08854F60(arg1, &temp5, &temp4.unk_00);
    temp4.unk_00 = temp5;
    func_08864E80((char *)arg0, (char *)&temp4);
    arg0->unk_44 = arg2;
}
