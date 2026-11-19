#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[8];
    u8 unk_08[0xC];
    u8 unk_14[0x28];
    u8 unk_3C[0x28];
} T;

class T1 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(T *);
};

void func_08880088(void *, s16);
void func_088F7164(void *, s16);

void func_088F935C(T *arg0, T1 *arg1)
{
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            func_08880088(arg0->unk_3C, -1);
            func_08880088(arg0->unk_14, -1);
            func_088F7164(arg0->unk_08, -1);
        }
        arg1->unk_10(arg0);
    }
}
}
