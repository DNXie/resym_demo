#include "/share/binary_recovery/clang-parser/defs.hh"
__off_t __fastcall sub_40213B(int a1, __off_t a2, int a3, __int64 a4)
{
  char *v5; // rbx
  int *v6; // rax
  char *v7; // rbx
  int *v8; // rax
  char *v9; // rbx
  int *v10; // rax
  __off_t v13; // [rsp+20h] [rbp-40h]
  __int64 v14; // [rsp+28h] [rbp-38h]
  char v15[24]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-18h]

  v16 = __readfsqword(0x28u);
  v13 = lseek(a1, a2, a3);
  if ( v13 < 0 )
  {
    v14 = sub_408CE0(a2, v15);
    if ( a3 == 1 )
    {
      v7 = gettext("%s: cannot seek to relative offset %s");
      v8 = __errno_location();
      error(0, *v8, v7, a4, v14);
    }
    else if ( a3 == 2 )
    {
      v9 = gettext("%s: cannot seek to end-relative offset %s");
      v10 = __errno_location();
      error(0, *v10, v9, a4, v14);
    }
    else
    {
      if ( a3 )
        abort();
      v5 = gettext("%s: cannot seek to offset %s");
      v6 = __errno_location();
      error(0, *v6, v5, a4, v14);
    }
    exit(1);
  }
  return v13;
}
