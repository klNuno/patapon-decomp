#include "common.h"

extern s8 D_08AD1F58[];
extern s8 D_08AD1F5C[];

s8 *func_08877730(void) {
    if (D_08AD1F58[0] == 0) {
        D_08AD1F5C[0] = 0;
        D_08AD1F58[0] = 1;
    }
    return D_08AD1F5C;
}
