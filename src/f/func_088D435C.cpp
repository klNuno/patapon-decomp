#include "common.h"

extern "C" {
class A_0892CCC4 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    u8 pad_04[0x6DC];
    void *unk_6E0;
    u8 pad_6E4[0x1E0];
    s32 unk_8C4;
    s32 unk_8C8;
    s32 unk_8CC;
    u8 unk_8D0;
    u8 pad_8D1[0x1B];
    u8 unk_8EC;
};

void func_088AF260(void *, s32);
void func_088F24B0(void *);
void func_0892CCC4(A_0892CCC4 *arg0);

struct T {};

inline void func_088D435C_00(A_0892CCC4 *arg0, const T &) {
    func_0892CCC4(arg0);
}

void func_088D435C(A_0892CCC4 *arg0, s32 arg1) {
    arg0->unk_0C();
    func_088AF260(arg0->unk_6E0, arg1);
    arg0->unk_8C8 = 0;
    arg0->unk_8CC = 0;
    func_088D435C_00(arg0, T());
    arg0->unk_8C4 = 0;
    arg0->unk_8D0 = 0;
    arg0->unk_8EC = 1;
    func_088F24B0(arg0->unk_6E0);
}
}
