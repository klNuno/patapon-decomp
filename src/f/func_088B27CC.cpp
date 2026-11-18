#include "common.h"

extern "C" {

typedef struct Node_088B27CC {
    struct Node_088B27CC *unk_00;
    u8 pad_04[4];
    u8 unk_08[0x10];
    s32 unk_18;
} Node_088B27CC;

class Iter_088B27CC {
public:
    Node_088B27CC *unk_00;
    int operator==(const Iter_088B27CC &o) const { return unk_00 == o.unk_00; }
    bool operator!=(const Iter_088B27CC &o) const { return !(*this == o); }
};

typedef struct Obj_088B27CC {
    u8 pad_00[0x71C];
    Node_088B27CC unk_71C;
} Obj_088B27CC;

extern s32 func_08822AD0(s32, s32);

u8 *func_088B27CC(Obj_088B27CC *arg0, s32 arg1) {
    Iter_088B27CC it;
    Iter_088B27CC end;
    u8 *p;

    it.unk_00 = arg0->unk_71C.unk_00;
    end.unk_00 = &arg0->unk_71C;
    for (; it != end; it.unk_00 = it.unk_00->unk_00) {
        p = it.unk_00->unk_08;
        if (func_08822AD0(it.unk_00->unk_18, arg1) == 0) {
            return p;
        }
    }
    return NULL;
}

}
