#include "common.h"

extern s32 func_0881F280(s32, s32, s32);

typedef struct {
    u8 pad_00[0x10];
} T;

T *func_08812DD0(const T *arg0, const T *arg1, T *arg2) {
    s32 temp = (arg1 - arg0) * sizeof(T);
    func_0881F280((s32)arg2, (s32)arg0, temp);
    return (T *)((u8 *)arg2 + temp);
}
