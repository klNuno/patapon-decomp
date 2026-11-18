#include "common.h"

typedef struct {
    u8 pad_00[0x54];
    char (*unk_54)[0x80];
    u8 pad_58[0x6F4];
    u8 unk_74C[4];
} Obj_08861D68;

void func_08822918(char *, char *);
void func_08822B3C(char *, char *);
void func_08860828(char *, char *);
char *func_08914AB8(void *);
extern char *D_089F8AD8[];
extern char D_089F8B70[];

void func_08861D68(Obj_08861D68 *arg0, char *arg1, s32 arg2, char *arg3, s32 arg4) {
    char buf[0x78];
    char *s;

    if (arg4 == -2) {
        s = func_08914AB8(arg0->unk_74C);
    } else if (arg4 < 0) {
        s = D_089F8B70;
    } else {
        s = arg0->unk_54[arg4];
    }
    func_08822B3C(buf, arg1);
    func_08860828(buf, buf);
    func_08822B3C(arg3, D_089F8AD8[arg2]);
    func_08822918(arg3, s);
    func_08822918(arg3, buf);
}
