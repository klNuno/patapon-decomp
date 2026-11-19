#include "common.h"

extern "C" {

s32 func_08998080(s32, s32);
typedef struct S_0899B0D4 S_0899B0D4;
void func_0899B0D4(S_0899B0D4 *arg0, s32 arg1, s32 arg2);
extern void func_089A48B0(s32, s32);

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[4];
    s32 unk_106C;
} T;

void func_089A4768(T *arg0, s32 arg1, s32 arg2) {
    func_0899B0D4((S_0899B0D4 *)func_08998080(arg0->unk_1064, arg0->unk_106C), arg1, arg2);
    func_089A48B0((s32)arg0, arg1);
}

}
