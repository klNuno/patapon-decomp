#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x20];
    u16 unk_20[0x102];
    s32 unk_224;
} Obj;

void func_08826830(u16 *, u16 *);
u8 *func_08852BA8(void *);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_089A8D10(s32, s32);

void func_088EEDF4(Obj *arg0, void *arg1) {
    s32 temp = *func_0885356C(arg1, 0, 0, 4);
    func_08826830(arg0->unk_20, (u16 *)func_089A8D10(arg0->unk_224, *(s32 *)(func_08852BA8(arg1) + temp)));
    func_08852F00(arg1, 0);
}
}
