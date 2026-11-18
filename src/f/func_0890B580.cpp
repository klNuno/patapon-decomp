#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xD90];
    s32 unk_D90;
    u32 unk_D94;
    u32 unk_D98;
    u32 unk_D9C;
} Obj;

extern u32 D_089E4B28[];
void func_0881F5C0(void *, s32, s32);

inline const u32 &min_(const u32 &a, const u32 &b) { return (b < a) ? b : a; }

void func_0890B580(Obj *arg0, u32 arg1, u32 arg2) {
    arg1 = min_(arg1, D_089E4B28[0]);
    arg2 = min_(arg2, D_089E4B28[0]);
    if (arg2 == 0) {
        arg1 = -1;
    }
    func_0881F5C0(&arg0->unk_D90, 0, 0x10);
    arg0->unk_D90 = 0;
    arg0->unk_D94 = arg1;
    arg0->unk_D98 = arg1 + arg2;
    arg0->unk_D9C = 0x18 - (arg1 + arg2);
}

}
