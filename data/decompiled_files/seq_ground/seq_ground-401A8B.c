#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_401A8B(_BYTE *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  unsigned int v7; // er12
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 v13; // rax
  bool v14; // [rsp+1Fh] [rbp-41h]
  __int64 i; // [rsp+20h] [rbp-40h]
  size_t v16; // [rsp+20h] [rbp-40h]
  size_t v17; // [rsp+20h] [rbp-40h]
  size_t v18; // [rsp+20h] [rbp-40h]
  size_t j; // [rsp+20h] [rbp-40h]
  __int64 v20; // [rsp+28h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-30h]
  size_t n; // [rsp+38h] [rbp-28h]
  void *dest; // [rsp+48h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  for ( i = 0LL; a1[i] != 37 || a1[i + 1] == 37; i += v4 )
  {
    if ( !a1[i] )
    {
      v2 = sub_402A35(a1);
      v3 = gettext("format %s has no %% directive");
      error(1, 0, v3, v2);
    }
    ++v20;
    if ( a1[i] == 37 )
      v4 = 2LL;
    else
      v4 = 1LL;
  }
  v16 = strspn(&a1[i + 1], "-+#0 '") + i + 1;
  v17 = strspn(&a1[v16], "0123456789") + v16;
  if ( a1[v17] == 46 )
    v17 += strspn(&a1[v17 + 1], "0123456789") + 1;
  n = v17;
  v14 = a1[v17] == 76;
  v18 = v14 + v17;
  if ( !a1[v18] )
  {
    v5 = sub_402A35(a1);
    v6 = gettext("format %s ends in %%");
    error(1, 0, v6, v5);
  }
  if ( !strchr("efgaEFGA", (char)a1[v18]) )
  {
    v7 = (char)a1[v18];
    v8 = sub_402A35(a1);
    v9 = gettext("format %s has unknown %%%c directive");
    error(1, 0, v9, v8, v7);
  }
  for ( j = v18 + 1; ; j += v13 )
  {
    if ( a1[j] == 37 && a1[j + 1] != 37 )
    {
      v10 = sub_402A35(a1);
      v11 = gettext("format %s has too many %% directives");
      error(1, 0, v11, v10);
      goto LABEL_23;
    }
    if ( !a1[j] )
      break;
    ++v21;
LABEL_23:
    if ( a1[j] == 37 )
      v13 = 2LL;
    else
      v13 = 1LL;
  }
  dest = (void *)sub_404B67(j + 2);
  memcpy(dest, a1, n);
  *((_BYTE *)dest + n) = 76;
  strcpy((char *)dest + n + 1, &a1[n + v14]);
  *a2 = v20;
  a2[1] = v21;
  return dest;
}
