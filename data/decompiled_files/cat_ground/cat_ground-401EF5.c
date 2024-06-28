#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_401EF5(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  char *v3; // rbx
  int *v4; // rax

  result = (_QWORD *)(*a2 - a1);
  if ( result )
  {
    if ( (_QWORD *)sub_402F11(1LL, a1, result) != result )
    {
      v3 = gettext("write error");
      v4 = __errno_location();
      error(1, *v4, v3);
    }
    result = a2;
    *a2 = a1;
  }
  return result;
}
