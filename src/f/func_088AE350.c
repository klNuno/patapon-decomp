#include "common.h"

extern u8 *D_08AD6838[];
void func_0882687C(void *, void *);

void func_088AE350(u32 arg0, void *arg1) {
    if (arg0 < 0x40U) {
        func_0882687C(D_08AD6838[0] + (arg0 << 6), arg1);
    }
}
