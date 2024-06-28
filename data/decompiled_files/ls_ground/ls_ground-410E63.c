#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_410E63()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_61D5B0;
  for ( i = 1; i < dword_61D590; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_61E220 )
  {
    free(ptr[1]);
    qword_61D5A0 = 256LL;
    off_61D5A8 = &unk_61E220;
  }
  if ( ptr != (void **)&qword_61D5A0 )
  {
    free(ptr);
    off_61D5B0 = &qword_61D5A0;
  }
  dword_61D590 = 1;
}
