#include "common.h"

extern "C" {
class S {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(char *);
};

typedef struct {
    u8 pad_00[0x10A0];
    S *unk_10A0;
} T;

void func_08912FE8(T *);
extern char D_08A04A08[];

void func_0895308C(T *arg0) {
    arg0->unk_10A0->unk_18(D_08A04A08);
    func_08912FE8(arg0);
}
}
