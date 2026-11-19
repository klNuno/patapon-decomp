#include "common.h"

typedef struct T0 T0;

typedef struct {
    u8 pad_00[0x58];
    u8 *unk_58;
    u8 pad_5C[0x11B4];
    void *unk_1210;
} T;

T0 *func_089B17F8(T0 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern u8 D_08A488C0[];

T *func_089AF58C(T *arg0, void *arg1, s32 arg2, void *arg3, s32 arg4) {
    func_089B17F8((T0 *)arg0, (s32)arg1, arg2, arg4);
    arg0->unk_58 = D_08A488C0;
    arg0->unk_1210 = arg3;
    return arg0;
}
