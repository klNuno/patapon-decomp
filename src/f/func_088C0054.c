#include "common.h"
typedef struct {
    s32 unk_00;
    u8 pad_04[0xA4];
    u8 unk_A8[1];
} T0;

void func_088BF91C(void *);

T0 *func_088C0054(T0 *arg0, s32 arg1) {
    arg0->unk_00 = arg1;
    func_088BF91C(arg0->unk_A8);
    return arg0;
}
