#include "common.h"

void func_08852F00(void *, s32);
extern int func_0894DD50(char *);
extern s32 func_08950B34(s32);

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
    char *unk_14;
} T;

void func_08937EB4(T *arg0, void *arg1) {
    char *temp = arg0->unk_14;

    if (temp != NULL) {
        func_0894DD50(temp);
    }
    func_08950B34((s32)(arg0->unk_10 + 0x1D50));
    func_08852F00(arg1, 0);
}
