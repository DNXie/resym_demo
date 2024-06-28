#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401B70(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int16 v10; // [rsp+10h] [rbp-60h]
  const char *format; // [rsp+28h] [rbp-48h]
  const char *formata; // [rsp+28h] [rbp-48h]
  char v13; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v14[15]; // [rsp+31h] [rbp-3Fh] BYREF
  char v15; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v16[23]; // [rsp+41h] [rbp-2Fh] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-18h]

  v10 = a3;
  v17 = __readfsqword(0x28u);
  if ( a4 )
  {
    sub_402D99(a3, &v13);
    v14[9] = 0;
    sub_402D99(a2, &v15);
    v16[9] = 0;
    switch ( a4 )
    {
      case 2:
        format = gettext("failed to change mode of %s from %04lo (%s) to %04lo (%s)\n");
        break;
      case 3:
        formata = gettext("mode of %s retained as %04lo (%s)\n");
        v6 = sub_403631(a1);
        printf(formata, v6, v10 & 0xFFF, v14);
        return __readfsqword(0x28u) ^ v17;
      case 1:
        format = gettext("mode of %s changed from %04lo (%s) to %04lo (%s)\n");
        break;
      default:
        abort();
    }
    v7 = sub_403631(a1);
    printf(format, v7, a2 & 0xFFF, v16, v10 & 0xFFF, v14);
    return __readfsqword(0x28u) ^ v17;
  }
  v4 = sub_403631(a1);
  v5 = gettext("neither symbolic link %s nor referent has been changed\n");
  printf(v5, v4);
  return __readfsqword(0x28u) ^ v17;
}
