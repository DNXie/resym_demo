#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4020B1(__int64 a1)
{
  __int64 v1; // r12
  char *v2; // rbx
  int *v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  void *result; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // [rsp+10h] [rbp-C0h]
  _QWORD *v10; // [rsp+18h] [rbp-B8h]
  char v11[16]; // [rsp+20h] [rbp-B0h] BYREF
  struct stat stat_buf; // [rsp+30h] [rbp-A0h] BYREF

  v9 = 1LL;
  v10 = (_QWORD *)sub_4052C0(v11);
  if ( !v10 )
  {
    v1 = sub_40280C("/");
    v2 = gettext("failed to get attributes of %s");
    v3 = __errno_location();
    error(1, *v3, v2, v1);
  }
  if ( (int)sub_405640(".", &stat_buf) < 0 )
  {
    v4 = sub_40280C(".");
    v5 = gettext("failed to stat %s");
    v6 = __errno_location();
    error(1, *v6, v5, v4);
  }
  while ( stat_buf.st_ino != *v10 || stat_buf.st_dev != v10[1] )
  {
    v8 = v9++;
    sub_401CDE(&stat_buf, a1, v8);
  }
  result = (void *)**(unsigned __int8 **)(a1 + 16);
  if ( !(_BYTE)result )
    result = sub_401B3F(a1, &locale, 0LL);
  return result;
}
