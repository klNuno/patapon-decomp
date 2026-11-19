#include "common.h"

extern "C" {

typedef struct V V;
void func_088E6540(V *, s32, s32, s32, s32);
s32 func_088E661C(char *arg0, s32 arg1);

void func_088E64E0(V *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_088E6540(arg0, func_088E661C((char *)arg0, arg1), arg2, arg3, arg4);
}

}
