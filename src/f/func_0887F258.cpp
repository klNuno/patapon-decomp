#include "common.h"

extern "C" {

class T {
    u8 pad_00[0x54];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

typedef struct {
    u8 pad_00[0x54];
    void *volatile unk_54;
} S;

extern u8 D_08A44B58[];
extern u8 D_08A45308[];
void func_0880416C(void *);

S *func_0887F258(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_54 = D_08A45308;
        ((T *)arg0)->unk_14();
        if (arg0 != NULL) {
            arg0->unk_54 = D_08A44B58;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
