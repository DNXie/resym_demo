#include "/share/binary_recovery/clang-parser/defs.hh"
__off_t __fastcall sub_4038B8(__int64 a1, int a2, __off_t a3, int a4)
{
  __int64 v4; // rbx
  char *v5; // rax
  bool v9; // [rsp+27h] [rbp-79h]
  __off_t v10; // [rsp+28h] [rbp-78h]
  char v11[8]; // [rsp+30h] [rbp-70h] BYREF
  __int64 v12; // [rsp+38h] [rbp-68h]
  int v13; // [rsp+58h] [rbp-48h]
  int v14; // [rsp+5Ch] [rbp-44h]
  __int64 v15[5]; // [rsp+60h] [rbp-40h] BYREF
  int v16; // [rsp+88h] [rbp-18h]
  int v17; // [rsp+8Ch] [rbp-14h]

  v9 = ioctl(a2, 0x80306D02uLL, v11) == 0;
  v10 = lseek(a2, a3, a4);
  if ( v10 >= 0 && v9 && !ioctl(a2, 0x80306D02uLL, v15) && v12 == v15[1] && v13 == v16 && v14 == v17 )
  {
    v4 = v15[0];
    v5 = gettext(
           "warning: working around lseek kernel bug for file (%s)\n"
           "  of mt_type=0x%0lx -- see <sys/mtio.h> for the list of types");
    error(0, 0, v5, a1, v4);
    *__errno_location() = 0;
    v10 = -1LL;
  }
  return v10;
}
