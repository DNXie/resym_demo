#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401AA0(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  char *v13; // rbx
  int *v14; // rax
  char v15; // [rsp+1Ah] [rbp-86h]
  char v16; // [rsp+1Bh] [rbp-85h]
  int range; // [rsp+20h] [rbp-80h]
  int v18; // [rsp+24h] [rbp-7Ch]
  char *v19; // [rsp+28h] [rbp-78h]
  char *v20; // [rsp+30h] [rbp-70h]
  unsigned __int64 v21; // [rsp+38h] [rbp-68h]
  size_t v22; // [rsp+38h] [rbp-68h]
  __int64 offset; // [rsp+40h] [rbp-60h]
  unsigned __int64 offseta; // [rsp+40h] [rbp-60h]
  char *s2; // [rsp+48h] [rbp-58h]
  __int64 n; // [rsp+50h] [rbp-50h]
  int length; // [rsp+58h] [rbp-48h]
  unsigned __int64 v28; // [rsp+78h] [rbp-28h]
  char *v29; // [rsp+88h] [rbp-18h]

  v15 = 1;
  v16 = *src;
  s2 = src + 1;
  n = qword_6082B8 - 1;
  offset = lseek(a1, 0LL, 2);
  if ( offset <= 0 )
    return 1LL;
  v21 = offset % (unsigned __int64)qword_6082C8;
  if ( !(offset % (unsigned __int64)qword_6082C8) )
    v21 = qword_6082C8;
  offseta = offset - v21;
  if ( lseek(a1, offseta, 0) < 0 )
  {
    v3 = sub_404307(a2);
    v4 = gettext("%s: seek failed");
    v5 = __errno_location();
    error(0, *v5, v4, v3);
  }
  if ( sub_404486(a1, dest, v21) == v21 )
  {
    v20 = &dest[v21];
    v19 = &dest[v21];
    if ( qword_6082B0 )
      v19 -= n;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( qword_6082B0 )
        {
          do
          {
            do
              --v19;
            while ( *v19 != v16 );
          }
          while ( n && strncmp(v19 + 1, s2, n) );
        }
        else
        {
          length = (_DWORD)v19 - (_DWORD)dest;
          range = 1 - ((_DWORD)v19 - (_DWORD)dest);
          if ( range > 1 )
          {
            v9 = gettext("record too large");
            error(1, 0, v9);
          }
          if ( range == 1 || (v18 = re_search(&buffer, dest, length, length - 1, range, &regs), v18 == -1) )
          {
            v19 = dest - 1;
          }
          else if ( v18 == -2 )
          {
            v10 = gettext("error in regular expression search");
            error(1, 0, v10);
          }
          else
          {
            v19 = &dest[*regs.start];
            qword_6082B8 = *regs.end - *regs.start;
          }
        }
        if ( v19 < dest )
          break;
        if ( byte_6082A9 )
        {
          v29 = &v19[qword_6082B8];
          if ( v15 != 1 || v29 != v20 )
            sub_401988(v29, (__int64)v20);
          v20 = v29;
          v15 = 0;
        }
        else
        {
          sub_401988(v19, (__int64)v20);
          v20 = v19;
        }
        if ( qword_6082B0 )
          v19 += 1 - qword_6082B8;
      }
      if ( !offseta )
        break;
      v22 = v20 - dest;
      if ( v20 - dest > (unsigned __int64)qword_6082C8 )
      {
        if ( qword_6082B0 )
          v11 = qword_6082B0;
        else
          v11 = 1LL;
        v28 = qword_6082D0;
        qword_6082C8 *= 2LL;
        qword_6082D0 = 2 * qword_6082C8 + qword_6082B0 + 2;
        if ( 2 * qword_6082C8 + qword_6082B0 + 2 < v28 )
          sub_405081();
        dest = (char *)(v11 + sub_404F34(&dest[-v11], qword_6082D0));
      }
      if ( offseta < qword_6082C8 )
      {
        qword_6082C8 = offseta;
        offseta = 0LL;
      }
      else
      {
        offseta -= qword_6082C8;
      }
      if ( lseek(a1, offseta, 0) < 0 )
      {
        v12 = sub_404307(a2);
        v13 = gettext("%s: seek failed");
        v14 = __errno_location();
        error(0, *v14, v13, v12);
      }
      memmove(&dest[qword_6082C8], dest, v22);
      v20 = &dest[qword_6082C8 + v22];
      if ( qword_6082B0 )
        v19 = &dest[qword_6082C8];
      else
        v19 = &dest[qword_6082C8 + v22];
      if ( sub_404486(a1, dest, qword_6082C8) != qword_6082C8 )
        goto LABEL_8;
    }
    sub_401988(dest, (__int64)v20);
    result = 1LL;
  }
  else
  {
LABEL_8:
    v6 = sub_404307(a2);
    v7 = gettext("%s: read error");
    v8 = __errno_location();
    error(0, *v8, v7, v6);
    result = 0LL;
  }
  return result;
}
