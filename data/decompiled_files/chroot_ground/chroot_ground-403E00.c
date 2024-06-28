#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_403E00(char *a1, int *a2, __gid_t *a3, char **a4, void **a5)
{
  char *v9; // [rsp+38h] [rbp-18h]
  char *v10; // [rsp+40h] [rbp-10h]
  char *v11; // [rsp+48h] [rbp-8h]

  v10 = strchr(a1, 58);
  v9 = sub_403A56(a1, v10, a2, a3, a4, a5);
  if ( !v10 )
  {
    if ( v9 )
    {
      v11 = strchr(a1, 46);
      if ( v11 )
      {
        if ( !sub_403A56(a1, v11, a2, a3, a4, a5) )
          v9 = 0LL;
      }
    }
  }
  return v9;
}
