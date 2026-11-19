#include "common.h"

extern "C" {
void func_0880416C(void *);
extern void *D_08A44B58[];
extern void *D_08A45320[];

typedef struct {
    u8 pad_00[0x54];
    void *volatile unk_54;
} T;

class S {
    u8 pad_00[0x54];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

void *func_0887F6D8(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        ((T *)arg0)->unk_54 = D_08A45320;
        arg0->unk_14();
        if (arg0 != NULL) {
            *(void **)(0x54 + (u32)arg0) = D_08A44B58;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
}
