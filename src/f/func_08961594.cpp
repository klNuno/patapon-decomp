#include "common.h"

extern "C" {

class A_08961594 {
public:
    u8 pad_00[0x80];
    virtual void func_08();
    virtual void func_0C(void *);
};

class B_08961594 {
public:
    u8 pad_00[0x8];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10(void *);
};

typedef struct {
    u8 pad_00[0xD4];
    u8 unk_D4;
    u8 pad_D5[0x3B];
    A_08961594 *unk_110;
    void *unk_114;
    B_08961594 *unk_118;
    B_08961594 *unk_11C;
    B_08961594 *unk_120;
} S_08961594;

void func_088F5A24(void *, void *);

void func_08961594(S_08961594 *arg0, void *arg1) {
    if (arg0->unk_D4 == 0) {
        return;
    }
    if (arg0->unk_110 != NULL) {
        arg0->unk_110->func_0C(arg1);
    }
    if (arg0->unk_114 != NULL) {
        func_088F5A24(arg0->unk_114, arg1);
    }
    if (arg0->unk_118 != NULL) {
        arg0->unk_118->func_10(arg1);
    }
    if (arg0->unk_11C != NULL) {
        arg0->unk_11C->func_10(arg1);
    }
    if (arg0->unk_120 != NULL) {
        arg0->unk_120->func_10(arg1);
    }
}

}
