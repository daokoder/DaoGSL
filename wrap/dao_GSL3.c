#include"dao_GSL.h"
DaoRoutine* Dao_Get_Object_Method( DaoCdata *cd, DaoObject **obj, const char *name )
{
  DaoRoutine *meth;
  if( cd == NULL ) return NULL;
  *obj = DaoCdata_GetObject( cd );
  if( *obj == NULL ) return NULL;
  meth = DaoObject_GetMethod( *obj, name );
  if( meth == NULL ) return NULL;
  if( DaoRoutine_IsWrapper( meth ) ) return NULL; /*do not call C function*/
  return meth;
}
static int DaoPF10293( int *_cs, DaoRoutine *_ro, DaoObject *_ob, double t, const double* y, double* dydt, DaoValue *params )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  int X = (int) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewDouble( _proc, (double) t );
  DaoProcess_NewVectorD( _proc, (double*) y, 0 );
  DaoProcess_NewVectorD( _proc, (double*) dydt, 0 );
  DaoProcess_CacheValue( _proc, params );
  _dp = DaoProcess_GetLastValues( _proc, 4 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 4 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 4 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) X=(int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
  return X;
}
static int DaoPF10294( int *_cs, DaoRoutine *_ro, DaoObject *_ob, double t, const double* y, double* dfdy, double* dydt, DaoValue *params )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  int X = (int) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewDouble( _proc, (double) t );
  DaoProcess_NewVectorD( _proc, (double*) y, 0 );
  DaoProcess_NewDouble( _proc, (double) *dfdy );
  DaoProcess_NewVectorD( _proc, (double*) dydt, 0 );
  DaoProcess_CacheValue( _proc, params );
  _dp = DaoProcess_GetLastValues( _proc, 5 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 5 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 5 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) X=(int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
  return X;
}
gsl_complex_long_double* Dao_gsl_complex_long_double_New()
{
	gsl_complex_long_double *self = (gsl_complex_long_double*) calloc( 1, sizeof(gsl_complex_long_double) );
	return self;
}
gsl_complex* Dao_gsl_complex_New()
{
	gsl_complex *self = (gsl_complex*) calloc( 1, sizeof(gsl_complex) );
	return self;
}
gsl_complex_float* Dao_gsl_complex_float_New()
{
	gsl_complex_float *self = (gsl_complex_float*) calloc( 1, sizeof(gsl_complex_float) );
	return self;
}
struct gsl_block_long_double_struct* Dao_gsl_block_long_double_struct_New()
{
	struct gsl_block_long_double_struct *self = (struct gsl_block_long_double_struct*) calloc( 1, sizeof(struct gsl_block_long_double_struct) );
	return self;
}
gsl_vector_long_double* Dao_gsl_vector_long_double_New()
{
	gsl_vector_long_double *self = (gsl_vector_long_double*) calloc( 1, sizeof(gsl_vector_long_double) );
	return self;
}
_gsl_vector_long_double_view* Dao__gsl_vector_long_double_view_New()
{
	_gsl_vector_long_double_view *self = (_gsl_vector_long_double_view*) calloc( 1, sizeof(_gsl_vector_long_double_view) );
	return self;
}
_gsl_vector_long_double_const_view* Dao__gsl_vector_long_double_const_view_New()
{
	_gsl_vector_long_double_const_view *self = (_gsl_vector_long_double_const_view*) calloc( 1, sizeof(_gsl_vector_long_double_const_view) );
	return self;
}
struct gsl_block_complex_long_double_struct* Dao_gsl_block_complex_long_double_struct_New()
{
	struct gsl_block_complex_long_double_struct *self = (struct gsl_block_complex_long_double_struct*) calloc( 1, sizeof(struct gsl_block_complex_long_double_struct) );
	return self;
}
gsl_vector_complex_long_double* Dao_gsl_vector_complex_long_double_New()
{
	gsl_vector_complex_long_double *self = (gsl_vector_complex_long_double*) calloc( 1, sizeof(gsl_vector_complex_long_double) );
	return self;
}
_gsl_vector_complex_long_double_view* Dao__gsl_vector_complex_long_double_view_New()
{
	_gsl_vector_complex_long_double_view *self = (_gsl_vector_complex_long_double_view*) calloc( 1, sizeof(_gsl_vector_complex_long_double_view) );
	return self;
}
_gsl_vector_complex_long_double_const_view* Dao__gsl_vector_complex_long_double_const_view_New()
{
	_gsl_vector_complex_long_double_const_view *self = (_gsl_vector_complex_long_double_const_view*) calloc( 1, sizeof(_gsl_vector_complex_long_double_const_view) );
	return self;
}
struct gsl_block_struct* Dao_gsl_block_struct_New()
{
	struct gsl_block_struct *self = (struct gsl_block_struct*) calloc( 1, sizeof(struct gsl_block_struct) );
	return self;
}
gsl_vector* Dao_gsl_vector_New()
{
	gsl_vector *self = (gsl_vector*) calloc( 1, sizeof(gsl_vector) );
	return self;
}
_gsl_vector_view* Dao__gsl_vector_view_New()
{
	_gsl_vector_view *self = (_gsl_vector_view*) calloc( 1, sizeof(_gsl_vector_view) );
	return self;
}
_gsl_vector_const_view* Dao__gsl_vector_const_view_New()
{
	_gsl_vector_const_view *self = (_gsl_vector_const_view*) calloc( 1, sizeof(_gsl_vector_const_view) );
	return self;
}
struct gsl_block_complex_struct* Dao_gsl_block_complex_struct_New()
{
	struct gsl_block_complex_struct *self = (struct gsl_block_complex_struct*) calloc( 1, sizeof(struct gsl_block_complex_struct) );
	return self;
}
gsl_vector_complex* Dao_gsl_vector_complex_New()
{
	gsl_vector_complex *self = (gsl_vector_complex*) calloc( 1, sizeof(gsl_vector_complex) );
	return self;
}
_gsl_vector_complex_view* Dao__gsl_vector_complex_view_New()
{
	_gsl_vector_complex_view *self = (_gsl_vector_complex_view*) calloc( 1, sizeof(_gsl_vector_complex_view) );
	return self;
}
_gsl_vector_complex_const_view* Dao__gsl_vector_complex_const_view_New()
{
	_gsl_vector_complex_const_view *self = (_gsl_vector_complex_const_view*) calloc( 1, sizeof(_gsl_vector_complex_const_view) );
	return self;
}
struct gsl_block_float_struct* Dao_gsl_block_float_struct_New()
{
	struct gsl_block_float_struct *self = (struct gsl_block_float_struct*) calloc( 1, sizeof(struct gsl_block_float_struct) );
	return self;
}
gsl_vector_float* Dao_gsl_vector_float_New()
{
	gsl_vector_float *self = (gsl_vector_float*) calloc( 1, sizeof(gsl_vector_float) );
	return self;
}
_gsl_vector_float_view* Dao__gsl_vector_float_view_New()
{
	_gsl_vector_float_view *self = (_gsl_vector_float_view*) calloc( 1, sizeof(_gsl_vector_float_view) );
	return self;
}
_gsl_vector_float_const_view* Dao__gsl_vector_float_const_view_New()
{
	_gsl_vector_float_const_view *self = (_gsl_vector_float_const_view*) calloc( 1, sizeof(_gsl_vector_float_const_view) );
	return self;
}
struct gsl_block_complex_float_struct* Dao_gsl_block_complex_float_struct_New()
{
	struct gsl_block_complex_float_struct *self = (struct gsl_block_complex_float_struct*) calloc( 1, sizeof(struct gsl_block_complex_float_struct) );
	return self;
}
gsl_vector_complex_float* Dao_gsl_vector_complex_float_New()
{
	gsl_vector_complex_float *self = (gsl_vector_complex_float*) calloc( 1, sizeof(gsl_vector_complex_float) );
	return self;
}
_gsl_vector_complex_float_view* Dao__gsl_vector_complex_float_view_New()
{
	_gsl_vector_complex_float_view *self = (_gsl_vector_complex_float_view*) calloc( 1, sizeof(_gsl_vector_complex_float_view) );
	return self;
}
_gsl_vector_complex_float_const_view* Dao__gsl_vector_complex_float_const_view_New()
{
	_gsl_vector_complex_float_const_view *self = (_gsl_vector_complex_float_const_view*) calloc( 1, sizeof(_gsl_vector_complex_float_const_view) );
	return self;
}
struct gsl_block_ulong_struct* Dao_gsl_block_ulong_struct_New()
{
	struct gsl_block_ulong_struct *self = (struct gsl_block_ulong_struct*) calloc( 1, sizeof(struct gsl_block_ulong_struct) );
	return self;
}
gsl_vector_ulong* Dao_gsl_vector_ulong_New()
{
	gsl_vector_ulong *self = (gsl_vector_ulong*) calloc( 1, sizeof(gsl_vector_ulong) );
	return self;
}
_gsl_vector_ulong_view* Dao__gsl_vector_ulong_view_New()
{
	_gsl_vector_ulong_view *self = (_gsl_vector_ulong_view*) calloc( 1, sizeof(_gsl_vector_ulong_view) );
	return self;
}
_gsl_vector_ulong_const_view* Dao__gsl_vector_ulong_const_view_New()
{
	_gsl_vector_ulong_const_view *self = (_gsl_vector_ulong_const_view*) calloc( 1, sizeof(_gsl_vector_ulong_const_view) );
	return self;
}
struct gsl_block_long_struct* Dao_gsl_block_long_struct_New()
{
	struct gsl_block_long_struct *self = (struct gsl_block_long_struct*) calloc( 1, sizeof(struct gsl_block_long_struct) );
	return self;
}
gsl_vector_long* Dao_gsl_vector_long_New()
{
	gsl_vector_long *self = (gsl_vector_long*) calloc( 1, sizeof(gsl_vector_long) );
	return self;
}
_gsl_vector_long_view* Dao__gsl_vector_long_view_New()
{
	_gsl_vector_long_view *self = (_gsl_vector_long_view*) calloc( 1, sizeof(_gsl_vector_long_view) );
	return self;
}
_gsl_vector_long_const_view* Dao__gsl_vector_long_const_view_New()
{
	_gsl_vector_long_const_view *self = (_gsl_vector_long_const_view*) calloc( 1, sizeof(_gsl_vector_long_const_view) );
	return self;
}
struct gsl_block_uint_struct* Dao_gsl_block_uint_struct_New()
{
	struct gsl_block_uint_struct *self = (struct gsl_block_uint_struct*) calloc( 1, sizeof(struct gsl_block_uint_struct) );
	return self;
}
gsl_vector_uint* Dao_gsl_vector_uint_New()
{
	gsl_vector_uint *self = (gsl_vector_uint*) calloc( 1, sizeof(gsl_vector_uint) );
	return self;
}
_gsl_vector_uint_view* Dao__gsl_vector_uint_view_New()
{
	_gsl_vector_uint_view *self = (_gsl_vector_uint_view*) calloc( 1, sizeof(_gsl_vector_uint_view) );
	return self;
}
_gsl_vector_uint_const_view* Dao__gsl_vector_uint_const_view_New()
{
	_gsl_vector_uint_const_view *self = (_gsl_vector_uint_const_view*) calloc( 1, sizeof(_gsl_vector_uint_const_view) );
	return self;
}
struct gsl_block_int_struct* Dao_gsl_block_int_struct_New()
{
	struct gsl_block_int_struct *self = (struct gsl_block_int_struct*) calloc( 1, sizeof(struct gsl_block_int_struct) );
	return self;
}
gsl_vector_int* Dao_gsl_vector_int_New()
{
	gsl_vector_int *self = (gsl_vector_int*) calloc( 1, sizeof(gsl_vector_int) );
	return self;
}
_gsl_vector_int_view* Dao__gsl_vector_int_view_New()
{
	_gsl_vector_int_view *self = (_gsl_vector_int_view*) calloc( 1, sizeof(_gsl_vector_int_view) );
	return self;
}
_gsl_vector_int_const_view* Dao__gsl_vector_int_const_view_New()
{
	_gsl_vector_int_const_view *self = (_gsl_vector_int_const_view*) calloc( 1, sizeof(_gsl_vector_int_const_view) );
	return self;
}
struct gsl_block_ushort_struct* Dao_gsl_block_ushort_struct_New()
{
	struct gsl_block_ushort_struct *self = (struct gsl_block_ushort_struct*) calloc( 1, sizeof(struct gsl_block_ushort_struct) );
	return self;
}
gsl_vector_ushort* Dao_gsl_vector_ushort_New()
{
	gsl_vector_ushort *self = (gsl_vector_ushort*) calloc( 1, sizeof(gsl_vector_ushort) );
	return self;
}
_gsl_vector_ushort_view* Dao__gsl_vector_ushort_view_New()
{
	_gsl_vector_ushort_view *self = (_gsl_vector_ushort_view*) calloc( 1, sizeof(_gsl_vector_ushort_view) );
	return self;
}
_gsl_vector_ushort_const_view* Dao__gsl_vector_ushort_const_view_New()
{
	_gsl_vector_ushort_const_view *self = (_gsl_vector_ushort_const_view*) calloc( 1, sizeof(_gsl_vector_ushort_const_view) );
	return self;
}
struct gsl_block_short_struct* Dao_gsl_block_short_struct_New()
{
	struct gsl_block_short_struct *self = (struct gsl_block_short_struct*) calloc( 1, sizeof(struct gsl_block_short_struct) );
	return self;
}
gsl_vector_short* Dao_gsl_vector_short_New()
{
	gsl_vector_short *self = (gsl_vector_short*) calloc( 1, sizeof(gsl_vector_short) );
	return self;
}
_gsl_vector_short_view* Dao__gsl_vector_short_view_New()
{
	_gsl_vector_short_view *self = (_gsl_vector_short_view*) calloc( 1, sizeof(_gsl_vector_short_view) );
	return self;
}
_gsl_vector_short_const_view* Dao__gsl_vector_short_const_view_New()
{
	_gsl_vector_short_const_view *self = (_gsl_vector_short_const_view*) calloc( 1, sizeof(_gsl_vector_short_const_view) );
	return self;
}
struct gsl_block_uchar_struct* Dao_gsl_block_uchar_struct_New()
{
	struct gsl_block_uchar_struct *self = (struct gsl_block_uchar_struct*) calloc( 1, sizeof(struct gsl_block_uchar_struct) );
	return self;
}
gsl_vector_uchar* Dao_gsl_vector_uchar_New()
{
	gsl_vector_uchar *self = (gsl_vector_uchar*) calloc( 1, sizeof(gsl_vector_uchar) );
	return self;
}
_gsl_vector_uchar_view* Dao__gsl_vector_uchar_view_New()
{
	_gsl_vector_uchar_view *self = (_gsl_vector_uchar_view*) calloc( 1, sizeof(_gsl_vector_uchar_view) );
	return self;
}
_gsl_vector_uchar_const_view* Dao__gsl_vector_uchar_const_view_New()
{
	_gsl_vector_uchar_const_view *self = (_gsl_vector_uchar_const_view*) calloc( 1, sizeof(_gsl_vector_uchar_const_view) );
	return self;
}
struct gsl_block_char_struct* Dao_gsl_block_char_struct_New()
{
	struct gsl_block_char_struct *self = (struct gsl_block_char_struct*) calloc( 1, sizeof(struct gsl_block_char_struct) );
	return self;
}
gsl_vector_char* Dao_gsl_vector_char_New()
{
	gsl_vector_char *self = (gsl_vector_char*) calloc( 1, sizeof(gsl_vector_char) );
	return self;
}
_gsl_vector_char_view* Dao__gsl_vector_char_view_New()
{
	_gsl_vector_char_view *self = (_gsl_vector_char_view*) calloc( 1, sizeof(_gsl_vector_char_view) );
	return self;
}
_gsl_vector_char_const_view* Dao__gsl_vector_char_const_view_New()
{
	_gsl_vector_char_const_view *self = (_gsl_vector_char_const_view*) calloc( 1, sizeof(_gsl_vector_char_const_view) );
	return self;
}
gsl_matrix_complex_long_double* Dao_gsl_matrix_complex_long_double_New()
{
	gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*) calloc( 1, sizeof(gsl_matrix_complex_long_double) );
	return self;
}
_gsl_matrix_complex_long_double_view* Dao__gsl_matrix_complex_long_double_view_New()
{
	_gsl_matrix_complex_long_double_view *self = (_gsl_matrix_complex_long_double_view*) calloc( 1, sizeof(_gsl_matrix_complex_long_double_view) );
	return self;
}
_gsl_matrix_complex_long_double_const_view* Dao__gsl_matrix_complex_long_double_const_view_New()
{
	_gsl_matrix_complex_long_double_const_view *self = (_gsl_matrix_complex_long_double_const_view*) calloc( 1, sizeof(_gsl_matrix_complex_long_double_const_view) );
	return self;
}
gsl_matrix_complex* Dao_gsl_matrix_complex_New()
{
	gsl_matrix_complex *self = (gsl_matrix_complex*) calloc( 1, sizeof(gsl_matrix_complex) );
	return self;
}
_gsl_matrix_complex_view* Dao__gsl_matrix_complex_view_New()
{
	_gsl_matrix_complex_view *self = (_gsl_matrix_complex_view*) calloc( 1, sizeof(_gsl_matrix_complex_view) );
	return self;
}
_gsl_matrix_complex_const_view* Dao__gsl_matrix_complex_const_view_New()
{
	_gsl_matrix_complex_const_view *self = (_gsl_matrix_complex_const_view*) calloc( 1, sizeof(_gsl_matrix_complex_const_view) );
	return self;
}
gsl_matrix_complex_float* Dao_gsl_matrix_complex_float_New()
{
	gsl_matrix_complex_float *self = (gsl_matrix_complex_float*) calloc( 1, sizeof(gsl_matrix_complex_float) );
	return self;
}
_gsl_matrix_complex_float_view* Dao__gsl_matrix_complex_float_view_New()
{
	_gsl_matrix_complex_float_view *self = (_gsl_matrix_complex_float_view*) calloc( 1, sizeof(_gsl_matrix_complex_float_view) );
	return self;
}
_gsl_matrix_complex_float_const_view* Dao__gsl_matrix_complex_float_const_view_New()
{
	_gsl_matrix_complex_float_const_view *self = (_gsl_matrix_complex_float_const_view*) calloc( 1, sizeof(_gsl_matrix_complex_float_const_view) );
	return self;
}
gsl_matrix_long_double* Dao_gsl_matrix_long_double_New()
{
	gsl_matrix_long_double *self = (gsl_matrix_long_double*) calloc( 1, sizeof(gsl_matrix_long_double) );
	return self;
}
_gsl_matrix_long_double_view* Dao__gsl_matrix_long_double_view_New()
{
	_gsl_matrix_long_double_view *self = (_gsl_matrix_long_double_view*) calloc( 1, sizeof(_gsl_matrix_long_double_view) );
	return self;
}
_gsl_matrix_long_double_const_view* Dao__gsl_matrix_long_double_const_view_New()
{
	_gsl_matrix_long_double_const_view *self = (_gsl_matrix_long_double_const_view*) calloc( 1, sizeof(_gsl_matrix_long_double_const_view) );
	return self;
}
gsl_matrix* Dao_gsl_matrix_New()
{
	gsl_matrix *self = (gsl_matrix*) calloc( 1, sizeof(gsl_matrix) );
	return self;
}
_gsl_matrix_view* Dao__gsl_matrix_view_New()
{
	_gsl_matrix_view *self = (_gsl_matrix_view*) calloc( 1, sizeof(_gsl_matrix_view) );
	return self;
}
_gsl_matrix_const_view* Dao__gsl_matrix_const_view_New()
{
	_gsl_matrix_const_view *self = (_gsl_matrix_const_view*) calloc( 1, sizeof(_gsl_matrix_const_view) );
	return self;
}
gsl_matrix_float* Dao_gsl_matrix_float_New()
{
	gsl_matrix_float *self = (gsl_matrix_float*) calloc( 1, sizeof(gsl_matrix_float) );
	return self;
}
_gsl_matrix_float_view* Dao__gsl_matrix_float_view_New()
{
	_gsl_matrix_float_view *self = (_gsl_matrix_float_view*) calloc( 1, sizeof(_gsl_matrix_float_view) );
	return self;
}
_gsl_matrix_float_const_view* Dao__gsl_matrix_float_const_view_New()
{
	_gsl_matrix_float_const_view *self = (_gsl_matrix_float_const_view*) calloc( 1, sizeof(_gsl_matrix_float_const_view) );
	return self;
}
gsl_matrix_ulong* Dao_gsl_matrix_ulong_New()
{
	gsl_matrix_ulong *self = (gsl_matrix_ulong*) calloc( 1, sizeof(gsl_matrix_ulong) );
	return self;
}
_gsl_matrix_ulong_view* Dao__gsl_matrix_ulong_view_New()
{
	_gsl_matrix_ulong_view *self = (_gsl_matrix_ulong_view*) calloc( 1, sizeof(_gsl_matrix_ulong_view) );
	return self;
}
_gsl_matrix_ulong_const_view* Dao__gsl_matrix_ulong_const_view_New()
{
	_gsl_matrix_ulong_const_view *self = (_gsl_matrix_ulong_const_view*) calloc( 1, sizeof(_gsl_matrix_ulong_const_view) );
	return self;
}
gsl_matrix_long* Dao_gsl_matrix_long_New()
{
	gsl_matrix_long *self = (gsl_matrix_long*) calloc( 1, sizeof(gsl_matrix_long) );
	return self;
}
_gsl_matrix_long_view* Dao__gsl_matrix_long_view_New()
{
	_gsl_matrix_long_view *self = (_gsl_matrix_long_view*) calloc( 1, sizeof(_gsl_matrix_long_view) );
	return self;
}
_gsl_matrix_long_const_view* Dao__gsl_matrix_long_const_view_New()
{
	_gsl_matrix_long_const_view *self = (_gsl_matrix_long_const_view*) calloc( 1, sizeof(_gsl_matrix_long_const_view) );
	return self;
}
gsl_matrix_uint* Dao_gsl_matrix_uint_New()
{
	gsl_matrix_uint *self = (gsl_matrix_uint*) calloc( 1, sizeof(gsl_matrix_uint) );
	return self;
}
_gsl_matrix_uint_view* Dao__gsl_matrix_uint_view_New()
{
	_gsl_matrix_uint_view *self = (_gsl_matrix_uint_view*) calloc( 1, sizeof(_gsl_matrix_uint_view) );
	return self;
}
_gsl_matrix_uint_const_view* Dao__gsl_matrix_uint_const_view_New()
{
	_gsl_matrix_uint_const_view *self = (_gsl_matrix_uint_const_view*) calloc( 1, sizeof(_gsl_matrix_uint_const_view) );
	return self;
}
gsl_matrix_int* Dao_gsl_matrix_int_New()
{
	gsl_matrix_int *self = (gsl_matrix_int*) calloc( 1, sizeof(gsl_matrix_int) );
	return self;
}
_gsl_matrix_int_view* Dao__gsl_matrix_int_view_New()
{
	_gsl_matrix_int_view *self = (_gsl_matrix_int_view*) calloc( 1, sizeof(_gsl_matrix_int_view) );
	return self;
}
_gsl_matrix_int_const_view* Dao__gsl_matrix_int_const_view_New()
{
	_gsl_matrix_int_const_view *self = (_gsl_matrix_int_const_view*) calloc( 1, sizeof(_gsl_matrix_int_const_view) );
	return self;
}
gsl_matrix_ushort* Dao_gsl_matrix_ushort_New()
{
	gsl_matrix_ushort *self = (gsl_matrix_ushort*) calloc( 1, sizeof(gsl_matrix_ushort) );
	return self;
}
_gsl_matrix_ushort_view* Dao__gsl_matrix_ushort_view_New()
{
	_gsl_matrix_ushort_view *self = (_gsl_matrix_ushort_view*) calloc( 1, sizeof(_gsl_matrix_ushort_view) );
	return self;
}
_gsl_matrix_ushort_const_view* Dao__gsl_matrix_ushort_const_view_New()
{
	_gsl_matrix_ushort_const_view *self = (_gsl_matrix_ushort_const_view*) calloc( 1, sizeof(_gsl_matrix_ushort_const_view) );
	return self;
}
gsl_matrix_short* Dao_gsl_matrix_short_New()
{
	gsl_matrix_short *self = (gsl_matrix_short*) calloc( 1, sizeof(gsl_matrix_short) );
	return self;
}
_gsl_matrix_short_view* Dao__gsl_matrix_short_view_New()
{
	_gsl_matrix_short_view *self = (_gsl_matrix_short_view*) calloc( 1, sizeof(_gsl_matrix_short_view) );
	return self;
}
_gsl_matrix_short_const_view* Dao__gsl_matrix_short_const_view_New()
{
	_gsl_matrix_short_const_view *self = (_gsl_matrix_short_const_view*) calloc( 1, sizeof(_gsl_matrix_short_const_view) );
	return self;
}
gsl_matrix_uchar* Dao_gsl_matrix_uchar_New()
{
	gsl_matrix_uchar *self = (gsl_matrix_uchar*) calloc( 1, sizeof(gsl_matrix_uchar) );
	return self;
}
_gsl_matrix_uchar_view* Dao__gsl_matrix_uchar_view_New()
{
	_gsl_matrix_uchar_view *self = (_gsl_matrix_uchar_view*) calloc( 1, sizeof(_gsl_matrix_uchar_view) );
	return self;
}
_gsl_matrix_uchar_const_view* Dao__gsl_matrix_uchar_const_view_New()
{
	_gsl_matrix_uchar_const_view *self = (_gsl_matrix_uchar_const_view*) calloc( 1, sizeof(_gsl_matrix_uchar_const_view) );
	return self;
}
gsl_matrix_char* Dao_gsl_matrix_char_New()
{
	gsl_matrix_char *self = (gsl_matrix_char*) calloc( 1, sizeof(gsl_matrix_char) );
	return self;
}
_gsl_matrix_char_view* Dao__gsl_matrix_char_view_New()
{
	_gsl_matrix_char_view *self = (_gsl_matrix_char_view*) calloc( 1, sizeof(_gsl_matrix_char_view) );
	return self;
}
_gsl_matrix_char_const_view* Dao__gsl_matrix_char_const_view_New()
{
	_gsl_matrix_char_const_view *self = (_gsl_matrix_char_const_view*) calloc( 1, sizeof(_gsl_matrix_char_const_view) );
	return self;
}
Dao_gsl_function_struct* Dao_gsl_function_struct_New()
{
	Dao_gsl_function_struct *wrap = calloc( 1, sizeof(Dao_gsl_function_struct) );
	struct gsl_function_struct *self = (struct gsl_function_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_function_struct, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_function_fdf_struct* Dao_gsl_function_fdf_struct_New()
{
	Dao_gsl_function_fdf_struct *wrap = calloc( 1, sizeof(Dao_gsl_function_fdf_struct) );
	struct gsl_function_fdf_struct *self = (struct gsl_function_fdf_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_function_fdf_struct, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_function_vec_struct* Dao_gsl_function_vec_struct_New()
{
	Dao_gsl_function_vec_struct *wrap = calloc( 1, sizeof(Dao_gsl_function_vec_struct) );
	struct gsl_function_vec_struct *self = (struct gsl_function_vec_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_function_vec_struct, wrap );
	wrap->object = self;
	return wrap;
}
gsl_bspline_workspace* Dao_gsl_bspline_workspace_New()
{
	gsl_bspline_workspace *self = (gsl_bspline_workspace*) calloc( 1, sizeof(gsl_bspline_workspace) );
	return self;
}
gsl_bspline_deriv_workspace* Dao_gsl_bspline_deriv_workspace_New()
{
	gsl_bspline_deriv_workspace *self = (gsl_bspline_deriv_workspace*) calloc( 1, sizeof(gsl_bspline_deriv_workspace) );
	return self;
}
struct gsl_cheb_series_struct* Dao_gsl_cheb_series_struct_New()
{
	struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*) calloc( 1, sizeof(struct gsl_cheb_series_struct) );
	return self;
}
struct gsl_combination_struct* Dao_gsl_combination_struct_New()
{
	struct gsl_combination_struct *self = (struct gsl_combination_struct*) calloc( 1, sizeof(struct gsl_combination_struct) );
	return self;
}
struct gsl_dht_struct* Dao_gsl_dht_struct_New()
{
	struct gsl_dht_struct *self = (struct gsl_dht_struct*) calloc( 1, sizeof(struct gsl_dht_struct) );
	return self;
}
gsl_eigen_symm_workspace* Dao_gsl_eigen_symm_workspace_New()
{
	gsl_eigen_symm_workspace *self = (gsl_eigen_symm_workspace*) calloc( 1, sizeof(gsl_eigen_symm_workspace) );
	return self;
}
gsl_eigen_symmv_workspace* Dao_gsl_eigen_symmv_workspace_New()
{
	gsl_eigen_symmv_workspace *self = (gsl_eigen_symmv_workspace*) calloc( 1, sizeof(gsl_eigen_symmv_workspace) );
	return self;
}
gsl_eigen_herm_workspace* Dao_gsl_eigen_herm_workspace_New()
{
	gsl_eigen_herm_workspace *self = (gsl_eigen_herm_workspace*) calloc( 1, sizeof(gsl_eigen_herm_workspace) );
	return self;
}
gsl_eigen_hermv_workspace* Dao_gsl_eigen_hermv_workspace_New()
{
	gsl_eigen_hermv_workspace *self = (gsl_eigen_hermv_workspace*) calloc( 1, sizeof(gsl_eigen_hermv_workspace) );
	return self;
}
gsl_eigen_francis_workspace* Dao_gsl_eigen_francis_workspace_New()
{
	gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*) calloc( 1, sizeof(gsl_eigen_francis_workspace) );
	return self;
}
gsl_eigen_nonsymm_workspace* Dao_gsl_eigen_nonsymm_workspace_New()
{
	gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*) calloc( 1, sizeof(gsl_eigen_nonsymm_workspace) );
	return self;
}
gsl_eigen_nonsymmv_workspace* Dao_gsl_eigen_nonsymmv_workspace_New()
{
	gsl_eigen_nonsymmv_workspace *self = (gsl_eigen_nonsymmv_workspace*) calloc( 1, sizeof(gsl_eigen_nonsymmv_workspace) );
	return self;
}
gsl_eigen_gensymm_workspace* Dao_gsl_eigen_gensymm_workspace_New()
{
	gsl_eigen_gensymm_workspace *self = (gsl_eigen_gensymm_workspace*) calloc( 1, sizeof(gsl_eigen_gensymm_workspace) );
	return self;
}
gsl_eigen_gensymmv_workspace* Dao_gsl_eigen_gensymmv_workspace_New()
{
	gsl_eigen_gensymmv_workspace *self = (gsl_eigen_gensymmv_workspace*) calloc( 1, sizeof(gsl_eigen_gensymmv_workspace) );
	return self;
}
gsl_eigen_genherm_workspace* Dao_gsl_eigen_genherm_workspace_New()
{
	gsl_eigen_genherm_workspace *self = (gsl_eigen_genherm_workspace*) calloc( 1, sizeof(gsl_eigen_genherm_workspace) );
	return self;
}
gsl_eigen_genhermv_workspace* Dao_gsl_eigen_genhermv_workspace_New()
{
	gsl_eigen_genhermv_workspace *self = (gsl_eigen_genhermv_workspace*) calloc( 1, sizeof(gsl_eigen_genhermv_workspace) );
	return self;
}
gsl_eigen_gen_workspace* Dao_gsl_eigen_gen_workspace_New()
{
	gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*) calloc( 1, sizeof(gsl_eigen_gen_workspace) );
	return self;
}
gsl_eigen_genv_workspace* Dao_gsl_eigen_genv_workspace_New()
{
	gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*) calloc( 1, sizeof(gsl_eigen_genv_workspace) );
	return self;
}
gsl_fft_complex_wavetable* Dao_gsl_fft_complex_wavetable_New()
{
	gsl_fft_complex_wavetable *self = (gsl_fft_complex_wavetable*) calloc( 1, sizeof(gsl_fft_complex_wavetable) );
	return self;
}
gsl_fft_complex_workspace* Dao_gsl_fft_complex_workspace_New()
{
	gsl_fft_complex_workspace *self = (gsl_fft_complex_workspace*) calloc( 1, sizeof(gsl_fft_complex_workspace) );
	return self;
}
gsl_fft_complex_wavetable_float* Dao_gsl_fft_complex_wavetable_float_New()
{
	gsl_fft_complex_wavetable_float *self = (gsl_fft_complex_wavetable_float*) calloc( 1, sizeof(gsl_fft_complex_wavetable_float) );
	return self;
}
gsl_fft_complex_workspace_float* Dao_gsl_fft_complex_workspace_float_New()
{
	gsl_fft_complex_workspace_float *self = (gsl_fft_complex_workspace_float*) calloc( 1, sizeof(gsl_fft_complex_workspace_float) );
	return self;
}
gsl_fft_real_wavetable* Dao_gsl_fft_real_wavetable_New()
{
	gsl_fft_real_wavetable *self = (gsl_fft_real_wavetable*) calloc( 1, sizeof(gsl_fft_real_wavetable) );
	return self;
}
gsl_fft_real_workspace* Dao_gsl_fft_real_workspace_New()
{
	gsl_fft_real_workspace *self = (gsl_fft_real_workspace*) calloc( 1, sizeof(gsl_fft_real_workspace) );
	return self;
}
gsl_fft_halfcomplex_wavetable* Dao_gsl_fft_halfcomplex_wavetable_New()
{
	gsl_fft_halfcomplex_wavetable *self = (gsl_fft_halfcomplex_wavetable*) calloc( 1, sizeof(gsl_fft_halfcomplex_wavetable) );
	return self;
}
gsl_fft_real_wavetable_float* Dao_gsl_fft_real_wavetable_float_New()
{
	gsl_fft_real_wavetable_float *self = (gsl_fft_real_wavetable_float*) calloc( 1, sizeof(gsl_fft_real_wavetable_float) );
	return self;
}
gsl_fft_real_workspace_float* Dao_gsl_fft_real_workspace_float_New()
{
	gsl_fft_real_workspace_float *self = (gsl_fft_real_workspace_float*) calloc( 1, sizeof(gsl_fft_real_workspace_float) );
	return self;
}
gsl_fft_halfcomplex_wavetable_float* Dao_gsl_fft_halfcomplex_wavetable_float_New()
{
	gsl_fft_halfcomplex_wavetable_float *self = (gsl_fft_halfcomplex_wavetable_float*) calloc( 1, sizeof(gsl_fft_halfcomplex_wavetable_float) );
	return self;
}
struct gsl_permutation_struct* Dao_gsl_permutation_struct_New()
{
	struct gsl_permutation_struct *self = (struct gsl_permutation_struct*) calloc( 1, sizeof(struct gsl_permutation_struct) );
	return self;
}
gsl_histogram* Dao_gsl_histogram_New()
{
	gsl_histogram *self = (gsl_histogram*) calloc( 1, sizeof(gsl_histogram) );
	return self;
}
gsl_histogram_pdf* Dao_gsl_histogram_pdf_New()
{
	gsl_histogram_pdf *self = (gsl_histogram_pdf*) calloc( 1, sizeof(gsl_histogram_pdf) );
	return self;
}
gsl_histogram2d* Dao_gsl_histogram2d_New()
{
	gsl_histogram2d *self = (gsl_histogram2d*) calloc( 1, sizeof(gsl_histogram2d) );
	return self;
}
gsl_histogram2d_pdf* Dao_gsl_histogram2d_pdf_New()
{
	gsl_histogram2d_pdf *self = (gsl_histogram2d_pdf*) calloc( 1, sizeof(gsl_histogram2d_pdf) );
	return self;
}
gsl_ieee_float_rep* Dao_gsl_ieee_float_rep_New()
{
	gsl_ieee_float_rep *self = (gsl_ieee_float_rep*) calloc( 1, sizeof(gsl_ieee_float_rep) );
	return self;
}
gsl_ieee_double_rep* Dao_gsl_ieee_double_rep_New()
{
	gsl_ieee_double_rep *self = (gsl_ieee_double_rep*) calloc( 1, sizeof(gsl_ieee_double_rep) );
	return self;
}
gsl_integration_workspace* Dao_gsl_integration_workspace_New()
{
	gsl_integration_workspace *self = (gsl_integration_workspace*) calloc( 1, sizeof(gsl_integration_workspace) );
	return self;
}
gsl_integration_qaws_table* Dao_gsl_integration_qaws_table_New()
{
	gsl_integration_qaws_table *self = (gsl_integration_qaws_table*) calloc( 1, sizeof(gsl_integration_qaws_table) );
	return self;
}
gsl_integration_qawo_table* Dao_gsl_integration_qawo_table_New()
{
	gsl_integration_qawo_table *self = (gsl_integration_qawo_table*) calloc( 1, sizeof(gsl_integration_qawo_table) );
	return self;
}
gsl_integration_glfixed_table* Dao_gsl_integration_glfixed_table_New()
{
	gsl_integration_glfixed_table *self = (gsl_integration_glfixed_table*) calloc( 1, sizeof(gsl_integration_glfixed_table) );
	return self;
}
gsl_integration_cquad_ival* Dao_gsl_integration_cquad_ival_New()
{
	gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*) calloc( 1, sizeof(gsl_integration_cquad_ival) );
	return self;
}
gsl_integration_cquad_workspace* Dao_gsl_integration_cquad_workspace_New()
{
	gsl_integration_cquad_workspace *self = (gsl_integration_cquad_workspace*) calloc( 1, sizeof(gsl_integration_cquad_workspace) );
	return self;
}
gsl_interp_accel* Dao_gsl_interp_accel_New()
{
	gsl_interp_accel *self = (gsl_interp_accel*) calloc( 1, sizeof(gsl_interp_accel) );
	return self;
}
Dao_gsl_interp_type* Dao_gsl_interp_type_New()
{
	Dao_gsl_interp_type *wrap = calloc( 1, sizeof(Dao_gsl_interp_type) );
	gsl_interp_type *self = (gsl_interp_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_interp_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_interp* Dao_gsl_interp_New()
{
	gsl_interp *self = (gsl_interp*) calloc( 1, sizeof(gsl_interp) );
	return self;
}
Dao_gsl_min_fminimizer_type* Dao_gsl_min_fminimizer_type_New()
{
	Dao_gsl_min_fminimizer_type *wrap = calloc( 1, sizeof(Dao_gsl_min_fminimizer_type) );
	gsl_min_fminimizer_type *self = (gsl_min_fminimizer_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_min_fminimizer_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_min_fminimizer* Dao_gsl_min_fminimizer_New()
{
	gsl_min_fminimizer *self = (gsl_min_fminimizer*) calloc( 1, sizeof(gsl_min_fminimizer) );
	return self;
}
Dao_gsl_monte_function_struct* Dao_gsl_monte_function_struct_New()
{
	Dao_gsl_monte_function_struct *wrap = calloc( 1, sizeof(Dao_gsl_monte_function_struct) );
	struct gsl_monte_function_struct *self = (struct gsl_monte_function_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_monte_function_struct, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_rng_type* Dao_gsl_rng_type_New()
{
	Dao_gsl_rng_type *wrap = calloc( 1, sizeof(Dao_gsl_rng_type) );
	gsl_rng_type *self = (gsl_rng_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_rng_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_rng* Dao_gsl_rng_New()
{
	gsl_rng *self = (gsl_rng*) calloc( 1, sizeof(gsl_rng) );
	return self;
}
gsl_monte_plain_state* Dao_gsl_monte_plain_state_New()
{
	gsl_monte_plain_state *self = (gsl_monte_plain_state*) calloc( 1, sizeof(gsl_monte_plain_state) );
	return self;
}
gsl_monte_miser_state* Dao_gsl_monte_miser_state_New()
{
	gsl_monte_miser_state *self = (gsl_monte_miser_state*) calloc( 1, sizeof(gsl_monte_miser_state) );
	return self;
}
gsl_monte_miser_params* Dao_gsl_monte_miser_params_New()
{
	gsl_monte_miser_params *self = (gsl_monte_miser_params*) calloc( 1, sizeof(gsl_monte_miser_params) );
	return self;
}
gsl_monte_vegas_state* Dao_gsl_monte_vegas_state_New()
{
	gsl_monte_vegas_state *self = (gsl_monte_vegas_state*) calloc( 1, sizeof(gsl_monte_vegas_state) );
	return self;
}
gsl_monte_vegas_params* Dao_gsl_monte_vegas_params_New()
{
	gsl_monte_vegas_params *self = (gsl_monte_vegas_params*) calloc( 1, sizeof(gsl_monte_vegas_params) );
	return self;
}
gsl_multifit_linear_workspace* Dao_gsl_multifit_linear_workspace_New()
{
	gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*) calloc( 1, sizeof(gsl_multifit_linear_workspace) );
	return self;
}
Dao_gsl_multifit_robust_type* Dao_gsl_multifit_robust_type_New()
{
	Dao_gsl_multifit_robust_type *wrap = calloc( 1, sizeof(Dao_gsl_multifit_robust_type) );
	gsl_multifit_robust_type *self = (gsl_multifit_robust_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multifit_robust_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_multifit_robust_stats* Dao_gsl_multifit_robust_stats_New()
{
	gsl_multifit_robust_stats *self = (gsl_multifit_robust_stats*) calloc( 1, sizeof(gsl_multifit_robust_stats) );
	return self;
}
gsl_multifit_robust_workspace* Dao_gsl_multifit_robust_workspace_New()
{
	gsl_multifit_robust_workspace *self = (gsl_multifit_robust_workspace*) calloc( 1, sizeof(gsl_multifit_robust_workspace) );
	return self;
}
Dao_gsl_multifit_function_struct* Dao_gsl_multifit_function_struct_New()
{
	Dao_gsl_multifit_function_struct *wrap = calloc( 1, sizeof(Dao_gsl_multifit_function_struct) );
	struct gsl_multifit_function_struct *self = (struct gsl_multifit_function_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multifit_function_struct, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_multifit_fsolver_type* Dao_gsl_multifit_fsolver_type_New()
{
	Dao_gsl_multifit_fsolver_type *wrap = calloc( 1, sizeof(Dao_gsl_multifit_fsolver_type) );
	gsl_multifit_fsolver_type *self = (gsl_multifit_fsolver_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multifit_fsolver_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_multifit_fsolver* Dao_gsl_multifit_fsolver_New()
{
	gsl_multifit_fsolver *self = (gsl_multifit_fsolver*) calloc( 1, sizeof(gsl_multifit_fsolver) );
	return self;
}
Dao_gsl_multifit_function_fdf_struct* Dao_gsl_multifit_function_fdf_struct_New()
{
	Dao_gsl_multifit_function_fdf_struct *wrap = calloc( 1, sizeof(Dao_gsl_multifit_function_fdf_struct) );
	struct gsl_multifit_function_fdf_struct *self = (struct gsl_multifit_function_fdf_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multifit_function_fdf_struct, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_multifit_fdfsolver_type* Dao_gsl_multifit_fdfsolver_type_New()
{
	Dao_gsl_multifit_fdfsolver_type *wrap = calloc( 1, sizeof(Dao_gsl_multifit_fdfsolver_type) );
	gsl_multifit_fdfsolver_type *self = (gsl_multifit_fdfsolver_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multifit_fdfsolver_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_multifit_fdfsolver* Dao_gsl_multifit_fdfsolver_New()
{
	gsl_multifit_fdfsolver *self = (gsl_multifit_fdfsolver*) calloc( 1, sizeof(gsl_multifit_fdfsolver) );
	return self;
}
Dao_gsl_multimin_function_struct* Dao_gsl_multimin_function_struct_New()
{
	Dao_gsl_multimin_function_struct *wrap = calloc( 1, sizeof(Dao_gsl_multimin_function_struct) );
	struct gsl_multimin_function_struct *self = (struct gsl_multimin_function_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multimin_function_struct, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_multimin_function_fdf_struct* Dao_gsl_multimin_function_fdf_struct_New()
{
	Dao_gsl_multimin_function_fdf_struct *wrap = calloc( 1, sizeof(Dao_gsl_multimin_function_fdf_struct) );
	struct gsl_multimin_function_fdf_struct *self = (struct gsl_multimin_function_fdf_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multimin_function_fdf_struct, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_multimin_fminimizer_type* Dao_gsl_multimin_fminimizer_type_New()
{
	Dao_gsl_multimin_fminimizer_type *wrap = calloc( 1, sizeof(Dao_gsl_multimin_fminimizer_type) );
	gsl_multimin_fminimizer_type *self = (gsl_multimin_fminimizer_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multimin_fminimizer_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_multimin_fminimizer* Dao_gsl_multimin_fminimizer_New()
{
	gsl_multimin_fminimizer *self = (gsl_multimin_fminimizer*) calloc( 1, sizeof(gsl_multimin_fminimizer) );
	return self;
}
Dao_gsl_multimin_fdfminimizer_type* Dao_gsl_multimin_fdfminimizer_type_New()
{
	Dao_gsl_multimin_fdfminimizer_type *wrap = calloc( 1, sizeof(Dao_gsl_multimin_fdfminimizer_type) );
	gsl_multimin_fdfminimizer_type *self = (gsl_multimin_fdfminimizer_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multimin_fdfminimizer_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_multimin_fdfminimizer* Dao_gsl_multimin_fdfminimizer_New()
{
	gsl_multimin_fdfminimizer *self = (gsl_multimin_fdfminimizer*) calloc( 1, sizeof(gsl_multimin_fdfminimizer) );
	return self;
}
Dao_gsl_multiroot_function_struct* Dao_gsl_multiroot_function_struct_New()
{
	Dao_gsl_multiroot_function_struct *wrap = calloc( 1, sizeof(Dao_gsl_multiroot_function_struct) );
	struct gsl_multiroot_function_struct *self = (struct gsl_multiroot_function_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multiroot_function_struct, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_multiroot_fsolver_type* Dao_gsl_multiroot_fsolver_type_New()
{
	Dao_gsl_multiroot_fsolver_type *wrap = calloc( 1, sizeof(Dao_gsl_multiroot_fsolver_type) );
	gsl_multiroot_fsolver_type *self = (gsl_multiroot_fsolver_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multiroot_fsolver_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_multiroot_fsolver* Dao_gsl_multiroot_fsolver_New()
{
	gsl_multiroot_fsolver *self = (gsl_multiroot_fsolver*) calloc( 1, sizeof(gsl_multiroot_fsolver) );
	return self;
}
Dao_gsl_multiroot_function_fdf_struct* Dao_gsl_multiroot_function_fdf_struct_New()
{
	Dao_gsl_multiroot_function_fdf_struct *wrap = calloc( 1, sizeof(Dao_gsl_multiroot_function_fdf_struct) );
	struct gsl_multiroot_function_fdf_struct *self = (struct gsl_multiroot_function_fdf_struct*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multiroot_function_fdf_struct, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_multiroot_fdfsolver_type* Dao_gsl_multiroot_fdfsolver_type_New()
{
	Dao_gsl_multiroot_fdfsolver_type *wrap = calloc( 1, sizeof(Dao_gsl_multiroot_fdfsolver_type) );
	gsl_multiroot_fdfsolver_type *self = (gsl_multiroot_fdfsolver_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_multiroot_fdfsolver_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_multiroot_fdfsolver* Dao_gsl_multiroot_fdfsolver_New()
{
	gsl_multiroot_fdfsolver *self = (gsl_multiroot_fdfsolver*) calloc( 1, sizeof(gsl_multiroot_fdfsolver) );
	return self;
}
struct gsl_multiset_struct* Dao_gsl_multiset_struct_New()
{
	struct gsl_multiset_struct *self = (struct gsl_multiset_struct*) calloc( 1, sizeof(struct gsl_multiset_struct) );
	return self;
}
gsl_ntuple* Dao_gsl_ntuple_New()
{
	gsl_ntuple *self = (gsl_ntuple*) calloc( 1, sizeof(gsl_ntuple) );
	return self;
}
Dao_gsl_ntuple_select_fn* Dao_gsl_ntuple_select_fn_New()
{
	Dao_gsl_ntuple_select_fn *wrap = calloc( 1, sizeof(Dao_gsl_ntuple_select_fn) );
	gsl_ntuple_select_fn *self = (gsl_ntuple_select_fn*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_ntuple_select_fn, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_ntuple_value_fn* Dao_gsl_ntuple_value_fn_New()
{
	Dao_gsl_ntuple_value_fn *wrap = calloc( 1, sizeof(Dao_gsl_ntuple_value_fn) );
	gsl_ntuple_value_fn *self = (gsl_ntuple_value_fn*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_ntuple_value_fn, wrap );
	wrap->object = self;
	return wrap;
}
static int Dao_gsl_odeiv_system_function( double t, const double* y, double* dydt, void* params )
{
  Dao_gsl_odeiv_system *_self = (Dao_gsl_odeiv_system*) params;
  gsl_odeiv_system *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "function" );
  int X = (int) 0;
  if( _ro == NULL || _obj == NULL ) return X;
  return (int)DaoPF10293( & _cs, _ro, _obj, t, y, dydt, (DaoValue*)_cdata );
}
static int Dao_gsl_odeiv_system_jacobian( double t, const double* y, double* dfdy, double* dydt, void* params )
{
  Dao_gsl_odeiv_system *_self = (Dao_gsl_odeiv_system*) params;
  gsl_odeiv_system *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "jacobian" );
  int X = (int) 0;
  if( _ro == NULL || _obj == NULL ) return X;
  return (int)DaoPF10294( & _cs, _ro, _obj, t, y, dfdy, dydt, (DaoValue*)_cdata );
}
Dao_gsl_odeiv_system* Dao_gsl_odeiv_system_New()
{
	Dao_gsl_odeiv_system *wrap = calloc( 1, sizeof(Dao_gsl_odeiv_system) );
	gsl_odeiv_system *self = (gsl_odeiv_system*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_odeiv_system, wrap );
	wrap->object = self;
	self->function = Dao_gsl_odeiv_system_function;
	self->jacobian = Dao_gsl_odeiv_system_jacobian;
	self->params = self;
	return wrap;
}
Dao_gsl_odeiv_step_type* Dao_gsl_odeiv_step_type_New()
{
	Dao_gsl_odeiv_step_type *wrap = calloc( 1, sizeof(Dao_gsl_odeiv_step_type) );
	gsl_odeiv_step_type *self = (gsl_odeiv_step_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_odeiv_step_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_odeiv_step* Dao_gsl_odeiv_step_New()
{
	gsl_odeiv_step *self = (gsl_odeiv_step*) calloc( 1, sizeof(gsl_odeiv_step) );
	return self;
}
Dao_gsl_odeiv_control_type* Dao_gsl_odeiv_control_type_New()
{
	Dao_gsl_odeiv_control_type *wrap = calloc( 1, sizeof(Dao_gsl_odeiv_control_type) );
	gsl_odeiv_control_type *self = (gsl_odeiv_control_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_odeiv_control_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_odeiv_control* Dao_gsl_odeiv_control_New()
{
	gsl_odeiv_control *self = (gsl_odeiv_control*) calloc( 1, sizeof(gsl_odeiv_control) );
	return self;
}
gsl_odeiv_evolve* Dao_gsl_odeiv_evolve_New()
{
	gsl_odeiv_evolve *self = (gsl_odeiv_evolve*) calloc( 1, sizeof(gsl_odeiv_evolve) );
	return self;
}
Dao_gsl_odeiv2_system* Dao_gsl_odeiv2_system_New()
{
	Dao_gsl_odeiv2_system *wrap = calloc( 1, sizeof(Dao_gsl_odeiv2_system) );
	gsl_odeiv2_system *self = (gsl_odeiv2_system*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_odeiv2_system, wrap );
	wrap->object = self;
	return wrap;
}
struct gsl_odeiv2_step_struct* Dao_gsl_odeiv2_step_struct_New()
{
	struct gsl_odeiv2_step_struct *self = (struct gsl_odeiv2_step_struct*) calloc( 1, sizeof(struct gsl_odeiv2_step_struct) );
	return self;
}
struct gsl_odeiv2_control_struct* Dao_gsl_odeiv2_control_struct_New()
{
	struct gsl_odeiv2_control_struct *self = (struct gsl_odeiv2_control_struct*) calloc( 1, sizeof(struct gsl_odeiv2_control_struct) );
	return self;
}
struct gsl_odeiv2_evolve_struct* Dao_gsl_odeiv2_evolve_struct_New()
{
	struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*) calloc( 1, sizeof(struct gsl_odeiv2_evolve_struct) );
	return self;
}
struct gsl_odeiv2_driver_struct* Dao_gsl_odeiv2_driver_struct_New()
{
	struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*) calloc( 1, sizeof(struct gsl_odeiv2_driver_struct) );
	return self;
}
Dao_gsl_odeiv2_step_type* Dao_gsl_odeiv2_step_type_New()
{
	Dao_gsl_odeiv2_step_type *wrap = calloc( 1, sizeof(Dao_gsl_odeiv2_step_type) );
	gsl_odeiv2_step_type *self = (gsl_odeiv2_step_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_odeiv2_step_type, wrap );
	wrap->object = self;
	return wrap;
}
Dao_gsl_odeiv2_control_type* Dao_gsl_odeiv2_control_type_New()
{
	Dao_gsl_odeiv2_control_type *wrap = calloc( 1, sizeof(Dao_gsl_odeiv2_control_type) );
	gsl_odeiv2_control_type *self = (gsl_odeiv2_control_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_odeiv2_control_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_poly_complex_workspace* Dao_gsl_poly_complex_workspace_New()
{
	gsl_poly_complex_workspace *self = (gsl_poly_complex_workspace*) calloc( 1, sizeof(gsl_poly_complex_workspace) );
	return self;
}
Dao_gsl_qrng_type* Dao_gsl_qrng_type_New()
{
	Dao_gsl_qrng_type *wrap = calloc( 1, sizeof(Dao_gsl_qrng_type) );
	gsl_qrng_type *self = (gsl_qrng_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_qrng_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_qrng* Dao_gsl_qrng_New()
{
	gsl_qrng *self = (gsl_qrng*) calloc( 1, sizeof(gsl_qrng) );
	return self;
}
gsl_ran_discrete_t* Dao_gsl_ran_discrete_t_New()
{
	gsl_ran_discrete_t *self = (gsl_ran_discrete_t*) calloc( 1, sizeof(gsl_ran_discrete_t) );
	return self;
}
Dao_gsl_root_fsolver_type* Dao_gsl_root_fsolver_type_New()
{
	Dao_gsl_root_fsolver_type *wrap = calloc( 1, sizeof(Dao_gsl_root_fsolver_type) );
	gsl_root_fsolver_type *self = (gsl_root_fsolver_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_root_fsolver_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_root_fsolver* Dao_gsl_root_fsolver_New()
{
	gsl_root_fsolver *self = (gsl_root_fsolver*) calloc( 1, sizeof(gsl_root_fsolver) );
	return self;
}
Dao_gsl_root_fdfsolver_type* Dao_gsl_root_fdfsolver_type_New()
{
	Dao_gsl_root_fdfsolver_type *wrap = calloc( 1, sizeof(Dao_gsl_root_fdfsolver_type) );
	gsl_root_fdfsolver_type *self = (gsl_root_fdfsolver_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_root_fdfsolver_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_root_fdfsolver* Dao_gsl_root_fdfsolver_New()
{
	gsl_root_fdfsolver *self = (gsl_root_fdfsolver*) calloc( 1, sizeof(gsl_root_fdfsolver) );
	return self;
}
struct gsl_sf_result_struct* Dao_gsl_sf_result_struct_New()
{
	struct gsl_sf_result_struct *self = (struct gsl_sf_result_struct*) calloc( 1, sizeof(struct gsl_sf_result_struct) );
	return self;
}
struct gsl_sf_result_e10_struct* Dao_gsl_sf_result_e10_struct_New()
{
	struct gsl_sf_result_e10_struct *self = (struct gsl_sf_result_e10_struct*) calloc( 1, sizeof(struct gsl_sf_result_e10_struct) );
	return self;
}
gsl_sf_mathieu_workspace* Dao_gsl_sf_mathieu_workspace_New()
{
	gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*) calloc( 1, sizeof(gsl_sf_mathieu_workspace) );
	return self;
}
gsl_siman_params_t* Dao_gsl_siman_params_t_New()
{
	gsl_siman_params_t *self = (gsl_siman_params_t*) calloc( 1, sizeof(gsl_siman_params_t) );
	return self;
}
gsl_spline* Dao_gsl_spline_New()
{
	gsl_spline *self = (gsl_spline*) calloc( 1, sizeof(gsl_spline) );
	return self;
}
gsl_sum_levin_u_workspace* Dao_gsl_sum_levin_u_workspace_New()
{
	gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*) calloc( 1, sizeof(gsl_sum_levin_u_workspace) );
	return self;
}
gsl_sum_levin_utrunc_workspace* Dao_gsl_sum_levin_utrunc_workspace_New()
{
	gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*) calloc( 1, sizeof(gsl_sum_levin_utrunc_workspace) );
	return self;
}
Dao_gsl_wavelet_type* Dao_gsl_wavelet_type_New()
{
	Dao_gsl_wavelet_type *wrap = calloc( 1, sizeof(Dao_gsl_wavelet_type) );
	gsl_wavelet_type *self = (gsl_wavelet_type*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_gsl_wavelet_type, wrap );
	wrap->object = self;
	return wrap;
}
gsl_wavelet* Dao_gsl_wavelet_New()
{
	gsl_wavelet *self = (gsl_wavelet*) calloc( 1, sizeof(gsl_wavelet) );
	return self;
}
gsl_wavelet_workspace* Dao_gsl_wavelet_workspace_New()
{
	gsl_wavelet_workspace *self = (gsl_wavelet_workspace*) calloc( 1, sizeof(gsl_wavelet_workspace) );
	return self;
}
