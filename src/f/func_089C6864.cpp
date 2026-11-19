#include "common.h"

extern "C" {

struct V {
    virtual void unk_v08(s32);
};

typedef struct {
    V *unk_00;
    u8 unk_04;
} T;

s32 func_089D1AC8(void *);
extern s32 func_089D1AD8(s32);
s32 func_089D1AEC(void *);
void func_089D1B50(void *, s32);

void func_089C6864(T *arg0, s32 arg1) {
    if (func_089D1AC8(&arg0->unk_04) != 0) {
        func_089D1B50(&arg0->unk_04, arg1);
    }
    if (func_089D1AD8((s32)&arg0->unk_04) != 0) {
        s32 temp = func_089D1AEC(&arg0->unk_04);
        arg0->unk_00->unk_v08(temp);
    }
}

}
