#include "common.h"

void func_08858024(s32);
extern s32 func_088581B0(s32);
void func_08855354(char *);

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    u8 pad_34[0xC];
} UnkMatrix;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} UnkObject;

void func_0894AC80(void *, UnkMatrix *, s32);
void func_0894ACE0(void *, UnkMatrix *, s32);

static inline f32 temp0(f32 arg0, f32 arg1, f32 arg2)
{
    arg0 -= arg1;
    return arg0 + arg2;
}

void func_088BE100(void *arg0, UnkObject *arg1, s32 arg2, s32 arg3)
{
    struct { UnkMatrix unk_00; u8 pad_40[0x10]; } temp;
    UnkMatrix temp2;
    void **temp3;
    u32 temp4;

    func_08858024(1);
    func_088581B0((s32)&temp);
    func_08858024(2);
    func_08855354((char *)&temp2);
    temp3 = &arg1->unk_08;
    temp4 = 0;
    temp2.unk_30 = temp0(0.0f, temp.unk_00.unk_30, 4294966528.0f);
    do {
        if (arg3 != 0) {
            func_0894AC80(*temp3, &temp2, arg2);
        } else {
            func_0894ACE0(*temp3, &temp2, arg2);
        }
        temp4++;
        temp2.unk_30 += 720.0f;
    } while (temp4 == 0);
}
