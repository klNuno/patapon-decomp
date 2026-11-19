#include "common.h"

extern "C" {
class T {
    u8 pad_00[0x58];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
};
class U {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(s32);
};
class V : public T {
public:
    u8 pad_5C[0x14];
    U unk_70;
};
typedef struct T089B3450 T089B3450;
void func_089B3450(T089B3450 *, s32, s32);

void func_089AF274(V *arg0, s32 arg1, s32 arg2) {
    func_089B3450((T089B3450 *)arg0, arg1, arg2);
    arg0->unk_70.unk_18(arg1);
    if ((u8)arg0->unk_1C() != 0) return;
}
}
