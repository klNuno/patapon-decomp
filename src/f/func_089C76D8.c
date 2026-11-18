#include "common.h"

typedef struct {
    u8 pad_00[0x160];
    s32 unk_160;
    u8 pad_164[0x4];
    u8 unk_168[0xB54];
    u8 unk_CBC[0x4];
} Obj;

void func_0898566C(Obj *, s32);
void func_089C84C8(Obj *);
void func_089C7FEC(Obj *, s32);
void func_089C77AC(Obj *, s32);
void func_089C8040(Obj *, s32);
void func_089C8130(Obj *, s32);
void func_089CD504(void *, s32);
void func_089D3BC4(void *, s32);

void func_089C76D8(Obj *arg0, s32 arg1) {
    func_0898566C(arg0, arg1);
    switch (arg0->unk_160) {
    case 1:
        func_089C84C8(arg0);
        break;
    case 0:
        func_089C7FEC(arg0, arg1);
        break;
    case 2:
        func_089C77AC(arg0, arg1);
        break;
    case 3:
        func_089C8040(arg0, arg1);
        break;
    case 4:
        func_089C8130(arg0, arg1);
        break;
    }
    func_089CD504(arg0->unk_168, arg1);
    func_089D3BC4(arg0->unk_CBC, arg1);
}
