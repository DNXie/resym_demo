#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403161(const char *a1, __int64 a2)
{
  int *v2; // rax
  __int64 result; // rax

  if ( !strcmp(a1, "-") )
  {
    *(_QWORD *)(a2 + 8) = gettext("standard input");
    *(_QWORD *)a2 = stdin;
    byte_610379 = 1;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = a1;
    *(_QWORD *)a2 = sub_4055E7(a1, "r");
  }
  if ( *(_QWORD *)a2 )
  {
    sub_4055AD(*(_QWORD *)a2, 2LL);
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 57) = 0;
    ++dword_6103D4;
    result = 1LL;
  }
  else
  {
    byte_61039C = 1;
    if ( byte_6103D8 != 1 )
    {
      v2 = __errno_location();
      error(0, *v2, "%s", a1);
    }
    result = 0LL;
  }
  return result;
}
