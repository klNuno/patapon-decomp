#include "common.h"

typedef struct {
    u8 pad_00[0x2980];
    u8 unk_2980;
} Unk0;

typedef struct {
    Unk0 *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} Unk;

s32 func_08958924(void *);
void func_0897136C(Unk *);
void func_089717E8(Unk *);

void func_08971308(Unk *arg0, Unk0 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = arg3;
    arg0->unk_0C = func_08958924(&(*(Unk0 *volatile *)&arg0->unk_00)->unk_2980);
    if (arg4 == 0) {
        func_0897136C(arg0);
    } else {
        func_089717E8(arg0);
    }
}
