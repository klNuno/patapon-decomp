#include "common.h"

extern "C" {

typedef struct {
    s8 unk_00;
} S;

s32 func_0880C7E8(void *, S);

void func_088090D0(void *arg0) {
    S temp = { 0 };
    func_0880C7E8(arg0, temp);
}

}
