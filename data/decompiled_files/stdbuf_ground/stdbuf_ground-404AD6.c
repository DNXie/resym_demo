#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404AD6()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6122A0;
  for ( i = 1; i < dword_612280; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6123E0 )
  {
    free(ptr[1]);
    qword_612290 = 256LL;
    off_612298 = &unk_6123E0;
  }
  if ( ptr != (void **)&qword_612290 )
  {
    free(ptr);
    off_6122A0 = &qword_612290;
  }
  dword_612280 = 1;
}
