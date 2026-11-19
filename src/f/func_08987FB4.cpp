#include "common.h"

extern "C" {

extern void *D_08A06108[];

class U {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C(void *);
};

typedef struct {
    u8 pad_00[0x120540];
    U unk_120540;
} V;

typedef struct {
    V *unk_00;
    u8 pad_04[0x08];
    U *unk_0C;
    u8 pad_10[0x08];
    s32 unk_18;
} T;

s32 func_08987FB4(T *arg0) {
    U *temp = &arg0->unk_00->unk_120540;
    arg0->unk_0C = temp;
    arg0->unk_18 = temp->unk_1C(D_08A06108[0]);
    return 0;
}

}
