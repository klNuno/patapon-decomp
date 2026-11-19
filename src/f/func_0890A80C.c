#include "common.h"

extern u8 D_08A468F0[];
void func_0880416C(void *);
typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
} T;

void func_08909818(T *, s16);


T *func_0890A80C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A468F0;
        func_08909818(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
