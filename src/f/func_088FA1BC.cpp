#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
void func_088DE42C(void *);
void func_08910E5C(void *, s32);

typedef struct {
    u8 pad_00[0xB21EC];
    void *unk_B21EC;
} U;

typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
} T;

void func_088FA1BC(T *arg0, void *arg1) {
    func_088DE42C(arg0->unk_10);
    func_08910E5C(arg0->unk_10->unk_B21EC, 0);
    func_08852F00(arg1, 0);
}

}
