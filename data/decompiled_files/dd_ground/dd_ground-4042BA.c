#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4042BA(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // er8
  int v8; // er9
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  char v13; // [rsp+17h] [rbp-A9h]
  unsigned int v14; // [rsp+18h] [rbp-A8h]
  int v15; // [rsp+1Ch] [rbp-A4h]
  struct stat stat_buf; // [rsp+20h] [rbp-A0h] BYREF

  if ( (a2 & 0xFFFDFEFF) != 0 )
  {
    v15 = sub_409105(a1, 3, a3, a4, a5, a6);
    v14 = v15 | a2 & 0xFFFDFEFF;
    v13 = 1;
    if ( v15 >= 0 )
    {
      if ( v15 != v14 )
      {
        if ( (v14 & 0x10000) != 0 )
        {
          if ( (unsigned int)sub_409AF0(a1, &stat_buf) )
          {
            v13 = 0;
          }
          else if ( (v14 & 0x10000) != 0 && (stat_buf.st_mode & 0xF000) != 0x4000 )
          {
            *__errno_location() = 20;
            v13 = 0;
          }
          v14 &= 0xFFFEFFFF;
        }
        if ( v13 && v15 != v14 && (unsigned int)sub_409105(a1, 4, v14, v6, v7, v8) == -1 )
          v13 = 0;
      }
    }
    else
    {
      v13 = 0;
    }
    if ( v13 != 1 )
    {
      v9 = sub_40685B(a3);
      v10 = gettext("setting flags for %s");
      v11 = __errno_location();
      error(1, *v11, v10, v9);
    }
  }
}
