#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} U08862A10;

typedef struct T08862A10 T08862A10;

void func_08862760(T08862A10 *, U08862A10 *, s32);

s32 func_088629CC(void *arg0, U08862A10 *arg1, T08862A10 *arg2) {
    if (arg1 == NULL || arg2 == NULL) {
        return 0;
    }
    if (arg1->unk_0C == 0) {
        return 0;
    }
    func_08862760(arg2, arg1, 0);
    return 0;
}
