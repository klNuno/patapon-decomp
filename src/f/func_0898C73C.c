#include "common.h"

void func_08940664(s32 *, void *);
void func_0894065C(s32 *, void *);
void func_08940544(s32 *, void *, s32, s32);
void func_08941528(void *, s32, void *);

s32 func_0898C73C(u8 *arg0) {
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;

    func_08940664(&sp28, arg0 + 0x380);
    func_0894065C(&sp24, arg0 + 0x380);
    func_08940544(&sp2C, arg0 + 0x380, sp28, sp24);
    func_0894065C(&sp20, arg0 + 0x380);
    func_08941528(arg0 + 0x380, sp20, arg0 + 0x3C4);
    func_0894065C(&sp1C, arg0 + 0x380);
    func_08941528(arg0 + 0x380, sp1C, arg0 + 0x3D4);
    return 1;
}
