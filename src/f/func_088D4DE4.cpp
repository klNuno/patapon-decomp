#include "common.h"
extern "C" {
extern u8 D_08A4625C[];
void *func_088F2288(void *);

class A {
public:
    virtual void unk_08(void);
    virtual void unk_0C(void);
};

typedef struct {
    u8 *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[1];
} T;

T *func_088D4DE4(T *arg0) {
    arg0->unk_00 = D_08A4625C;
    func_088F2288(arg0->unk_10);
    ((A *)arg0)->unk_0C();
    return arg0;
}
}
