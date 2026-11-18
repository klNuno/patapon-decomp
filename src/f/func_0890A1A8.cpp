#include "common.h"

extern "C" {

class C_0890A1A8 {
public:
    u8 pad_00[0x28];
    virtual void unk_08(s32);
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual s32 unk_18();
};

typedef struct {
    u8 pad_00[0x100];
    C_0890A1A8 *unk_100;
    u8 pad_104[0x4];
    s32 unk_108;
} S0890A1A8;

void func_0881F5C0(void *, s32, s32);
void func_088F98E4(s32);

void func_0890A1A8(S0890A1A8 *arg0) {
    if (arg0->unk_100 != NULL) {
        arg0->unk_100->unk_10();
        if (arg0->unk_100->unk_18() != 0) {
            if (arg0->unk_100 != NULL) {
                arg0->unk_100->unk_08(-1);
                arg0->unk_100 = NULL;
                func_088F98E4(arg0->unk_108);
                func_0881F5C0(arg0, 0, 0x100);
            }
        }
    }
}

}
