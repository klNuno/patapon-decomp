#include "common.h"

extern "C" {

void func_0881F120(char *, const char *, u32);
extern s8 D_08A0403E[];

inline void cassign_0894A088(char *a, u32 n, const char &b) {
    for (; n != 0; n--) {
        *a++ = b;
    }
}

struct Str0894A088 {
    u32 unk_00;
    char unk_04[0x404];

    Str0894A088 &operator=(const Str0894A088 &o) {
        assign(o, o.unk_00);
        return *this;
    }
    void assign(const Str0894A088 &o, u32 n) {
        if (n > 0x400) {
            n = 0x400;
        }
        if (this != &o) {
            func_0881F120(unk_04, o.unk_04, n);
            unk_00 = n;
            cassign_0894A088(unk_04 + n, 1, *(char *)D_08A0403E);
        }
    }
    void assignN(const Str0894A088 &o, u32 count) {
        u32 n = o.unk_00;
        if (count < n) {
            n = count;
        }
        if (this != &o) {
            func_0881F120(unk_04, o.unk_04, n);
            unk_00 = n;
            cassign_0894A088(unk_04 + n, 1, *(char *)D_08A0403E);
        }
    }
    void pop() {
        unk_00--;
        cassign_0894A088(unk_04 + unk_00, 1, *(char *)D_08A0403E);
    }
    s32 rfind(char c, u32 pos) const {
        const char *p;
        u32 n = unk_00;
        if (n == 0) {
            return -1;
        }
        n--;
        if (pos > n) {
            pos = n;
        }
        for (p = unk_04 + (pos + 1); p != unk_04; p--) {
            if (p[-1] == c) {
                s32 r = p - unk_04;
                return r - 1;
            }
        }
        return -1;
    }
};

typedef struct O0894A088 {
    u8 pad_00[0x10C];
    Str0894A088 unk_10C;
} O0894A088;

void func_08949768(O0894A088 *, char *);

void func_0894A088(O0894A088 *arg0) {
    Str0894A088 s;
    s32 pos;

    s = arg0->unk_10C;
    s.pop();
    pos = s.rfind('/', -1);
    if (pos != -1) {
        s.assignN(arg0->unk_10C, pos);
        func_08949768(arg0, s.unk_04);
    }
}

}
