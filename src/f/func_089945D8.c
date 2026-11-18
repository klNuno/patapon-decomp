#include "common.h"

typedef struct {
    u8 pad_00[0x105C];
    s32 unk_105C;
    u8 pad_1060[4];
    s32 unk_1064;
    u8 unk_1068;
    u8 unk_1069;
} U;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_08994704(U *, s32);
void func_089A4DB0(s32);
void func_089BBF38(s32);
s32 func_089BCFE8(s32);
s32 func_089BCFF0(s32);

void func_089945D8(U *arg0) {
    s32 temp;

    if (arg0->unk_1068 != 0) {
        if (arg0->unk_1069 == 1) {
            arg0->unk_1068 = 0;
            func_089A4DB0(arg0->unk_105C);
        } else {
            func_089BBF38(arg0->unk_1064);
            if ((u8)func_089BCFE8(arg0->unk_1064) == 0) {
                temp = func_089BCFF0(arg0->unk_1064);
                if (temp != -1) {
                    func_08994704(arg0, temp);
                    func_08878864(func_089B53D8(func_088586E8()), 0x210009, 2, 1.0f, 0.0f, 0.0f);
                } else {
                    func_08878864(func_089B53D8(func_088586E8()), 9, 2, 1.0f, 0.0f, 0.0f);
                }
                arg0->unk_1069 = 1;
            }
        }
    }
}
