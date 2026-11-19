#include "common.h"

extern "C" {

s32 func_088586E8(void);
extern s32 func_089B5470(s32, s32);
extern void func_088C553C(s32, s32);

struct T {
    u8 pad_00[0x50];
    s32 unk_50;
};

void func_08931FE4(T *arg0, s32 arg1) {
    s32 temp = func_088586E8();
    temp = func_089B5470(temp, arg0->unk_50);
    func_088C553C(temp, arg1);
}

}
