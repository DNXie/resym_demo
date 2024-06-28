#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4036DE(__int64 a1, __int64 a2, const void *a3, unsigned __int8 *a4)
{
  int result; // eax
  int v6; // [rsp+24h] [rbp-2Ch]
  int v7; // [rsp+28h] [rbp-28h]
  int v8; // [rsp+2Ch] [rbp-24h]
  unsigned __int64 i; // [rsp+38h] [rbp-18h]

  if ( byte_612220 && byte_612221 != 1 && a2 == n && !memcmp(a3, a4, n) )
  {
    result = (unsigned __int8)byte_612404;
    if ( !byte_612404 )
    {
      result = puts("*");
      byte_612404 = 1;
    }
  }
  else
  {
    byte_612404 = 0;
    for ( i = 0LL; ; ++i )
    {
      result = qword_612330;
      if ( i >= qword_612330 )
        break;
      v6 = dword_40E620[*(unsigned int *)(qword_612328 + 40 * i + 4)];
      v7 = n / v6;
      v8 = (n - a2) / v6;
      if ( i )
        printf("%*s", dword_6122E4, &locale);
      else
        qword_612300(a1, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, unsigned __int64, _QWORD, _QWORD))(qword_612328
                                                                                                  + 40 * i
                                                                                                  + 8))(
        v7,
        v8,
        a4,
        qword_612328 + 40 * i + 16,
        *(unsigned int *)(qword_612328 + 40 * i + 28),
        *(unsigned int *)(qword_612328 + 40 * i + 32));
      if ( *(_BYTE *)(qword_612328 + 40 * i + 24) )
      {
        printf(
          "%*s",
          *(_DWORD *)(qword_612328 + 40 * i + 28) * v8 + v8 * *(_DWORD *)(qword_612328 + 40 * i + 32) / v7,
          &locale);
        sub_402442(a2, a4);
      }
      putchar_unlocked(10);
    }
  }
  byte_612221 = 0;
  return result;
}
