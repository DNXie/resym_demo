#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4068EA(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax
  char *v4; // rax

  *(_QWORD *)(a2 + 8) = sub_40B0F3(a1, *(_QWORD *)(a2 + 64));
  result = *(_QWORD *)(a2 + 8);
  if ( !result )
  {
    v4 = gettext("cannot read symbolic link %s");
    result = sub_405087(a3, v4, a1);
  }
  return result;
}
