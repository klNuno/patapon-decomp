#include "common.h"

extern "C" {
class Sub {
public:
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Sub unk_0C[4];
} Obj;

void func_0880406C(void *, void (*)(void), void (*)(void), s32, s32);
void func_089268A8(void);
void func_089267CC(void);

Obj *func_08926770(Obj *arg0) {
    func_0880406C(arg0, func_089268A8, func_089267CC, 0xD9C, 4);
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    static_cast<Sub *>(arg0->unk_0C)->unk_0C();
    return arg0;
}
}
