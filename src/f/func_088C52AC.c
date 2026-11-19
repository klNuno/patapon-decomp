#include "common.h"
#pragma divbyzerocheck on

u32 func_08858520(u8 *);
extern u8 D_08AD6BFC[];

u32 func_088C52AC(u32 arg0) {
    return arg0 != 0 ? func_08858520(D_08AD6BFC) % arg0 : 0;
}
