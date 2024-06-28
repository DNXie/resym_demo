#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_407918()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60E2C0;
  for ( i = 1; i < dword_60E2A0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60E8E0 )
  {
    free(ptr[1]);
    qword_60E2B0 = 256LL;
    off_60E2B8 = &unk_60E8E0;
  }
  if ( ptr != (void **)&qword_60E2B0 )
  {
    free(ptr);
    off_60E2C0 = (__int64)&qword_60E2B0;
  }
  dword_60E2A0 = 1;
}
