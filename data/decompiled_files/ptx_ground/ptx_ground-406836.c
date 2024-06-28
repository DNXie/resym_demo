#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_406836(const char *a1, __int64 a2)
{
  char *v2; // rax
  char *result; // rax
  size_t v4; // rbx
  size_t v5; // rax
  char *ptr; // [rsp+18h] [rbp-68h]
  char *v7; // [rsp+20h] [rbp-60h]
  __int64 v8; // [rsp+28h] [rbp-58h]
  __int64 v9; // [rsp+30h] [rbp-50h]
  char *s1; // [rsp+38h] [rbp-48h]
  char *s; // [rsp+40h] [rbp-40h]
  size_t n; // [rsp+48h] [rbp-38h]
  char *dest; // [rsp+50h] [rbp-30h]
  char *v14; // [rsp+58h] [rbp-28h]
  char *v15; // [rsp+60h] [rbp-20h]
  char *v16; // [rsp+68h] [rbp-18h]

  s1 = gettext(a1);
  s = (char *)sub_40A56A();
  ptr = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  if ( (unsigned int)sub_409F82(s, "UTF-8") )
  {
    ptr = (char *)sub_40983E(a2, "UTF-8", s);
    v8 = (__int64)ptr;
    n = strlen(s);
    dest = (char *)sub_4095E8(n + 11);
    memcpy(dest, s, n);
    memcpy(&dest[n], "//TRANSLIT", 0xBuLL);
    v14 = (char *)sub_40983E(a2, "UTF-8", dest);
    free(dest);
    if ( v14 )
    {
      if ( strchr(v14, 63) )
      {
        free(v14);
      }
      else
      {
        v7 = v14;
        v9 = (__int64)v14;
      }
    }
  }
  else
  {
    v8 = a2;
    v9 = a2;
  }
  if ( v8 )
  {
    v2 = (char *)v8;
  }
  else if ( v9 )
  {
    v2 = (char *)v9;
  }
  else
  {
    v2 = (char *)a1;
  }
  v15 = v2;
  if ( !strcmp(s1, a1) )
  {
    if ( ptr && ptr != v15 )
      free(ptr);
    if ( v7 && v7 != v15 )
      free(v7);
    result = v15;
  }
  else if ( (unsigned __int8)sub_4062C7(s1, (__int64)a1)
         || v8 && (unsigned __int8)sub_4062C7(s1, v8)
         || v9 && (unsigned __int8)sub_4062C7(s1, v9) )
  {
    if ( ptr )
      free(ptr);
    if ( v7 )
      free(v7);
    result = s1;
  }
  else
  {
    v4 = strlen(s1);
    v5 = strlen(v15);
    v16 = (char *)sub_4095E8(v4 + v5 + 4);
    sprintf(v16, "%s (%s)", s1, v15);
    if ( ptr )
      free(ptr);
    if ( v7 )
      free(v7);
    result = v16;
  }
  return result;
}
