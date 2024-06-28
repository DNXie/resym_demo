#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_403481(int a1, __int64 a2, __int64 a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  _BYTE *result; // rax
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  _BYTE *v9; // [rsp+28h] [rbp-18h]

  v9 = (_BYTE *)(strlen((const char *)a3) - 1 + a3);
  if ( *v9 != 125 )
  {
    v3 = gettext("%s: `}' is required in repeat count");
    error(1, 0, v3, a3);
  }
  *v9 = 0;
  if ( (_BYTE *)(a3 + 1) == v9 - 1 && *(_BYTE *)(a3 + 1) == 42 )
  {
    *(_BYTE *)(a2 + 28) = 1;
  }
  else
  {
    if ( (unsigned int)sub_407663(a3 + 1, 0LL, 10LL, &v8, locale) )
    {
      v4 = *(_QWORD *)(8LL * a1 + qword_60B388);
      v5 = gettext("%s}: integer required between `{' and `}'");
      error(1, 0, v5, v4);
    }
    *(_QWORD *)(a2 + 16) = v8;
  }
  result = v9;
  *v9 = 125;
  return result;
}
