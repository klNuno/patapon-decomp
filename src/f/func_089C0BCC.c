#include "common.h"

typedef struct {
    u8 pad_00[0xB94];
    s32 unk_B94;
    u8 pad_B98[0x2C];
    u8 unk_BC4[0x20];
    u8 unk_BE4[0x4];
} Obj_089C0BCC;

void func_0898566C(Obj_089C0BCC *, s32);
void func_089C0C64(Obj_089C0BCC *, s32);
void func_089C18DC(Obj_089C0BCC *, s32);
void func_089C4BE0(void *, s32);
void func_089D3BC4(void *, s32);

void func_089C0BCC(Obj_089C0BCC *arg0, s32 arg1) {
    func_0898566C(arg0, arg1);
    switch (arg0->unk_B94) {
    case 0:
        break;
    case 1:
        func_089C0C64(arg0, arg1);
        break;
    case 2:
        func_089C18DC(arg0, arg1);
        break;
    case 3:
        break;
    }
    func_089C4BE0(arg0->unk_BE4, arg1);
    func_089D3BC4(arg0->unk_BC4, arg1);
}
