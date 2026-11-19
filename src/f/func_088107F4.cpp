#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} Unk;

void func_08810810(Unk *, s32);

void func_088107F4(Unk *arg0) {
    func_08810810(arg0, arg0->unk_04);
}

}
