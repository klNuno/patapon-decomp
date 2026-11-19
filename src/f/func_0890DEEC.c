#include "common.h"

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54[8];
} T;

typedef struct {
    u8 pad_00[0x74A4];
    T *unk_74A4;
} S_0890DE5C;

typedef struct {
    u32 unk_00, unk_04;
} S;

s32 func_0890E830(S_0890DE5C *, u32, u32);

void func_0890DEEC(S_0890DE5C *arg0, S *arg1, s32 arg2, s32 arg3) {
    s32 temp = arg2;
    u32 a = *(volatile u32 *)&arg1->unk_04;
    u32 b = *(volatile u32 *)&arg1->unk_00;
    s32 value = arg3;
    S_0890DE5C *obj = arg0;
    s32 i = func_0890E830(obj, a, b);
    if (i >= 0) {
        *(s32 *)((temp * 4) + (s32)(obj->unk_74A4 + i) + 0x54) = value;
    }
}
