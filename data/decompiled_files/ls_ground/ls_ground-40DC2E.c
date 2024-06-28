#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40DC2E(char *a1, size_t a2, unsigned __int8 *a3, const char *a4)
{
  char *i; // rbx
  size_t v5; // rax
  char *v6; // rbx
  unsigned __int8 v10; // [rsp+27h] [rbp-69h]
  size_t v11; // [rsp+28h] [rbp-68h]
  size_t v12; // [rsp+30h] [rbp-60h]
  size_t v13; // [rsp+38h] [rbp-58h]
  char dest[56]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp-18h]

  v15 = __readfsqword(0x28u);
  v11 = -1LL;
  v13 = strlen(a4);
  v12 = a2;
  memcpy(dest, a1, a2);
  for ( i = &a1[a2]; ; memcpy(i, a4, v13) )
  {
    v10 = *a3;
    if ( *a3 )
    {
      if ( v10 > 0x7Eu )
        v5 = v12;
      else
        v5 = v10;
      v11 = v5;
      ++a3;
    }
    if ( v12 < v11 )
      v11 = v12;
    v6 = &i[-v11];
    v12 -= v11;
    memcpy(v6, &dest[v12], v11);
    if ( !v12 )
      break;
    i = &v6[-v13];
  }
  return v6;
}
