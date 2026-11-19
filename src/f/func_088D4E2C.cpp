#include "common.h"

extern "C" {
typedef struct Obj_088F232C Obj_088F232C;

Obj_088F232C *func_088F232C(Obj_088F232C *);
extern u8 D_08A4625C[];

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[1];
} S;

S *func_088D4E2C(S *arg0) {
    arg0->unk_00 = D_08A4625C;
    func_088F232C((Obj_088F232C *)arg0->unk_10);
    ((T *)arg0)->unk_0C();
    return arg0;
}
}
