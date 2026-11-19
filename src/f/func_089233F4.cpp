#include "common.h"

extern "C" {

extern void func_08923174(s32 *, void *);
extern void func_0892316C(s32 *, void *);
extern void func_08923180(s32 *, void *, s32, s32);

void func_089233F4(u8 *arg0) {
    s32 result;
    s32 temp;
    s32 val;
    func_08923174(&temp, arg0 + 0x624);
    func_0892316C(&val, arg0 + 0x624);
    func_08923180(&result, arg0 + 0x624, temp, val);
}

}
