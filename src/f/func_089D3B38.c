#include "common.h"

typedef struct {
    u8 pad_00[0x121FC];
    u8 unk_121FC;
} T;

void func_089D3B5C(T *arg0, s32 arg1);

void func_089D3B38(T *arg0) {
    arg0->unk_121FC = 0;
    func_089D3B5C(arg0, 3);
}
