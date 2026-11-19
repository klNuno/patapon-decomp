#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    u8 *unk_80;
} Unk;

void func_089741D8(void *);
extern u8 D_08A48170[];

Unk *func_08982360(Unk *arg0) {
    func_089741D8(arg0);
    arg0->unk_80 = D_08A48170;
    return arg0;
}
