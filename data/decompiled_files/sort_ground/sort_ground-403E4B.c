#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_403E4B()
{
  bool v0; // al
  const unsigned __int16 *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 c; // [rsp+0h] [rbp-40h]
  unsigned __int64 ca; // [rsp+0h] [rbp-40h]
  size_t i; // [rsp+8h] [rbp-38h]
  __int64 v6; // [rsp+10h] [rbp-30h]
  const char *s; // [rsp+18h] [rbp-28h]
  size_t v8; // [rsp+20h] [rbp-20h]
  char *v9; // [rsp+28h] [rbp-18h]

  for ( c = 0LL; c <= 0xFF; ++c )
  {
    *(_BYTE *)(c + 6411744) = ((*__ctype_b_loc())[(int)c] & 1) != 0;
    *(_BYTE *)(c + 6412000) = ((*__ctype_b_loc())[(int)c] & 0x4000) == 0;
    v0 = ((*__ctype_b_loc())[(int)c] & 8) == 0 && ((*__ctype_b_loc())[(int)c] & 1) == 0;
    *(_BYTE *)(c + 6412256) = v0;
    *(_BYTE *)(c + 6412512) = toupper(c);
  }
  if ( byte_61D5C9 )
  {
    for ( ca = 0LL; ca <= 0xB; ++ca )
    {
      s = nl_langinfo((int)ca + 131086);
      v8 = strlen(s);
      v9 = (char *)sub_414F92(v8 + 1);
      (&off_61D420)[2 * ca] = v9;
      dword_61D428[4 * ca] = ca + 1;
      v6 = 0LL;
      for ( i = 0LL; i < v8; ++i )
      {
        v1 = *__ctype_b_loc();
        if ( (v1[(unsigned __int8)sub_402B35(s[i])] & 1) == 0 )
        {
          v2 = v6++;
          v9[v2] = byte_61D8E0[(unsigned __int8)sub_402B35(s[i])];
        }
      }
      v9[v6] = 0;
    }
    qsort(&off_61D420, 0xCuLL, 0x10uLL, compar);
  }
}
