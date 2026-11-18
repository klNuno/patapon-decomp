#include "common.h"

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[4];
    s32 unk_106C;
    u8 pad_1070[0x27B90 - 0x1070];
    u8 unk_27B90[0x385D8 - 0x27B90];
    void *unk_385D8;
} Obj_089A47C8;

s32 func_08998080(s32, s32);
u32 func_0899A900(s32);
s32 func_0899A908(s32, u32);
s32 func_0899E1DC(s32, u32);
s32 func_089C6964(void *, s32);

void func_089A47C8(Obj_089A47C8 *arg0) {
    u32 i;
    u32 j;

    for (i = 0; i < func_0899A900(func_08998080(arg0->unk_1064, arg0->unk_106C)); i++) {
        for (j = 0; j < 3; j++) {
            if (!(func_0899E1DC(func_0899A908(func_08998080(arg0->unk_1064, arg0->unk_106C), i), j) != 0) == 0) {
                return;
            }
        }
    }
    func_089C6964(arg0->unk_27B90, 1);
    arg0->unk_385D8 = arg0->unk_27B90;
}
