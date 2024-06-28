#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_4F8519(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  char *result; // rax
  void *v7; // [rsp+28h] [rbp-38h]
  __int64 v8; // [rsp+30h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-28h]
  char *ptr; // [rsp+48h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp-10h]
  __int64 i; // [rsp+58h] [rbp-8h]

  v11 = 0LL;
  ptr = (char *)calloc(0x70uLL, 1uLL);
  if ( !ptr )
    return 0LL;
  if ( (unsigned int)sub_4F6AA1((_QWORD *)ptr + 1, a2) )
  {
    free(ptr);
    result = 0LL;
  }
  else
  {
    ptr[104] = a3 & 0xF | ptr[0] & 0xF0;
    *((_QWORD *)ptr + 10) = ptr + 8;
    for ( i = 0LL; i < *(_QWORD *)(a2 + 8); ++i )
    {
      v9 = *ptr + 16LL * *(_QWORD *)(8 * i + *(_QWORD *)(a2 + 16));
      HIDWORD(v8) = *(unsigned __int8 *)(v9 + 8);
      LODWORD(v8) = (*(_DWORD *)(v9 + 8) >> 8) & 0x3FF;
      if ( v8 != 0x100000000LL )
      {
        ptr[104] = (32 * ((*(_BYTE *)(v9 + 10) & 0x10) != 0 || (ptr[104] & 0x20) != 0)) | ptr[104] & 0xDF;
        if ( HIDWORD(v8) == 2 )
        {
          ptr[104] |= 0x10u;
        }
        else if ( HIDWORD(v8) == 4 )
        {
          ptr[104] |= 0x40u;
        }
        if ( (_DWORD)v8 )
        {
          if ( *((char **)ptr + 10) == ptr + 8 )
          {
            v7 = malloc(0x18uLL);
            if ( !v7 || (*((_QWORD *)ptr + 10) = v7, (unsigned int)sub_4F6AA1(*((_QWORD **)ptr + 10), a2)) )
            {
              sub_4F82A3((void **)ptr);
              return 0LL;
            }
            v11 = 0LL;
            ptr[104] |= 0x80u;
          }
          if ( (v8 & 1) != 0 && (a3 & 1) == 0
            || (v8 & 2) != 0 && (a3 & 1) != 0
            || (v8 & 0x10) != 0 && (a3 & 2) == 0
            || (v8 & 0x40) != 0 && (a3 & 4) == 0 )
          {
            sub_4F7A18((__int64)(ptr + 8), i - v11++);
          }
        }
      }
    }
    if ( (unsigned int)sub_4F80EF(a1, ptr, a4) )
    {
      sub_4F82A3((void **)ptr);
      ptr = 0LL;
    }
    result = ptr;
  }
  return result;
}
