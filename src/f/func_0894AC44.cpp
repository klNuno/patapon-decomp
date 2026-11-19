#include "common.h"

extern "C" {

struct S;

extern void func_0894AD44(S *arg0, void *arg1);
extern void func_0894AD74(S *arg0, s32 arg1);

void func_0894AC44(S *arg0, s32 arg1) {
    func_0894AD44(arg0, (void *)arg1);
    func_0894AD74(arg0, arg1);
}

}
