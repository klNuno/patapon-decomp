#include "common.h"

extern "C" {

struct Sub114_088978E4;
void func_088F5A7C(Sub114_088978E4 *);
extern void func_089693C0(char *);

class A {
    u8 pad_00[0x80];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

struct U {
    u8 pad_00[0x390];
    u8 unk_390;
};

struct T {
    u8 pad_00[0x114];
    Sub114_088978E4 *unk_114;
    u8 pad_118[0x278];
    U *unk_390;
    u8 pad_394[0x1C];
    A unk_3B0;
};

void func_088B46C4(T *arg0) {
    if (arg0->unk_390->unk_390 != 0) {
        func_089693C0((char *)arg0);
        arg0->unk_3B0.unk_10();
        func_088F5A7C(arg0->unk_114);
    }
}

}
