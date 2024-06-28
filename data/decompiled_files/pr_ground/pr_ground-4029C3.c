#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_4029C3(unsigned __int8 *a1, char a2, unsigned __int8 *a3, _DWORD *a4)
{
  _DWORD *result; // rax
  __int64 v5; // r12
  char *v6; // rax
  unsigned __int8 *v8; // [rsp+18h] [rbp-28h]
  __int64 v9[3]; // [rsp+28h] [rbp-18h] BYREF

  v8 = a1;
  if ( (unsigned int)((char)*a1 - 48) > 9 )
  {
    v8 = a1 + 1;
    *a3 = *a1;
  }
  result = (_DWORD *)*v8;
  if ( (_BYTE)result )
  {
    if ( (unsigned int)sub_40A9E8(v8, 0LL, 10LL, v9, &locale) || v9[0] <= 0 || v9[0] > 0x7FFFFFFF )
    {
      v5 = sub_405B47(v8);
      v6 = gettext("`-%c' extra characters or invalid number in the argument: %s");
      error(0, 0, v6, (unsigned int)a2, v5);
      sub_40517C(1LL);
    }
    result = a4;
    *a4 = v9[0];
  }
  return result;
}
