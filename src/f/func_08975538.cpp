#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T0;

class T1 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual T0 *unk_24(s32);
};

extern T1 *D_08ADB048[];

s32 func_08975538(void *arg0, void *arg1, s32 arg2) {
    T0 *temp = D_08ADB048[0]->unk_24(arg2);
    return temp != NULL ? temp->unk_10 : 0;
}

}
