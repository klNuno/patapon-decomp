#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u8 *unk_0C;
} T;

extern void func_08913D00(T *);
extern u8 D_08A46A38[];

T *func_0891571C(T *arg0) {
    func_08913D00(arg0);
    arg0->unk_0C = D_08A46A38;
    return arg0;
}
