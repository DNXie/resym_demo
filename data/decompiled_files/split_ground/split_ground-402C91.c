#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_402C91(char a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // er8
  int v7; // er9
  const char *v8; // rbx
  int *v9; // rax
  int *v10; // rax
  const char *v11; // rbx
  int *v12; // rax

  if ( a1 )
  {
    if ( !a2 && !a3 && byte_6106A9 )
      return;
    v3 = (unsigned int)dword_6102D8;
    sub_402980(0LL, dword_6102D8, dword_610548, (const char *)dest);
    sub_4023C6();
    dword_6102D8 = sub_4025B0((const char *)dest, v3, v4, v5, v6, v7);
    if ( dword_6102D8 < 0 )
    {
      v8 = (const char *)dest;
      v9 = __errno_location();
      error(1, *v9, "%s", v8);
    }
  }
  if ( sub_405445((unsigned int)dword_6102D8, a2, a3) != a3 )
  {
    v10 = __errno_location();
    if ( !sub_402178(*v10) )
    {
      v11 = (const char *)dest;
      v12 = __errno_location();
      error(1, *v12, "%s", v11);
    }
  }
}
