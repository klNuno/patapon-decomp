#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    s32 unk_10;
} Obj_088120B4;

void func_0881F120(void *, void *, s32);
void func_0881F5C0(void *, s32, s32);

void func_088120B4(Obj_088120B4 *arg0, s32 *arg1, s32 *arg2) {
    struct {
        s32 unk_00;
    } n;

    n.unk_00 = arg2 - arg1;
    arg0->unk_10 -= n.unk_00;
    func_0881F120(arg0->unk_00 + arg0->unk_10, arg1, n.unk_00 * 4);
    func_0881F5C0(arg1, 0, n.unk_00 * 4);
    arg0->unk_04 += n.unk_00;
}
