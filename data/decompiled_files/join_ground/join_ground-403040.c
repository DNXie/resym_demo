#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_403040(_QWORD *a1, __int64 a2)
{
  char *v2; // rax
  _QWORD *result; // rax
  __int64 v4; // [rsp+10h] [rbp-10h]

  if ( *a1 != -1LL && *a1 != a2 )
  {
    v4 = *a1 + 1LL;
    v2 = gettext("incompatible join fields %lu, %lu");
    error(1, 0, v2, v4, a2 + 1);
  }
  result = a1;
  *a1 = a2;
  return result;
}
