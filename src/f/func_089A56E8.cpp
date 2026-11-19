#include "common.h"

extern "C" {

typedef struct {
    u8 unk_00[0x90];
    u8 unk_90[0x90];
    s32 unk_120;
    s32 unk_124;
    s32 unk_128;
} T;

void func_08865EE0(void *);

struct E {};

static inline T *unk_00(T *arg0, const E &)
{
    func_08865EE0(arg0->unk_00);
    func_08865EE0(arg0->unk_90);
    arg0->unk_120 = 0;
    arg0->unk_124 = 0;
    arg0->unk_128 = 0;
    return arg0;
}

T *func_089A56E8(T *arg0)
{
    return unk_00(arg0, E());
}

}
