#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_408143()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6184B0;
  for ( i = 1; i < dword_618490; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_618620 )
  {
    free(ptr[1]);
    qword_6184A0 = 256LL;
    off_6184A8 = &unk_618620;
  }
  if ( ptr != (void **)&qword_6184A0 )
  {
    free(ptr);
    off_6184B0 = (__int64)&qword_6184A0;
  }
  dword_618490 = 1;
}
