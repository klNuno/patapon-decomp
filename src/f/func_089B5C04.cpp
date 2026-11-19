#include "common.h"

extern "C" {
class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
};

s32 func_088586E8(void);
s32 func_089B53CC(s32);
void func_0887B9C0(s32, f32);
extern s32 func_0886F32C(s32);

void func_089B5C04(void *arg0) {
    ((T *)&((u8 *)arg0)[0x129B4])->unk_24();
    ((T *)&((u8 *)arg0)[0x11F80])->unk_14();
    func_0887B9C0(func_089B53CC(func_088586E8()), 1.0f);
    func_0886F32C((s32)arg0);
}
}
