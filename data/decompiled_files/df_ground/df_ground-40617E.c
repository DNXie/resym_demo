#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40617E(const char *a1, unsigned __int64 *a2, int a3, char a4)
{
  unsigned __int64 size; // [rsp+28h] [rbp-28h]
  unsigned __int64 v8; // [rsp+30h] [rbp-20h]
  void *ptr; // [rsp+38h] [rbp-18h]
  unsigned __int64 v10; // [rsp+40h] [rbp-10h]
  _BYTE *v11; // [rsp+48h] [rbp-8h]

  v10 = *a2;
  size = *a2;
  v8 = *a2;
  ptr = 0LL;
  while ( v8 >= size )
  {
    size = v8 + 1;
    v11 = realloc(ptr, v8 + 1);
    if ( !v11 )
    {
      free(ptr);
      return 0LL;
    }
    ptr = v11;
    *a2 = v10;
    v8 = sub_405DFA(a1, v11, size, a2, a3, a4);
    if ( v8 == -1LL )
    {
      free(v11);
      return 0LL;
    }
  }
  return ptr;
}
