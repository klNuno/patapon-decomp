#include "common.h"

extern "C" {

typedef struct Node_0882782C {
    struct Node_0882782C *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
} Node_0882782C;

class Base_0882782C {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
    virtual s32 unk_20();
};

class Obj_0882782C : public Base_0882782C {
public:
    Node_0882782C *unk_04;
};

s32 func_0882782C(Obj_0882782C *arg0) {
    Node_0882782C *n;
    s32 c;
    s32 temp;

    n = arg0->unk_04;
    c = 1;
    while (n->unk_08 != 2) {
        if (n->unk_08 == 1) {
            c++;
        }
        n = n->unk_00;
    }
    temp = arg0->unk_1C();
    return temp - arg0->unk_20() - c * 0x1C;
}

}
