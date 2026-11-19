#include "common.h"

extern "C" {

class V_088821B0 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

typedef struct {
    u8 pad_00[0x24];
    V_088821B0 *unk_24;
    void *unk_28;
    u8 pad_2C[0x54];
    s32 unk_80;
} S_088821B0;

void func_08827C2C(S_088821B0 *);
void func_08827CAC(S_088821B0 *, void (*)(void), s32);
void func_08827DA8(S_088821B0 *);
void func_08881D58(void);

void func_08882394(S_088821B0 *arg0) {
    if (arg0->unk_80 != 0) {
        if (arg0->unk_28 != NULL) {
            if (arg0->unk_28 != NULL) {
                func_08827CAC(arg0, func_08881D58, 0);
                func_08827DA8(arg0);
            }
            func_08827C2C(arg0);
            arg0->unk_24->unk_10(arg0->unk_28);
            arg0->unk_28 = NULL;
            arg0->unk_24 = NULL;
        }
        arg0->unk_80 = 0;
    }
}

}
