#include "common.h"

typedef struct {
    u8 pad_00[0x160];
    s32 unk_160;
    u8 pad_164[0xC];
    u8 unk_170[0xD60];
    u8 unk_ED0[4];
} Obj_089C9308;

void func_0898566C(void *, s32);
void func_089C93D0(Obj_089C9308 *, s32);
void func_089C93D8(Obj_089C9308 *, s32);
void func_089C9E7C(Obj_089C9308 *, s32);
void func_089CA010(Obj_089C9308 *, s32);
void func_089CA058(Obj_089C9308 *);
void func_089CB944(void *, s32);
void func_089D3BC4(void *, s32);

void func_089C9308(Obj_089C9308 *arg0, s32 arg1) {
    func_0898566C(arg0, arg1);
    switch (arg0->unk_160) {
    case 1:
        func_089C93D0(arg0, arg1);
        break;
    case 2:
        func_089C93D8(arg0, arg1);
        break;
    case 3:
        func_089C9E7C(arg0, arg1);
        break;
    case 4:
        func_089CA010(arg0, arg1);
        break;
    case 0:
    case 5:
        break;
    }
    func_089CA058(arg0);
    func_089CB944(arg0->unk_170, arg1);
    func_089D3BC4(arg0->unk_ED0, arg1);
}
