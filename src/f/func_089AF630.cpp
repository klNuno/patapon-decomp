#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x58];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
};

typedef struct T089B3450 T089B3450;
typedef struct S S;

typedef struct {
    T unk_00;
    u8 pad_5C[0x178];
    u8 unk_1D4[1];
} Unk;

void func_089B3450(T089B3450 *, s32, s32);
void func_089B13DC(S *arg0, void *arg1, void *arg2, s32 arg3);

void func_089AF630(Unk *arg0, void *arg1, void *arg2)
{
    func_089B3450((T089B3450 *)arg0, (s32)arg1, (s32)arg2);
    if ((u8)arg0->unk_00.unk_1C() != 0) {
        func_089B13DC((S *)arg0->unk_1D4, arg1, arg2, 1);
    }
}

}
