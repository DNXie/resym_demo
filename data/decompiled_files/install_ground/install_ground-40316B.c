#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40316B(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ebx
  unsigned int v4; // eax
  int v5; // er8
  int v6; // er9

  result = *(unsigned __int8 *)(a2 + 43);
  if ( (_BYTE)result )
  {
    v3 = sub_40E392(a1);
    v4 = (unsigned int)gettext("creating directory %s");
    result = sub_4047EB((_DWORD)stdout, v4, v3, v4, v5, v6, a2);
  }
  return result;
}
