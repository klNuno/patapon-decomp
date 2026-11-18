#include "common.h"

s32 func_08852BA8(void *);
void func_08852BC0(void *);
void func_08852BCC(void *, s32);
void func_08852C5C(void *, s32, s32);
void func_08852E24(void *);
void func_0885303C(void *, s32, s32);
void func_08853914(void *);
void func_088539E8(void *);

s32 func_088E6540(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp;

    temp = func_08852BA8(arg0);
    func_08852BC0(arg0);
    func_08852E24(arg0);
    func_088539E8(arg0);
    func_08853914(arg0);
    if (arg3 != 0) {
        func_08852BCC(arg0, arg3);
    } else {
        func_08852BCC(arg0, temp);
    }
    func_08852C5C(arg0, arg1, 0);
    func_0885303C(arg0, arg2, 1);
    func_08852BA8(arg0);
    func_08852BC0(arg0);
    func_08852E24(arg0);
    func_088539E8(arg0);
    return 1;
}
