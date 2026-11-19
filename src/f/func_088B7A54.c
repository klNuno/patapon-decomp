#include "common.h"

void func_0881F5C0(void *, s32, s32);
void func_088B7AF8(void *);

typedef struct {
    u8 unk_00[0x100];
    u32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10C;
} T;

T *func_088B7A54(T *arg0) {
    func_0881F5C0(arg0, 0, 0x100);
    arg0->unk_100 = 0xFFFFFF;
    arg0->unk_104 = 0;
    arg0->unk_108 = 0;
    arg0->unk_10C = 0;
    func_088B7AF8(arg0);
    return arg0;
}
