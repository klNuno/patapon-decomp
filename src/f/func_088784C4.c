#include "common.h"

extern s32 func_0897A220(s32 *, s32, s32, s32, s32, s32);
extern const s32 D_089F9654[];

typedef struct {
    s32 unk_00[15];
} T;

void func_088784C4(s32 *arg0, s32 arg1, s32 arg2) {
    T temp = *(const T *)D_089F9654;
    func_0897A220(arg0, arg1 + 0xBB8, temp.unk_00[arg2], 0, 0, 0);
}
