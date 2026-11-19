#include "common.h"

typedef struct {
    u8 pad_00[0x470];
    s32 unk_470;
} S;

typedef struct {
    u8 pad_00[0x404];
    s32 *unk_404;
} T;

T *func_0884E654(s32);

void func_08852BE0(S *arg0, s32 arg1, s32 arg2) {
    func_0884E654(arg0->unk_470)->unk_404[arg1] = arg2;
}
