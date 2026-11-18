#include "common.h"

extern "C" {

class Base_08966FC4 {
public:
    u8 pad_00[8];
    virtual void vf_08();
    virtual void vf_0C();
};

class Obj_08966FC4 : public Base_08966FC4 {
public:
    u8 pad_0C[0x20 - 0xC];
    u8 unk_20[0x1E0 - 0x20];
    void *unk_1E0;
    s32 unk_1E4;
    void *unk_1E8;
};

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} Arg_08966FC4;

void func_0895EFB8(Obj_08966FC4 *, s32);
void func_08941CC8(u8 *, s32, s32);
extern u8 D_08A47A38[];
extern u8 D_08A47C54[];
extern u8 D_08A47C70[];
extern u8 D_08A47C8C[];

Obj_08966FC4 *func_08966FC4(Obj_08966FC4 *arg0, s32 arg1, Arg_08966FC4 *arg2, s32 arg3) {
    func_0895EFB8(arg0, arg1);
    func_08941CC8(arg0->unk_20, arg1, arg2->unk_0C);
    arg0->unk_1E8 = D_08A47A38;
    arg0->unk_1E4 = 0;
    *(void **)((u8 *)arg0 + 8) = D_08A47C54;
    arg0->unk_1E0 = D_08A47C70;
    arg0->unk_1E8 = D_08A47C8C;
    arg0->unk_1E4 = arg3;
    arg0->vf_0C();
    return arg0;
}

}
