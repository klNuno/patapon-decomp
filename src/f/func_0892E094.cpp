#include "common.h"

extern "C" {

class V_0892E094 {
public:
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10(void *);
};

typedef struct {
    u8 pad_00[0x24];
    V_0892E094 *unk_24;
    void *unk_28;
} S_0892E094;

void func_0880416C(void *);
void func_08827C2C(S_0892E094 *);
void func_08827CAC(S_0892E094 *, void (*)(void), s32);
void func_08827DA8(S_0892E094 *);
void func_0892E048(void);

S_0892E094 *func_0892E094(S_0892E094 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_28 != NULL) {
            if (arg0->unk_28 != NULL) {
                func_08827CAC(arg0, func_0892E048, 0);
                func_08827DA8(arg0);
            }
            func_08827C2C(arg0);
            arg0->unk_24->vfunc_10(arg0->unk_28);
            arg0->unk_28 = NULL;
            arg0->unk_24 = NULL;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
