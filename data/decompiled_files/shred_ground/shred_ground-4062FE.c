#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4062FE()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60D2C0;
  for ( i = 1; i < dword_60D2A0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60D3A0 )
  {
    free(ptr[1]);
    qword_60D2B0 = 256LL;
    off_60D2B8 = &unk_60D3A0;
  }
  if ( ptr != (void **)&qword_60D2B0 )
  {
    free(ptr);
    off_60D2C0 = (__int64)&qword_60D2B0;
  }
  dword_60D2A0 = 1;
}
