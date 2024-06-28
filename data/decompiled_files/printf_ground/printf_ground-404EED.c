#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404EED(__int64 a1, unsigned int a2, int a3)
{
  __int64 (__fastcall *v3)(_QWORD, const char *, __int64); // rax

  if ( a3 )
    v3 = (__int64 (__fastcall *)(_QWORD, const char *, __int64))sub_404E03;
  else
    v3 = (__int64 (__fastcall *)(_QWORD, const char *, __int64))sub_404E8C;
  return sub_404B43(a2, (__int64 (__fastcall *)(char *, signed __int64, __int64))sub_404DC3, v3, a1);
}
