#include "common.h"

typedef struct {
    u8 pad_00[0x54];
    char (*unk_54)[0x80];
    u8 pad_58[0x6F4];
    u8 unk_74C[0xAFC];
    u8 unk_1248[0x4];
} Obj_08861E28;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} Res1_08861E28;

void func_08822918(char *, char *);
void func_08822B3C(char *, char *);
void func_08860828(char *, char *);
char *func_08914AB8(void *);
s32 func_08863980(Obj_08861E28 *);
s32 func_08863A98(Obj_08861E28 *);
Res1_08861E28 *func_0896A6C4(void *, char *);
s32 sceKernelDelayThreadCB(u32);
s32 sceIoOpen(const char *, s32, s32);
s64 sceIoLseek(s32, s64, s32);
s32 sceIoClose(s32);
extern char *D_089F8AD8[];
extern char D_089F8B70[];

s32 func_08861E28(Obj_08861E28 *arg0, char *arg1, s32 arg2) {
    char path[0x78];
    char buf[0x78];
    char *s;
    Res1_08861E28 *r;
    s32 ret;
    s32 fd;

    r = func_0896A6C4(arg0->unk_1248, arg1);
    if (r != NULL) {
        ret = r->unk_04;
    } else {
        if (arg2 == -2) {
            s = func_08914AB8(arg0->unk_74C);
        } else if (arg2 < 0) {
            s = D_089F8B70;
        } else {
            s = arg0->unk_54[arg2];
        }
        func_08822B3C(buf, arg1);
        func_08860828(buf, buf);
        func_08822B3C(path, D_089F8AD8[0]);
        func_08822918(path, s);
        func_08822918(path, buf);
        while (func_08863980(arg0) < 0) {
            sceKernelDelayThreadCB(10000);
        }
        if ((fd = sceIoOpen(path, 1, 0)) < 0) {
            func_08863A98(arg0);
            return 0;
        }
        ret = sceIoLseek(fd, 0, 2);
        sceIoClose(fd);
        func_08863A98(arg0);
    }
    return ret;
}
