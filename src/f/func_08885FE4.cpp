#include "common.h"

extern "C" {

struct Tag_08885FE4 {};

typedef struct {
    u32 unk_00;
    u32 unk_04;
    char *unk_08;
} S08885FE4;

typedef struct {
    u8 pad_00[0x10C];
    u8 unk_10C[0xC];
} Obj_08885FE4;

extern char D_089FA180[];

void func_0881030C(S08885FE4 *, void *);
void func_08886A60(S08885FE4 *);
void func_0880F3C8(S08885FE4 *, char *);
s32 func_08886A30(S08885FE4 *, S08885FE4 *, s32);
void func_08810258(void *, s32);
S08885FE4 *func_0880F6B4(S08885FE4 *, u32, u32, char *, char *, Tag_08885FE4);
void func_08885C28(void *, void *);

void func_08885FE4(Obj_08885FE4 *arg0) {
    S08885FE4 s;
    S08885FE4 t;
    Tag_08885FE4 tag;
    s32 pos;
    u32 size;
    char *data;

    func_0881030C(&s, arg0->unk_10C);
    func_08886A60(&s);
    func_0880F3C8(&t, D_089FA180);
    pos = func_08886A30(&s, &t, -1);
    func_08810258(&t, -1);
    if (pos != -1) {
        if (!(s.unk_00 & 1)) {
            size = ((u32)(*(u8 *)&s << 24)) >> 25;
        } else {
            size = s.unk_04;
        }
        func_0880F6B4(&s, pos, size - pos, NULL, NULL, tag);
        if (!(s.unk_00 & 1)) {
            data = (char *)&s + 1;
        } else {
            data = s.unk_08;
        }
        func_08885C28(arg0, data);
    }
    func_08810258(&s, -1);
}

}
