#include "common.h"
typedef struct N N;
typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510;
} T0;

extern void *D_08AD8DD8[];
void func_0892E524(N *arg0);

void func_088CE780(T0 *arg0) {
    if (arg0->unk_1510 != 0) {
        arg0->unk_1510 = 0;
    }
    func_0892E524(D_08AD8DD8[0] != NULL ? (N *)D_08AD8DD8[0] : NULL);
}
