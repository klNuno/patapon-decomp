#include "common.h"

extern u8 D_08A48530[];
extern s32 func_08859C04(void);
typedef struct {
    u8 *unk_00;
    u8 pad_04[0x884];
    s32 unk_888;
} T;
extern void func_08975CE0(T *, s32, s32);

T *func_089902E0(T *arg0, s32 arg1) {
    func_08975CE0(arg0, arg1, func_08859C04());
    arg0->unk_00 = D_08A48530;
    arg0->unk_888 = 0;
    return arg0;
}
