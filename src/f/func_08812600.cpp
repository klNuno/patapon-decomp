#include "common.h"

extern "C" {

typedef struct {
    s8 unk_00;
} S;

void func_08812624(void *, void *, s32 *, S);

void func_08812600(void *arg0, void *arg1) {
    s32 temp;
    S temp1 = { 0 };
    func_08812624(arg0, arg1, &temp, temp1);
}

}
