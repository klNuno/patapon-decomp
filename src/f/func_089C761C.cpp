#include "common.h"

extern "C" {

extern void *D_08AD1E28[];
extern s32 D_08A096F8[];

class UnkVirtual {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(s32);
};

typedef struct {
    u8 pad_00[0x2E3C0];
    u8 unk_2E3C0[1];
} UnkInner;

typedef struct {
    UnkInner *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
} UnkObject;

s32 *func_08868E8C(void *, s32, s32);
void func_089579E8(s32, s32, s32, f32);
UnkVirtual *func_08958954(void *);

inline void *temp0()
{
    void *temp = D_08AD1E28[0];
    if (temp != NULL) {
        return temp;
    } else {
        return NULL;
    }
}

void func_089C761C(UnkObject *arg0, f32 arg1)
{
    func_089579E8((s32)&arg0->unk_00->unk_2E3C0,
                   *func_08868E8C(temp0(), 7, D_08A096F8[0]), 6, arg1);
    func_08958954(&arg0->unk_00->unk_2E3C0)->unk_1C(0);
    arg0->unk_160 = 2;
}

}
