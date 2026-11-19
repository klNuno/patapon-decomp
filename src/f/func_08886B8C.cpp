#include "common.h"

extern "C" {

void func_0880416C(void *);

struct Unk00 {
    void *unk_00;
    u32 unk_04;
};
struct Unk01 {};

static inline void func_08886B8C_inline(Unk00 *arg0, const Unk01 &) {
    u32 &temp = arg0->unk_04;
    arg0->unk_04 = temp - *(u32 *)((u8 *)arg0 + 4);
    if (arg0->unk_00 != NULL) {
        func_0880416C(arg0->unk_00);
    }
}

void *func_08886B8C(Unk00 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08886B8C_inline(arg0, Unk01());
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
