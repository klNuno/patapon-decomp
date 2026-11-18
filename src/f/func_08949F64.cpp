#include "common.h"

extern "C" {

void func_0881F120(char *, const char *, u32);
extern s8 D_08A0403E[];
extern char D_08A0414C[];
extern char D_08A04150[];
extern char D_08A04154[];

inline void cassign_08949F64(char *a, u32 n, const char &b) {
    for (; n != 0; n--) {
        *a++ = b;
    }
}

struct Str08949F64 {
    u32 unk_00;
    char unk_04[0x404];

    Str08949F64 &operator=(const Str08949F64 &o) {
        assign(o, o.unk_00);
        return *this;
    }
    void assign(const Str08949F64 &o, u32 n) {
        if (n > 0x400) {
            n = 0x400;
        }
        if (this != &o) {
            func_0881F120(unk_04, o.unk_04, n);
            unk_00 = n;
            cassign_08949F64(unk_04 + n, 1, *(char *)D_08A0403E);
        }
    }
};

typedef struct {
    u32 unk_00;
    u8 pad_04[0x54];
    char unk_58[4];
} E08949F64;

typedef struct N08949F64 {
    struct N08949F64 *unk_00;
    u8 pad_04[4];
    E08949F64 unk_08;
} N08949F64;

typedef struct O08949F64 {
    u8 pad_00[0x10C];
    Str08949F64 unk_10C;
    s32 unk_514;
    s32 unk_518;
    u8 pad_51C[0x1753C - 0x51C];
    N08949F64 *unk_1753C;
} O08949F64;

s32 func_08822AD0(const char *, const char *);
void func_089481D4(Str08949F64 *, Str08949F64 *, const char *);
void func_08949768(O08949F64 *, char *);
void func_0894A088(O08949F64 *);

void func_08949F64(O08949F64 *arg0) {
    struct { N08949F64 *unk_00; } it;
    Str08949F64 s;
    Str08949F64 a;
    Str08949F64 b;
    E08949F64 *e;
    s32 n;

    it.unk_00 = arg0->unk_1753C;
    n = arg0->unk_518 + arg0->unk_514;
    while (n != 0) {
        n--;
        it.unk_00 = it.unk_00->unk_00;
    }
    e = &it.unk_00->unk_08;
    if (e->unk_00 & 0x1000) {
        if (func_08822AD0(e->unk_58, D_08A0414C) == 0) {
            func_0894A088(arg0);
        } else if (func_08822AD0(e->unk_58, D_08A04150) != 0) {
            s = arg0->unk_10C;
            func_089481D4(&a, &s, D_08A04154);
            func_089481D4(&b, &s, e->unk_58);
            func_08949768(arg0, s.unk_04);
        }
    }
}

}
