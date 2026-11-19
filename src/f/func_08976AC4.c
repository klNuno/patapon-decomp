#include "common.h"
typedef struct T0 {
    u8 pad_00[4];
    struct T0 *unk_04;
} T0;

typedef struct {
    T0 *unk_00;
} T1;

s32 func_08976AC4(T1 *arg0, T1 *arg1) {
    *arg0 = *arg1;
    if (arg1->unk_00 != NULL) {
        arg1->unk_00 = arg1->unk_00->unk_04;
    }
    return 0;
}
