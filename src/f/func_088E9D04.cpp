#include "common.h"

extern "C" {
class T {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};

typedef struct {
    u8 pad_00[0x65FE4];
    T unk_65FE4;
} U;

typedef struct {
    u8 pad_00[0x14];
    U *unk_14;
} V;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_088E9D04(V *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    arg0->unk_14->unk_65FE4.unk_14(*temp);
    func_08852F00(arg1, 0);
}
}
