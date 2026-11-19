#include "common.h"

extern s32 func_088F5BB0(s32);
extern s32 func_0899288C(s32, s32);
extern s32 func_088F5BDC(s32, s32);
void func_088F5BCC(s32, f32 *);

void func_088F5990(s32 arg0, f32 *arg1) {
    func_088F5BB0(arg0);
    func_0899288C(arg0 + 0x14, 6);
    func_088F5BCC(arg0, arg1);
    if (arg1 != NULL) {
        func_088F5BDC(arg0, (s32)*arg1);
    }
}
