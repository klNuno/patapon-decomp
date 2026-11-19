#include "common.h"

extern "C" {
typedef struct {
    s32 unk_00;
    u8 unk_04[0x10A3C];
    s32 unk_10A40;
    s32 unk_10A44;
} T;

s32 func_08858B9C(void);
void func_089D05EC(void *, s32, s32);

struct U {};

inline void func_089C6634_unk_00(void *arg0, s32 arg1, s32 arg2, const U &) {
    func_089D05EC(arg0, arg1, arg2);
}

T *func_089C6634(T *arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = arg2;
    func_089C6634_unk_00(arg0->unk_04, func_08858B9C(), arg1, U());
    arg0->unk_10A40 = 0;
    arg0->unk_10A44 = 0;
    return arg0;
}
}
