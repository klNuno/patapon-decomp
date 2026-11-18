#include "common.h"

extern "C" {

typedef struct Unk1 {
    struct Unk1 *unk_00;
    struct Unk1 *unk_04;
    s32 unk_08;
} Unk1;

typedef struct {
    u8 pad_00[0x1324];
    Unk1 unk_1324;
} Unk0;

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
} Unk2;

extern s32 func_08932B7C(s32, s32);
extern s32 func_0892AE88(s32);
void func_0892C14C(s32, f32, f32);
s32 func_0892C7B0(char *arg0);

static inline s32 func_00(Unk1 *arg0, Unk1 *arg1) {
    s32 temp2 = 0;
    s32 temp = 0;
    if (arg0->unk_08 == arg1->unk_08 && arg0->unk_04 == arg1->unk_04) {
        temp = 1;
    }
    if (temp != 0 && arg0->unk_00 == arg1->unk_00) {
        temp2 = 1;
    }
    return (temp2 != 0) ^ 1;
}

void func_0892A9A0(Unk0 *arg0, s32 arg1, f32 arg2, f32 arg3) {
    struct { Unk1 *unk_00; } temp;
    struct { Unk1 *unk_00; } temp2;
    temp2.unk_00 = &arg0->unk_1324;
    temp.unk_00 = arg0->unk_1324.unk_04;
    while (func_00(temp.unk_00, temp2.unk_00)) {
        s32 temp3 = *(s32 *)((u8 *)temp.unk_00 + 8);
        if (arg1 == ((Unk2 *)func_0892AE88(func_0892C7B0((char *)temp3)))->unk_28) {
            func_0892C14C(temp3, arg2, arg3);
            func_08932B7C(temp3, 1);
        }
        if (temp.unk_00 != NULL) {
            temp.unk_00 = temp.unk_00->unk_04;
        }
    }
}

}
