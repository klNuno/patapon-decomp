#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

class A_0884E9D4 {
public:
    virtual s32 *v0(u32, s32);
};

typedef struct {
    s32 *unk_00;
    u32 unk_04;
    A_0884E9D4 *unk_08;
} V_0884E9D4;

typedef struct {
    A_0884E9D4 *unk_00;
    A_0884E9D4 *unk_04;
    V_0884E9D4 unk_08;
    V_0884E9D4 unk_14;
} S_0884E9D4;

S_0884E9D4 *func_0884E9D4(S_0884E9D4 *arg0, A_0884E9D4 *arg1, u32 arg2, u32 arg3) {
    s32 *p;
    s32 *end;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg1;
    arg0->unk_08.unk_00 = NULL;
    arg0->unk_08.unk_04 = arg2;
    arg0->unk_08.unk_08 = arg0->unk_00;
    if (arg0->unk_08.unk_04 != 0) {
        p = arg0->unk_08.unk_00 = arg0->unk_08.unk_08->v0(arg0->unk_08.unk_04 * sizeof(s32), 0x20);
        end = p + arg0->unk_08.unk_04;
        do {
            new (p++) s32();
        } while (p != end);
    }
    arg0->unk_14.unk_00 = NULL;
    arg0->unk_14.unk_04 = arg3;
    arg0->unk_14.unk_08 = arg0->unk_04;
    if (arg0->unk_14.unk_04 != 0) {
        p = arg0->unk_14.unk_00 = arg0->unk_14.unk_08->v0(arg0->unk_14.unk_04 * sizeof(s32), 0x20);
        end = p + arg0->unk_14.unk_04;
        do {
            new (p++) s32();
        } while (p != end);
    }
    return arg0;
}

}
