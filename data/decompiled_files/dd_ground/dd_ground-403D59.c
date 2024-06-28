#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403D59(unsigned __int64 a1)
{
  __int64 v2; // rbx
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  __off_t v9; // [rsp+10h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-18h]

  if ( byte_60E3C8 != 1 )
  {
    if ( dword_60E3CC == 29 )
      return 1LL;
    *__errno_location() = dword_60E3CC;
  }
  else
  {
    sub_403885(a1);
    byte_60E3D8 = ((unsigned __int8)byte_60E3D8 | (qword_60E3D0 < 0)) != 0;
    if ( byte_60E3D8 )
    {
      v2 = sub_40685B(qword_60E340);
      v3 = gettext("offset overflow while reading file %s");
      error(0, 0, v3, v2);
      return 0LL;
    }
    v9 = lseek(0, 0LL, 1);
    if ( v9 >= 0 )
    {
      if ( v9 == qword_60E3D0 )
        return 1LL;
      v10 = qword_60E3D0 - v9;
      if ( qword_60E3D0 - v9 < 0 || v10 > a1 )
      {
        v4 = gettext("warning: invalid file offset after failed read");
        error(0, 0, v4);
      }
      if ( sub_4038B8(qword_60E340, 0, v10, 1) >= 0 )
        return 1LL;
      if ( !*__errno_location() )
      {
        v5 = gettext("cannot work around kernel bug after all");
        error(0, 0, v5);
      }
    }
  }
  v6 = sub_40685B(qword_60E340);
  v7 = gettext("%s: cannot seek");
  v8 = __errno_location();
  error(0, *v8, v7, v6);
  return 0LL;
}
