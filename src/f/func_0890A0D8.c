#include "common.h"

extern void func_0880416C(void *);
extern void func_0890A130(void *);
extern u8 D_08A468E4[];
typedef struct {
    u8 pad_00[0x10C];
    u8 *unk_10C;
} T;

T *func_0890A0D8(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_10C = D_08A468E4;
        func_0890A130(arg0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
