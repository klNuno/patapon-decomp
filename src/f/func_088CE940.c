#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} T;

extern s32 func_0886F2FC(s32);
extern s32 func_08860820(void *, s32);
extern void *D_08A8812C[];
extern s32 D_08AD76F0[];

void func_088CE940(T *arg0) {
    void *temp;

    func_0886F2FC((s32)arg0);
    temp = D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL;
    if (func_08860820(temp, 0) == 0 && arg0->unk_0C == 0) {
        D_08AD76F0[0] = D_08AD76F0[0] % 60 + 1;
    }
}
