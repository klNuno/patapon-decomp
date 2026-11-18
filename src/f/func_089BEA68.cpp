#include "common.h"

extern "C" {

class C {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44(s32);
};

typedef struct {
    u8 pad_00[0x10];
    C *unk_10;
} N;

struct It {
    N *unk_00;
    It(const It &o) : unk_00(o.unk_00) {}
};

struct CIt {
    N *unk_00;
    CIt(const It &i) : unk_00(i.unk_00) {}
};

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} T;

typedef struct {
    u8 pad_00[0xCC8];
    u8 unk_CC8[8];
    T *unk_CD0;
} S;

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
It func_0897C818(void *, s32);
s32 func_089C6430(u8 *);
void func_089C6548(void *, s32, s32, s32);

inline N *endof(u8 *m) { return (N *)(m + 0x9C); }

inline bool ne(N *b, CIt a) { return a.unk_00 != b; }

s32 func_089BEA68(S *arg0) {
    s32 temp = func_089C6430(arg0->unk_CC8);
    switch (temp) {
    case 0:
        break;
    case 1:
        if ((u32)(arg0->unk_CD0->unk_04 - 0x104) < 3U) {
            u8 *p = func_089B53D8(func_088586E8()) + 0x14;
            It it = func_0897C818(p, 1);
            if (ne(endof(p), CIt(it))) {
                it.unk_00->unk_10->unk_44(0x40);
            }
        }
        break;
    case 2:
    case 3:
        func_089C6548(arg0->unk_CC8, 0, 0, 0);
        break;
    }
    return temp;
}

}
