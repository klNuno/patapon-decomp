#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[0x2E4];
    f32 unk_2E8;
    f32 unk_2EC;
    u8 pad_2F0[0x20];
    f32 unk_310;
} C_08879FD8;

void func_0887A13C(C_08879FD8 *, s32);
void func_0887A21C(C_08879FD8 *, s32);
void func_0887A308(C_08879FD8 *, s32);
void func_0887A4BC(C_08879FD8 *, s32);
f32 func_0887A67C(f32, s32, s32);

void func_0887A59C(C_08879FD8 *arg0, s32 arg1) {
    f32 temp;
    f32 temp2;
    switch (arg0->unk_00) {
    case 0:
    case 1:
        break;
    case 2:
        func_0887A13C(arg0, arg1);
        break;
    case 3:
        func_0887A21C(arg0, arg1);
        break;
    case 4:
        temp = func_0887A67C(1.0f, arg1, 0x12C0);
        temp2 = arg0->unk_310 + temp;
        arg0->unk_310 = temp2;
        if (15.0f <= temp2) {
            func_0887A4BC(arg0, 0);
        } else {
            temp2 /= 15.0f;
            temp2 *= -1.0f;
            temp = 1.0f;
            temp += temp2;
            arg0->unk_2E8 = temp;
            arg0->unk_2EC = temp;
        }
        break;
    case 5:
        func_0887A308(arg0, arg1);
        break;
    }
}
