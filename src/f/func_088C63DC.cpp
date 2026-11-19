#include "common.h"

extern "C" {

class T {
    u8 pad_00[0x100];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

class U {
    u8 pad_00[0x8100];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

typedef struct {
    u8 pad_00[0x10];
    T unk_10;
    u8 pad_114[0x19DC];
    U unk_1AF0;
    u8 pad_9BF4[0x288AC];
    char unk_324A0;
} S;

extern void func_088CE14C(char *);

void func_088C63DC(S *arg0) {
    (&arg0->unk_1AF0)->unk_14();
    func_088CE14C(&arg0->unk_324A0);
    (&arg0->unk_1AF0)->unk_18();
    (&arg0->unk_10)->unk_14();
}

}
