#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
} X_08809F88;

class Buf_08809F88 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32, u8);
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
    u8 pad_04[0x20];
    s32 unk_24;
    u8 pad_28[0x14];
    s32 unk_3C;
    u8 pad_40[0xA];
    u8 unk_4A;
    u8 unk_4B;
};

extern u8 D_089F5FA0[];
extern char D_089F5FF4[];
extern char D_089F6010[];
void __throw(void *, void *, void *);
X_08809F88 *func_0880B0D4(X_08809F88 *, char *);
void func_0880B068(void);
void func_0880B6D8(Buf_08809F88 *, s32);
s32 func_0880A0F0(Buf_08809F88 *);
s32 func_0880A0C8(Buf_08809F88 *);
void func_0880B728(Buf_08809F88 *);
void func_0880B7E8(Buf_08809F88 *);

void func_08809F88(Buf_08809F88 *arg0, s32 arg1) {
    X_08809F88 a;
    X_08809F88 b;
    s32 n;

    if (arg0->unk_1C() < 0) {
        __throw(D_089F5FA0, func_0880B0D4(&a, D_089F5FF4), (void *)func_0880B068);
    }
    func_0880B6D8(arg0, arg1);
    n = arg0->unk_3C;
    if (!(n > 0 && (u32)(arg0->unk_24 * 4) >> 1 >= (u32)n)) {
        if (n > 0 && arg0->unk_4B) {
            arg0->unk_10(0, arg0->unk_4A);
        } else {
            __throw(D_089F5FA0, func_0880B0D4(&b, D_089F6010), (void *)func_0880B068);
        }
    }
    if (func_0880A0F0(arg0)) {
        func_0880B728(arg0);
    } else if (func_0880A0C8(arg0)) {
        func_0880B7E8(arg0);
    }
}

}
