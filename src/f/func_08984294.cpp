#include "common.h"

extern "C" {

class C08984294 {
public:
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
};

typedef struct {
    u8 pad_00[0x15C];
    void *unk_15C;
    u8 pad_160[0x58];
    u8 unk_1B8[0x4BC];
    u8 unk_674[1];
} T08984294;

extern u8 D_08A4818C[];
extern u8 D_08A48024[];
void func_0880416C(void *);
void func_0886B11C(void *, s32);
void func_08985484(void *, s32);
void func_0898D2E4(void *, s32);

T08984294 *func_08984294(T08984294 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_15C = D_08A4818C;
        if ((C08984294 *)arg0->unk_674 != NULL) {
            *(void **)arg0->unk_674 = D_08A48024;
            ((C08984294 *)arg0->unk_674)->func_14();
            func_0886B11C(arg0->unk_674, 0);
        }
        func_0898D2E4(arg0->unk_1B8, -1);
        func_08985484(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
