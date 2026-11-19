#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2_088FCD2C;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4_088FCD2C;

typedef struct {
    u8 pad_00[0x54];
    void *unk_54;
} Unk;

void func_089B2284(char *, s32);
s32 func_089B1314(char *);
s32 func_089B0EA4(Unk *, s32);
s32 func_089B135C(char *);
void func_089B1338(V2_088FCD2C *, s32);
void func_089B295C(void *, V4_088FCD2C *, s32);
typedef V2_088FCD2C T;
void func_089B298C(s32, s32, T *, V2_088FCD2C *);
void func_089B2A88(void *);

extern f32 D_08A084D0[];
extern f32 D_08A084D8[];

void func_089B0C88(Unk *arg0, s32 arg1) {
    V2_088FCD2C temp;
    V2_088FCD2C temp2;
    V4_088FCD2C temp3;

    func_089B2284((char *)arg0, arg1);
    if ((u8)func_089B0EA4(arg0, func_089B1314((char *)arg1)) != 0 &&
        *(s8 *)func_089B135C((char *)arg1) > 0) {
        return;
    }
    temp3.unk_00 = D_08A084D0[0];
    temp3.unk_04 = D_08A084D0[1];
    temp3.unk_08 = D_08A084D8[0];
    temp3.unk_0C = D_08A084D8[1];
    func_089B295C(arg0->unk_54, &temp3, 1);
    temp2.unk_00 = 1.0f;
    temp2.unk_04 = 1.0f;
    func_089B1338(&temp, arg1);
    func_089B298C((s32)arg0->unk_54, 0x1F, &temp, &temp2);
    func_089B2A88(arg0->unk_54);
}
