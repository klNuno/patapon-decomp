#include "common.h"

extern "C" {

extern s32 func_0885356C(s32, s32, s32, s32);
extern void func_08852EB0(s32, s32);
extern void func_08852F00(s32, s32);

void func_08851C18(s32 arg0, s32 arg1) {
    s32 *temp = (s32 *)func_0885356C(arg1, 0, 1, 4);
    func_08852EB0(arg1, *temp);
    func_08852F00(arg1, 0);
}

}
