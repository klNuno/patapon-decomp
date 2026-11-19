#include "common.h"
extern "C" {
class A {
public:
    void *unk_00;
    u8 pad_04[0x18];
    virtual void unk_08(void *);
};

typedef struct {
    u8 pad_00[0x528];
    A unk_528;
    u8 pad_548[0x34];
    s32 unk_57C;
} T;

void func_0892C960(T *arg0) {
    if (arg0->unk_528.unk_00 != NULL) {
        arg0->unk_528.unk_08(arg0);
    }
    arg0->unk_57C = 0;
}
}
