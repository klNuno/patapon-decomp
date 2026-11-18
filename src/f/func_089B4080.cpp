typedef int s32;

extern "C" {

typedef struct V08_0 { virtual void vfunc_08(s32, s32); } V08_0;
extern s32 func_08858B9C(void);

void func_089B4080(s32 arg0) {
    char **temp_v0;

    temp_v0 = (char **) (func_08858B9C());
    ((V08_0 *) (temp_v0))->vfunc_08(arg0, 0x40);
}

}
