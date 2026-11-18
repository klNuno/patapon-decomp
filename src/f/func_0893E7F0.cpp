#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} R_0893E7F0;

class C_0893E7F0 {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual R_0893E7F0 *v07(char *);
};

extern u32 func_08822BC4(char *);
void func_08822D5C(char *, char *, s32);
s32 func_088CB0F8(s32, s32, s32);
extern C_0893E7F0 *D_08AD970C[];

s32 func_0893E7F0(char *arg0) {
    char buf[0x40];
    s32 n;
    s32 i;
    R_0893E7F0 *r;

    buf[0] = 0;
    n = func_08822BC4(arg0);
    for (i = 0; arg0[i] != 0; i++) {
        if (arg0[i] == '.') {
            n = i;
        }
    }
    func_08822D5C(buf, arg0, n);
    buf[n] = 0;
    r = D_08AD970C[0]->v07(buf);
    if (r == NULL) {
        return 0;
    }
    return func_088CB0F8(r->unk_10, 0, 0);
}

}
