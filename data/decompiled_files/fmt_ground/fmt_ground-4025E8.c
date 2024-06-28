#include "/share/binary_recovery/clang-parser/defs.hh"
char *sub_4025E8()
{
  char *result; // rax
  signed int v1; // [rsp+4h] [rbp-1Ch]
  const void **src; // [rsp+8h] [rbp-18h]
  __int64 i; // [rsp+10h] [rbp-10h]
  const void **j; // [rsp+10h] [rbp-10h]
  __int64 v5; // [rsp+18h] [rbp-8h]

  if ( (_UNKNOWN *)qword_613280 == &unk_609640 )
  {
    result = (char *)fwrite_unlocked(&unk_6082A0, 1uLL, qword_609628 - (_QWORD)&unk_6082A0, stdout);
    qword_609628 = (__int64)&unk_6082A0;
  }
  else
  {
    sub_4027F8();
    src = (const void **)qword_613280;
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    for ( i = qword_609660; i != qword_613280; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_QWORD *)(i + 24) - *(_QWORD *)(*(_QWORD *)(i + 32) + 24LL) < v5 )
      {
        src = (const void **)i;
        v5 = *(_QWORD *)(i + 24) - *(_QWORD *)(*(_QWORD *)(i + 32) + 24LL);
      }
      if ( v5 <= 0x7FFFFFFFFFFFFFF6LL )
        v5 += 9LL;
    }
    sub_402B3A(src);
    memmove(&unk_6082A0, *src, qword_609628 - (_QWORD)*src);
    v1 = (unsigned int)*src - (_DWORD)&unk_6082A0;
    qword_609628 -= v1;
    for ( j = src; (unsigned __int64)j <= qword_613280; j += 5 )
      *j = (char *)*j - v1;
    memmove(&unk_609640, src, 40 * (0xCCCCCCCCCCCCCCCDLL * ((qword_613280 - (__int64)src) >> 3) + 1));
    result = (char *)(&unk_609640 - (_UNKNOWN *)src + qword_613280);
    qword_613280 = (__int64)result;
  }
  return result;
}
