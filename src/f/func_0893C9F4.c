#include "common.h"

typedef struct S_0893CC10 S_0893CC10;

typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[1];
} T;

extern void *D_08A8812C[];
s32 func_08860820(void *, s32);
void func_0893CC10(S_0893CC10 *arg0);

s32 func_0893C9F4(T *arg0) {
    void *temp;
    if (arg0->unk_1510 == 1) {
        return 1;
    }
    temp = D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL;
    if (func_08860820(temp, 0) != 0) {
        return 0;
    }
    arg0->unk_1510 = 1;
    func_0893CC10((S_0893CC10 *)arg0->unk_1514);
    return 1;
}
