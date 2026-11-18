#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V_089D5C34;

typedef struct {
    void *unk_00;
    void *unk_04;
    V_089D5C34 unk_08;
} Sub_089D5C34;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[4];
    u8 unk_10[8];
    s32 unk_18;
    u8 unk_1C[0xD4C - 0x1C];
    Sub_089D5C34 unk_D4C;
    u8 unk_D60[0x1179C - 0xD60];
    u8 unk_1179C;
} S_089D5C34;

void func_0893F380(void *);
void func_08914CD0(void *, s32);
void func_089D05EC(void *, s32, s32);
void func_0881F5C0(void *, s32, s32);
void func_089154B4(void *, void *);
extern f32 D_08A0A230[];
extern f32 D_08A0A238[];
extern f32 D_08A0A23C[];
extern u8 D_08A46884[];
extern u8 D_08A49038[];

S_089D5C34 *func_089D5C34(S_089D5C34 *arg0, s32 arg1, s32 arg2) {
    V_089D5C34 t;

    arg0->unk_00 = arg1;
    arg0->unk_04 = 0;
    arg0->unk_08 = arg2;
    func_0893F380(arg0->unk_0C);
    arg0->unk_18 = 0;
    func_08914CD0(arg0->unk_1C, arg1);
    t.unk_00 = D_08A0A230[1];
    t.unk_04 = D_08A0A238[0];
    t.unk_08 = D_08A0A23C[0];
    arg0->unk_D4C.unk_00 = D_08A46884;
    arg0->unk_D4C.unk_00 = D_08A49038;
    arg0->unk_D4C.unk_04 = arg0;
    arg0->unk_D4C.unk_08 = t;
    func_089D05EC(arg0->unk_D60, arg1, arg2);
    arg0->unk_1179C = 0;
    func_0881F5C0(arg0->unk_10, 0, 8);
    func_089154B4(arg0->unk_1C, &arg0->unk_D4C);
    return arg0;
}
