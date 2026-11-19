#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x1E6B0];
    u8 unk_1E6B0;
} S;

typedef struct {
    u8 pad_00[0x10];
    S *unk_10;
} T;

void func_08954804(void *);
void func_08852F00(void *, s32);

void func_08937CD8(T *arg0, void *arg1) {
    func_08954804(&arg0->unk_10->unk_1E6B0);
    func_08852F00(arg1, 0);
}
}
