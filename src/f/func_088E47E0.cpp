#include "common.h"

extern "C" {
typedef struct S088CE0C0 S088CE0C0;
struct Obj_088E2C78;
S088CE0C0 *func_08880088(S088CE0C0 *, s16);
Obj_088E2C78 *func_088E2C78(Obj_088E2C78 *, s16);

class A {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

typedef struct {
    u8 pad_00[8];
    u8 unk_08[0xC];
    u8 unk_14[0x28];
    u8 unk_3C;
} S;

void func_088E47E0(S *arg0, A *arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            func_08880088((S088CE0C0 *)&arg0->unk_3C, -1);
            func_08880088((S088CE0C0 *)arg0->unk_14, -1);
            func_088E2C78((Obj_088E2C78 *)arg0->unk_08, -1);
        }
        arg1->unk_10(arg0);
    }
}
}
