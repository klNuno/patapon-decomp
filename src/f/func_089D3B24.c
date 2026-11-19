#include "common.h"

typedef struct {
    u8 pad_00[0x121E0];
    u8 unk_121E0;
} S;

void func_089D3B5C(char *, s32);

void func_089D3B24(S *arg0) {
    arg0->unk_121E0 = 0;
    func_089D3B5C((char *)arg0, 5);
}
