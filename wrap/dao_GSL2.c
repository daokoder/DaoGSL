#include"dao_GSL.h"
#ifdef __cplusplus
extern "C"{
#endif
/* /usr/include/sys/_types.h */
static DaoTypeBase _opaque_pthread_attr_t_Typer = 
{ "_opaque_pthread_attr_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao__opaque_pthread_attr_t_Typer = & _opaque_pthread_attr_t_Typer;
DaoType *dao_type__opaque_pthread_attr_t = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase sigval_Typer = 
{ "sigval", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_sigval_Typer = & sigval_Typer;
DaoType *dao_type_sigval = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase sigevent_Typer = 
{ "sigevent", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_sigevent_Typer = & sigevent_Typer;
DaoType *dao_type_sigevent = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase __siginfo_Typer = 
{ "__siginfo", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao___siginfo_Typer = & __siginfo_Typer;
DaoType *dao_type___siginfo = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase sigvec_Typer = 
{ "sigvec", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_sigvec_Typer = & sigvec_Typer;
DaoType *dao_type_sigvec = NULL;
/* /usr/include/sys/_structs.h */
static DaoTypeBase timeval_Typer = 
{ "timeval", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_timeval_Typer = & timeval_Typer;
DaoType *dao_type_timeval = NULL;
/* /usr/include/sys/resource.h */
static DaoTypeBase rusage_Typer = 
{ "rusage", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_rusage_Typer = & rusage_Typer;
DaoType *dao_type_rusage = NULL;
/* /usr/include/sys/resource.h */
static DaoTypeBase rlimit_Typer = 
{ "rlimit", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_rlimit_Typer = & rlimit_Typer;
DaoType *dao_type_rlimit = NULL;
/* /usr/include/stdlib.h */
static DaoTypeBase div_t_Typer = 
{ "div_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_div_t_Typer = & div_t_Typer;
DaoType *dao_type_div_t = NULL;
/* /usr/include/stdlib.h */
static DaoTypeBase ldiv_t_Typer = 
{ "ldiv_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_ldiv_t_Typer = & ldiv_t_Typer;
DaoType *dao_type_ldiv_t = NULL;
/* /usr/include/stdlib.h */
static DaoTypeBase lldiv_t_Typer = 
{ "lldiv_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_lldiv_t_Typer = & lldiv_t_Typer;
DaoType *dao_type_lldiv_t = NULL;
/* /usr/include/stdio.h */
static DaoTypeBase __sFILE_Typer = 
{ "__sFILE", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao___sFILE_Typer = & __sFILE_Typer;
DaoType *dao_type___sFILE = NULL;
/* /usr/local/include/gsl/gsl_complex.h */


static DaoNumItem dao_gsl_complex_long_double_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_complex_long_double_GETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_complex_long_double_SETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_complex_long_double_gsl_complex_long_double( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_complex_long_double_Meths[] = 
{
  { dao_gsl_complex_long_double_GETF_dat, ".dat( self :gsl_complex_long_double )=>array<double>" },
  { dao_gsl_complex_long_double_SETF_dat, ".dat=( self :gsl_complex_long_double, dat :array<double> )" },
  { dao_gsl_complex_long_double_gsl_complex_long_double, "gsl_complex_long_double(  )=>gsl_complex_long_double" },
  { NULL, NULL }
};
static void Dao_gsl_complex_long_double_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_complex_long_double_Typer = 
{ "gsl_complex_long_double", NULL,
  dao_gsl_complex_long_double_Nums,
  dao_gsl_complex_long_double_Meths,
  { NULL },
  { NULL },
  Dao_gsl_complex_long_double_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_complex_long_double_Typer = & gsl_complex_long_double_Typer;
DaoType *dao_type_gsl_complex_long_double = NULL;
static void dao_gsl_complex_long_double_GETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_complex_long_double *self = (gsl_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_complex_long_double);
  DaoProcess_PutVectorD( _proc, (double*) self->dat, 2 );
}
static void dao_gsl_complex_long_double_SETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_complex_long_double *self = (gsl_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_complex_long_double);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 2 ) size = 2;
  memmove( self->dat, DaoArray_ToDouble( (DaoArray*)_p[1] ), size*sizeof(double) );
}
static void dao_gsl_complex_long_double_gsl_complex_long_double( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_complex_long_double *self = Dao_gsl_complex_long_double_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_complex_long_double );
}
/* /usr/local/include/gsl/gsl_complex.h */


static DaoNumItem dao_gsl_complex_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_complex_GETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_complex_SETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_complex_gsl_complex( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_complex_Meths[] = 
{
  { dao_gsl_complex_GETF_dat, ".dat( self :gsl_complex )=>array<double>" },
  { dao_gsl_complex_SETF_dat, ".dat=( self :gsl_complex, dat :array<double> )" },
  { dao_gsl_complex_gsl_complex, "gsl_complex(  )=>gsl_complex" },
  { NULL, NULL }
};
static void Dao_gsl_complex_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_complex_Typer = 
{ "gsl_complex", NULL,
  dao_gsl_complex_Nums,
  dao_gsl_complex_Meths,
  { NULL },
  { NULL },
  Dao_gsl_complex_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_complex_Typer = & gsl_complex_Typer;
DaoType *dao_type_gsl_complex = NULL;
static void dao_gsl_complex_GETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_complex *self = (gsl_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_complex);
  DaoProcess_PutVectorD( _proc, (double*) self->dat, 2 );
}
static void dao_gsl_complex_SETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_complex *self = (gsl_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_complex);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 2 ) size = 2;
  memmove( self->dat, DaoArray_ToDouble( (DaoArray*)_p[1] ), size*sizeof(double) );
}
static void dao_gsl_complex_gsl_complex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_complex *self = Dao_gsl_complex_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_complex );
}
/* /usr/local/include/gsl/gsl_complex.h */


static DaoNumItem dao_gsl_complex_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_complex_float_GETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_complex_float_SETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_complex_float_gsl_complex_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_complex_float_Meths[] = 
{
  { dao_gsl_complex_float_GETF_dat, ".dat( self :gsl_complex_float )=>array<float>" },
  { dao_gsl_complex_float_SETF_dat, ".dat=( self :gsl_complex_float, dat :array<float> )" },
  { dao_gsl_complex_float_gsl_complex_float, "gsl_complex_float(  )=>gsl_complex_float" },
  { NULL, NULL }
};
static void Dao_gsl_complex_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_complex_float_Typer = 
{ "gsl_complex_float", NULL,
  dao_gsl_complex_float_Nums,
  dao_gsl_complex_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_complex_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_complex_float_Typer = & gsl_complex_float_Typer;
DaoType *dao_type_gsl_complex_float = NULL;
static void dao_gsl_complex_float_GETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_complex_float *self = (gsl_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_complex_float);
  DaoProcess_PutVectorF( _proc, (float*) self->dat, 2 );
}
static void dao_gsl_complex_float_SETF_dat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_complex_float *self = (gsl_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_complex_float);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 2 ) size = 2;
  memmove( self->dat, DaoArray_ToFloat( (DaoArray*)_p[1] ), size*sizeof(float) );
}
static void dao_gsl_complex_float_gsl_complex_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_complex_float *self = Dao_gsl_complex_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_complex_float );
}
/* /usr/local/include/gsl/gsl_block_long_double.h */


static DaoNumItem dao_gsl_block_long_double_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_long_double_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_long_double_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_long_double_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_long_double_struct_gsl_block_long_double_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_long_double_struct_Meths[] = 
{
  { dao_gsl_block_long_double_struct_GETF_size, ".size( self :gsl_block_long_double_struct )=>int" },
  { dao_gsl_block_long_double_struct_SETF_size, ".size=( self :gsl_block_long_double_struct, size :int )" },
  { dao_gsl_block_long_double_struct_GETF_data, ".data( self :gsl_block_long_double_struct )=>double" },
  { dao_gsl_block_long_double_struct_gsl_block_long_double_struct, "gsl_block_long_double_struct(  )=>gsl_block_long_double_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_long_double_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_long_double_struct_Typer = 
{ "gsl_block_long_double_struct", NULL,
  dao_gsl_block_long_double_struct_Nums,
  dao_gsl_block_long_double_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_long_double_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_long_double_struct_Typer = & gsl_block_long_double_struct_Typer;
DaoType *dao_type_gsl_block_long_double_struct = NULL;
static void dao_gsl_block_long_double_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_long_double_struct *self = (struct gsl_block_long_double_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_long_double_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_long_double_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_long_double_struct *self = (struct gsl_block_long_double_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_long_double_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_long_double_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_long_double_struct *self = (struct gsl_block_long_double_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_long_double_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_block_long_double_struct_gsl_block_long_double_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_long_double_struct *self = Dao_gsl_block_long_double_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_long_double_struct );
}
/* /usr/local/include/gsl/gsl_vector_long_double.h */


static DaoNumItem dao_gsl_vector_long_double_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_long_double_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_double_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_double_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_double_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_double_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_double_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_double_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_double_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_double_gsl_vector_long_double( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_long_double_Meths[] = 
{
  { dao_gsl_vector_long_double_GETF_size, ".size( self :gsl_vector_long_double )=>int" },
  { dao_gsl_vector_long_double_SETF_size, ".size=( self :gsl_vector_long_double, size :int )" },
  { dao_gsl_vector_long_double_GETF_stride, ".stride( self :gsl_vector_long_double )=>int" },
  { dao_gsl_vector_long_double_SETF_stride, ".stride=( self :gsl_vector_long_double, stride :int )" },
  { dao_gsl_vector_long_double_GETF_data, ".data( self :gsl_vector_long_double )=>double" },
  { dao_gsl_vector_long_double_GETF_block, ".block( self :gsl_vector_long_double )=>gsl_block_long_double_struct" },
  { dao_gsl_vector_long_double_GETF_owner, ".owner( self :gsl_vector_long_double )=>int" },
  { dao_gsl_vector_long_double_SETF_owner, ".owner=( self :gsl_vector_long_double, owner :int )" },
  { dao_gsl_vector_long_double_gsl_vector_long_double, "gsl_vector_long_double(  )=>gsl_vector_long_double" },
  { NULL, NULL }
};
static void Dao_gsl_vector_long_double_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_long_double_Typer = 
{ "gsl_vector_long_double", NULL,
  dao_gsl_vector_long_double_Nums,
  dao_gsl_vector_long_double_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_long_double_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_long_double_Typer = & gsl_vector_long_double_Typer;
DaoType *dao_type_gsl_vector_long_double = NULL;
static void dao_gsl_vector_long_double_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long_double *self = (gsl_vector_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_long_double_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long_double *self = (gsl_vector_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long_double);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_long_double_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long_double *self = (gsl_vector_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_long_double_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long_double *self = (gsl_vector_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long_double);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_long_double_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long_double *self = (gsl_vector_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long_double);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_vector_long_double_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long_double *self = (gsl_vector_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long_double);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_long_double_struct );
}
static void dao_gsl_vector_long_double_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long_double *self = (gsl_vector_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_long_double_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long_double *self = (gsl_vector_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long_double);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_long_double_gsl_vector_long_double( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_long_double *self = Dao_gsl_vector_long_double_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_long_double );
}
/* /usr/local/include/gsl/gsl_vector_long_double.h */


static DaoNumItem dao__gsl_vector_long_double_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_long_double_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_long_double_view__gsl_vector_long_double_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_long_double_view_Meths[] = 
{
  { dao__gsl_vector_long_double_view_GETF_vector, ".vector( self :_gsl_vector_long_double_view )=>gsl_vector_long_double" },
  { dao__gsl_vector_long_double_view__gsl_vector_long_double_view, "_gsl_vector_long_double_view(  )=>_gsl_vector_long_double_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_long_double_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_long_double_view_Typer = 
{ "_gsl_vector_long_double_view", NULL,
  dao__gsl_vector_long_double_view_Nums,
  dao__gsl_vector_long_double_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_long_double_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_long_double_view_Typer = & _gsl_vector_long_double_view_Typer;
DaoType *dao_type__gsl_vector_long_double_view = NULL;
static void dao__gsl_vector_long_double_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_long_double_view *self = (_gsl_vector_long_double_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_long_double_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_long_double );
}
static void dao__gsl_vector_long_double_view__gsl_vector_long_double_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_long_double_view *self = Dao__gsl_vector_long_double_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_long_double_view );
}
/* /usr/local/include/gsl/gsl_vector_long_double.h */


static DaoNumItem dao__gsl_vector_long_double_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_long_double_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_long_double_const_view__gsl_vector_long_double_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_long_double_const_view_Meths[] = 
{
  { dao__gsl_vector_long_double_const_view_GETF_vector, ".vector( self :_gsl_vector_long_double_const_view )=>gsl_vector_long_double" },
  { dao__gsl_vector_long_double_const_view__gsl_vector_long_double_const_view, "_gsl_vector_long_double_const_view(  )=>_gsl_vector_long_double_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_long_double_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_long_double_const_view_Typer = 
{ "_gsl_vector_long_double_const_view", NULL,
  dao__gsl_vector_long_double_const_view_Nums,
  dao__gsl_vector_long_double_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_long_double_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_long_double_const_view_Typer = & _gsl_vector_long_double_const_view_Typer;
DaoType *dao_type__gsl_vector_long_double_const_view = NULL;
static void dao__gsl_vector_long_double_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_long_double_const_view *self = (_gsl_vector_long_double_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_long_double_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_long_double );
}
static void dao__gsl_vector_long_double_const_view__gsl_vector_long_double_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_long_double_const_view *self = Dao__gsl_vector_long_double_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_long_double_const_view );
}
/* /usr/local/include/gsl/gsl_block_complex_long_double.h */


static DaoNumItem dao_gsl_block_complex_long_double_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_complex_long_double_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_complex_long_double_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_complex_long_double_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_complex_long_double_struct_gsl_block_complex_long_double_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_complex_long_double_struct_Meths[] = 
{
  { dao_gsl_block_complex_long_double_struct_GETF_size, ".size( self :gsl_block_complex_long_double_struct )=>int" },
  { dao_gsl_block_complex_long_double_struct_SETF_size, ".size=( self :gsl_block_complex_long_double_struct, size :int )" },
  { dao_gsl_block_complex_long_double_struct_GETF_data, ".data( self :gsl_block_complex_long_double_struct )=>double" },
  { dao_gsl_block_complex_long_double_struct_gsl_block_complex_long_double_struct, "gsl_block_complex_long_double_struct(  )=>gsl_block_complex_long_double_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_complex_long_double_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_complex_long_double_struct_Typer = 
{ "gsl_block_complex_long_double_struct", NULL,
  dao_gsl_block_complex_long_double_struct_Nums,
  dao_gsl_block_complex_long_double_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_complex_long_double_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_complex_long_double_struct_Typer = & gsl_block_complex_long_double_struct_Typer;
DaoType *dao_type_gsl_block_complex_long_double_struct = NULL;
static void dao_gsl_block_complex_long_double_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_complex_long_double_struct *self = (struct gsl_block_complex_long_double_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_complex_long_double_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_complex_long_double_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_complex_long_double_struct *self = (struct gsl_block_complex_long_double_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_complex_long_double_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_complex_long_double_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_complex_long_double_struct *self = (struct gsl_block_complex_long_double_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_complex_long_double_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_block_complex_long_double_struct_gsl_block_complex_long_double_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_complex_long_double_struct *self = Dao_gsl_block_complex_long_double_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_complex_long_double_struct );
}
/* /usr/local/include/gsl/gsl_vector_complex_long_double.h */


static DaoNumItem dao_gsl_vector_complex_long_double_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_complex_long_double_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_long_double_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_long_double_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_long_double_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_long_double_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_long_double_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_long_double_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_long_double_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_long_double_gsl_vector_complex_long_double( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_complex_long_double_Meths[] = 
{
  { dao_gsl_vector_complex_long_double_GETF_size, ".size( self :gsl_vector_complex_long_double )=>int" },
  { dao_gsl_vector_complex_long_double_SETF_size, ".size=( self :gsl_vector_complex_long_double, size :int )" },
  { dao_gsl_vector_complex_long_double_GETF_stride, ".stride( self :gsl_vector_complex_long_double )=>int" },
  { dao_gsl_vector_complex_long_double_SETF_stride, ".stride=( self :gsl_vector_complex_long_double, stride :int )" },
  { dao_gsl_vector_complex_long_double_GETF_data, ".data( self :gsl_vector_complex_long_double )=>double" },
  { dao_gsl_vector_complex_long_double_GETF_block, ".block( self :gsl_vector_complex_long_double )=>gsl_block_complex_long_double_struct" },
  { dao_gsl_vector_complex_long_double_GETF_owner, ".owner( self :gsl_vector_complex_long_double )=>int" },
  { dao_gsl_vector_complex_long_double_SETF_owner, ".owner=( self :gsl_vector_complex_long_double, owner :int )" },
  { dao_gsl_vector_complex_long_double_gsl_vector_complex_long_double, "gsl_vector_complex_long_double(  )=>gsl_vector_complex_long_double" },
  { NULL, NULL }
};
static void Dao_gsl_vector_complex_long_double_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_complex_long_double_Typer = 
{ "gsl_vector_complex_long_double", NULL,
  dao_gsl_vector_complex_long_double_Nums,
  dao_gsl_vector_complex_long_double_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_complex_long_double_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_complex_long_double_Typer = & gsl_vector_complex_long_double_Typer;
DaoType *dao_type_gsl_vector_complex_long_double = NULL;
static void dao_gsl_vector_complex_long_double_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_long_double *self = (gsl_vector_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_complex_long_double_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_long_double *self = (gsl_vector_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_long_double);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_complex_long_double_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_long_double *self = (gsl_vector_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_complex_long_double_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_long_double *self = (gsl_vector_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_long_double);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_complex_long_double_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_long_double *self = (gsl_vector_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_long_double);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_vector_complex_long_double_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_long_double *self = (gsl_vector_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_long_double);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_complex_long_double_struct );
}
static void dao_gsl_vector_complex_long_double_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_long_double *self = (gsl_vector_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_complex_long_double_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_long_double *self = (gsl_vector_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_long_double);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_complex_long_double_gsl_vector_complex_long_double( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_complex_long_double *self = Dao_gsl_vector_complex_long_double_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_complex_long_double );
}
/* /usr/local/include/gsl/gsl_vector_complex_long_double.h */


static DaoNumItem dao__gsl_vector_complex_long_double_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_complex_long_double_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_complex_long_double_view__gsl_vector_complex_long_double_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_complex_long_double_view_Meths[] = 
{
  { dao__gsl_vector_complex_long_double_view_GETF_vector, ".vector( self :_gsl_vector_complex_long_double_view )=>gsl_vector_complex_long_double" },
  { dao__gsl_vector_complex_long_double_view__gsl_vector_complex_long_double_view, "_gsl_vector_complex_long_double_view(  )=>_gsl_vector_complex_long_double_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_complex_long_double_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_complex_long_double_view_Typer = 
{ "_gsl_vector_complex_long_double_view", NULL,
  dao__gsl_vector_complex_long_double_view_Nums,
  dao__gsl_vector_complex_long_double_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_complex_long_double_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_complex_long_double_view_Typer = & _gsl_vector_complex_long_double_view_Typer;
DaoType *dao_type__gsl_vector_complex_long_double_view = NULL;
static void dao__gsl_vector_complex_long_double_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_complex_long_double_view *self = (_gsl_vector_complex_long_double_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_complex_long_double_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_complex_long_double );
}
static void dao__gsl_vector_complex_long_double_view__gsl_vector_complex_long_double_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_complex_long_double_view *self = Dao__gsl_vector_complex_long_double_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_complex_long_double_view );
}
/* /usr/local/include/gsl/gsl_vector_complex_long_double.h */


static DaoNumItem dao__gsl_vector_complex_long_double_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_complex_long_double_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_complex_long_double_const_view__gsl_vector_complex_long_double_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_complex_long_double_const_view_Meths[] = 
{
  { dao__gsl_vector_complex_long_double_const_view_GETF_vector, ".vector( self :_gsl_vector_complex_long_double_const_view )=>gsl_vector_complex_long_double" },
  { dao__gsl_vector_complex_long_double_const_view__gsl_vector_complex_long_double_const_view, "_gsl_vector_complex_long_double_const_view(  )=>_gsl_vector_complex_long_double_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_complex_long_double_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_complex_long_double_const_view_Typer = 
{ "_gsl_vector_complex_long_double_const_view", NULL,
  dao__gsl_vector_complex_long_double_const_view_Nums,
  dao__gsl_vector_complex_long_double_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_complex_long_double_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_complex_long_double_const_view_Typer = & _gsl_vector_complex_long_double_const_view_Typer;
DaoType *dao_type__gsl_vector_complex_long_double_const_view = NULL;
static void dao__gsl_vector_complex_long_double_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_complex_long_double_const_view *self = (_gsl_vector_complex_long_double_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_complex_long_double_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_complex_long_double );
}
static void dao__gsl_vector_complex_long_double_const_view__gsl_vector_complex_long_double_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_complex_long_double_const_view *self = Dao__gsl_vector_complex_long_double_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_complex_long_double_const_view );
}
/* /usr/local/include/gsl/gsl_block_double.h */


static DaoNumItem dao_gsl_block_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_struct_gsl_block_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_struct_Meths[] = 
{
  { dao_gsl_block_struct_GETF_size, ".size( self :gsl_block_struct )=>int" },
  { dao_gsl_block_struct_SETF_size, ".size=( self :gsl_block_struct, size :int )" },
  { dao_gsl_block_struct_GETF_data, ".data( self :gsl_block_struct )=>double" },
  { dao_gsl_block_struct_gsl_block_struct, "gsl_block_struct(  )=>gsl_block_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_struct_Typer = 
{ "gsl_block_struct", NULL,
  dao_gsl_block_struct_Nums,
  dao_gsl_block_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_struct_Typer = & gsl_block_struct_Typer;
DaoType *dao_type_gsl_block_struct = NULL;
static void dao_gsl_block_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_struct *self = (struct gsl_block_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_struct *self = (struct gsl_block_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_struct *self = (struct gsl_block_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_block_struct_gsl_block_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_struct *self = Dao_gsl_block_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_struct );
}
/* /usr/local/include/gsl/gsl_vector_double.h */


static DaoNumItem dao_gsl_vector_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_gsl_vector( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_Meths[] = 
{
  { dao_gsl_vector_GETF_size, ".size( self :gsl_vector )=>int" },
  { dao_gsl_vector_SETF_size, ".size=( self :gsl_vector, size :int )" },
  { dao_gsl_vector_GETF_stride, ".stride( self :gsl_vector )=>int" },
  { dao_gsl_vector_SETF_stride, ".stride=( self :gsl_vector, stride :int )" },
  { dao_gsl_vector_GETF_data, ".data( self :gsl_vector )=>double" },
  { dao_gsl_vector_GETF_block, ".block( self :gsl_vector )=>gsl_block_struct" },
  { dao_gsl_vector_GETF_owner, ".owner( self :gsl_vector )=>int" },
  { dao_gsl_vector_SETF_owner, ".owner=( self :gsl_vector, owner :int )" },
  { dao_gsl_vector_gsl_vector, "gsl_vector(  )=>gsl_vector" },
  { NULL, NULL }
};
static void Dao_gsl_vector_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_Typer = 
{ "gsl_vector", NULL,
  dao_gsl_vector_Nums,
  dao_gsl_vector_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_Typer = & gsl_vector_Typer;
DaoType *dao_type_gsl_vector = NULL;
static void dao_gsl_vector_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector *self = (gsl_vector*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector *self = (gsl_vector*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector *self = (gsl_vector*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector *self = (gsl_vector*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector *self = (gsl_vector*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_vector_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector *self = (gsl_vector*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_struct );
}
static void dao_gsl_vector_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector *self = (gsl_vector*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector *self = (gsl_vector*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_gsl_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector *self = Dao_gsl_vector_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector );
}
/* /usr/local/include/gsl/gsl_vector_double.h */


static DaoNumItem dao__gsl_vector_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_view__gsl_vector_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_view_Meths[] = 
{
  { dao__gsl_vector_view_GETF_vector, ".vector( self :_gsl_vector_view )=>gsl_vector" },
  { dao__gsl_vector_view__gsl_vector_view, "_gsl_vector_view(  )=>_gsl_vector_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_view_Typer = 
{ "_gsl_vector_view", NULL,
  dao__gsl_vector_view_Nums,
  dao__gsl_vector_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_view_Typer = & _gsl_vector_view_Typer;
DaoType *dao_type__gsl_vector_view = NULL;
static void dao__gsl_vector_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_view *self = (_gsl_vector_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector );
}
static void dao__gsl_vector_view__gsl_vector_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_view *self = Dao__gsl_vector_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_view );
}
/* /usr/local/include/gsl/gsl_vector_double.h */


static DaoNumItem dao__gsl_vector_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_const_view__gsl_vector_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_const_view_Meths[] = 
{
  { dao__gsl_vector_const_view_GETF_vector, ".vector( self :_gsl_vector_const_view )=>gsl_vector" },
  { dao__gsl_vector_const_view__gsl_vector_const_view, "_gsl_vector_const_view(  )=>_gsl_vector_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_const_view_Typer = 
{ "_gsl_vector_const_view", NULL,
  dao__gsl_vector_const_view_Nums,
  dao__gsl_vector_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_const_view_Typer = & _gsl_vector_const_view_Typer;
DaoType *dao_type__gsl_vector_const_view = NULL;
static void dao__gsl_vector_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_const_view *self = (_gsl_vector_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector );
}
static void dao__gsl_vector_const_view__gsl_vector_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_const_view *self = Dao__gsl_vector_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_const_view );
}
/* /usr/local/include/gsl/gsl_block_complex_double.h */


static DaoNumItem dao_gsl_block_complex_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_complex_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_complex_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_complex_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_complex_struct_gsl_block_complex_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_complex_struct_Meths[] = 
{
  { dao_gsl_block_complex_struct_GETF_size, ".size( self :gsl_block_complex_struct )=>int" },
  { dao_gsl_block_complex_struct_SETF_size, ".size=( self :gsl_block_complex_struct, size :int )" },
  { dao_gsl_block_complex_struct_GETF_data, ".data( self :gsl_block_complex_struct )=>double" },
  { dao_gsl_block_complex_struct_gsl_block_complex_struct, "gsl_block_complex_struct(  )=>gsl_block_complex_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_complex_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_complex_struct_Typer = 
{ "gsl_block_complex_struct", NULL,
  dao_gsl_block_complex_struct_Nums,
  dao_gsl_block_complex_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_complex_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_complex_struct_Typer = & gsl_block_complex_struct_Typer;
DaoType *dao_type_gsl_block_complex_struct = NULL;
static void dao_gsl_block_complex_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_complex_struct *self = (struct gsl_block_complex_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_complex_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_complex_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_complex_struct *self = (struct gsl_block_complex_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_complex_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_complex_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_complex_struct *self = (struct gsl_block_complex_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_complex_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_block_complex_struct_gsl_block_complex_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_complex_struct *self = Dao_gsl_block_complex_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_complex_struct );
}
/* /usr/local/include/gsl/gsl_vector_complex_double.h */


static DaoNumItem dao_gsl_vector_complex_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_complex_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_gsl_vector_complex( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_complex_Meths[] = 
{
  { dao_gsl_vector_complex_GETF_size, ".size( self :gsl_vector_complex )=>int" },
  { dao_gsl_vector_complex_SETF_size, ".size=( self :gsl_vector_complex, size :int )" },
  { dao_gsl_vector_complex_GETF_stride, ".stride( self :gsl_vector_complex )=>int" },
  { dao_gsl_vector_complex_SETF_stride, ".stride=( self :gsl_vector_complex, stride :int )" },
  { dao_gsl_vector_complex_GETF_data, ".data( self :gsl_vector_complex )=>double" },
  { dao_gsl_vector_complex_GETF_block, ".block( self :gsl_vector_complex )=>gsl_block_complex_struct" },
  { dao_gsl_vector_complex_GETF_owner, ".owner( self :gsl_vector_complex )=>int" },
  { dao_gsl_vector_complex_SETF_owner, ".owner=( self :gsl_vector_complex, owner :int )" },
  { dao_gsl_vector_complex_gsl_vector_complex, "gsl_vector_complex(  )=>gsl_vector_complex" },
  { NULL, NULL }
};
static void Dao_gsl_vector_complex_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_complex_Typer = 
{ "gsl_vector_complex", NULL,
  dao_gsl_vector_complex_Nums,
  dao_gsl_vector_complex_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_complex_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_complex_Typer = & gsl_vector_complex_Typer;
DaoType *dao_type_gsl_vector_complex = NULL;
static void dao_gsl_vector_complex_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex *self = (gsl_vector_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_complex_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex *self = (gsl_vector_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_complex_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex *self = (gsl_vector_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_complex_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex *self = (gsl_vector_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_complex_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex *self = (gsl_vector_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_vector_complex_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex *self = (gsl_vector_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_complex_struct );
}
static void dao_gsl_vector_complex_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex *self = (gsl_vector_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_complex_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex *self = (gsl_vector_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_complex_gsl_vector_complex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_complex *self = Dao_gsl_vector_complex_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_complex );
}
/* /usr/local/include/gsl/gsl_vector_complex_double.h */


static DaoNumItem dao__gsl_vector_complex_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_complex_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_complex_view__gsl_vector_complex_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_complex_view_Meths[] = 
{
  { dao__gsl_vector_complex_view_GETF_vector, ".vector( self :_gsl_vector_complex_view )=>gsl_vector_complex" },
  { dao__gsl_vector_complex_view__gsl_vector_complex_view, "_gsl_vector_complex_view(  )=>_gsl_vector_complex_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_complex_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_complex_view_Typer = 
{ "_gsl_vector_complex_view", NULL,
  dao__gsl_vector_complex_view_Nums,
  dao__gsl_vector_complex_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_complex_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_complex_view_Typer = & _gsl_vector_complex_view_Typer;
DaoType *dao_type__gsl_vector_complex_view = NULL;
static void dao__gsl_vector_complex_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_complex_view *self = (_gsl_vector_complex_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_complex_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_complex );
}
static void dao__gsl_vector_complex_view__gsl_vector_complex_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_complex_view *self = Dao__gsl_vector_complex_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_complex_view );
}
/* /usr/local/include/gsl/gsl_vector_complex_double.h */


static DaoNumItem dao__gsl_vector_complex_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_complex_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_complex_const_view__gsl_vector_complex_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_complex_const_view_Meths[] = 
{
  { dao__gsl_vector_complex_const_view_GETF_vector, ".vector( self :_gsl_vector_complex_const_view )=>gsl_vector_complex" },
  { dao__gsl_vector_complex_const_view__gsl_vector_complex_const_view, "_gsl_vector_complex_const_view(  )=>_gsl_vector_complex_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_complex_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_complex_const_view_Typer = 
{ "_gsl_vector_complex_const_view", NULL,
  dao__gsl_vector_complex_const_view_Nums,
  dao__gsl_vector_complex_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_complex_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_complex_const_view_Typer = & _gsl_vector_complex_const_view_Typer;
DaoType *dao_type__gsl_vector_complex_const_view = NULL;
static void dao__gsl_vector_complex_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_complex_const_view *self = (_gsl_vector_complex_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_complex_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_complex );
}
static void dao__gsl_vector_complex_const_view__gsl_vector_complex_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_complex_const_view *self = Dao__gsl_vector_complex_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_complex_const_view );
}
/* /usr/local/include/gsl/gsl_block_float.h */


static DaoNumItem dao_gsl_block_float_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_float_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_float_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_float_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_float_struct_gsl_block_float_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_float_struct_Meths[] = 
{
  { dao_gsl_block_float_struct_GETF_size, ".size( self :gsl_block_float_struct )=>int" },
  { dao_gsl_block_float_struct_SETF_size, ".size=( self :gsl_block_float_struct, size :int )" },
  { dao_gsl_block_float_struct_GETF_data, ".data( self :gsl_block_float_struct )=>float" },
  { dao_gsl_block_float_struct_gsl_block_float_struct, "gsl_block_float_struct(  )=>gsl_block_float_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_float_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_float_struct_Typer = 
{ "gsl_block_float_struct", NULL,
  dao_gsl_block_float_struct_Nums,
  dao_gsl_block_float_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_float_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_float_struct_Typer = & gsl_block_float_struct_Typer;
DaoType *dao_type_gsl_block_float_struct = NULL;
static void dao_gsl_block_float_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_float_struct *self = (struct gsl_block_float_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_float_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_float_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_float_struct *self = (struct gsl_block_float_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_float_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_float_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_float_struct *self = (struct gsl_block_float_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_float_struct);
  DaoProcess_PutVectorF( _proc, (float*) self->data, 0 );
}
static void dao_gsl_block_float_struct_gsl_block_float_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_float_struct *self = Dao_gsl_block_float_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_float_struct );
}
/* /usr/local/include/gsl/gsl_vector_float.h */


static DaoNumItem dao_gsl_vector_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_float_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_float_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_float_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_float_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_float_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_float_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_float_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_float_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_float_gsl_vector_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_float_Meths[] = 
{
  { dao_gsl_vector_float_GETF_size, ".size( self :gsl_vector_float )=>int" },
  { dao_gsl_vector_float_SETF_size, ".size=( self :gsl_vector_float, size :int )" },
  { dao_gsl_vector_float_GETF_stride, ".stride( self :gsl_vector_float )=>int" },
  { dao_gsl_vector_float_SETF_stride, ".stride=( self :gsl_vector_float, stride :int )" },
  { dao_gsl_vector_float_GETF_data, ".data( self :gsl_vector_float )=>float" },
  { dao_gsl_vector_float_GETF_block, ".block( self :gsl_vector_float )=>gsl_block_float_struct" },
  { dao_gsl_vector_float_GETF_owner, ".owner( self :gsl_vector_float )=>int" },
  { dao_gsl_vector_float_SETF_owner, ".owner=( self :gsl_vector_float, owner :int )" },
  { dao_gsl_vector_float_gsl_vector_float, "gsl_vector_float(  )=>gsl_vector_float" },
  { NULL, NULL }
};
static void Dao_gsl_vector_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_float_Typer = 
{ "gsl_vector_float", NULL,
  dao_gsl_vector_float_Nums,
  dao_gsl_vector_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_float_Typer = & gsl_vector_float_Typer;
DaoType *dao_type_gsl_vector_float = NULL;
static void dao_gsl_vector_float_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_float *self = (gsl_vector_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_float);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_float_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_float *self = (gsl_vector_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_float);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_float_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_float *self = (gsl_vector_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_float);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_float_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_float *self = (gsl_vector_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_float);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_float_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_float *self = (gsl_vector_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_float);
  DaoProcess_PutVectorF( _proc, (float*) self->data, 0 );
}
static void dao_gsl_vector_float_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_float *self = (gsl_vector_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_float);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_float_struct );
}
static void dao_gsl_vector_float_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_float *self = (gsl_vector_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_float);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_float_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_float *self = (gsl_vector_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_float);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_float_gsl_vector_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_float *self = Dao_gsl_vector_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_float );
}
/* /usr/local/include/gsl/gsl_vector_float.h */


static DaoNumItem dao__gsl_vector_float_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_float_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_float_view__gsl_vector_float_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_float_view_Meths[] = 
{
  { dao__gsl_vector_float_view_GETF_vector, ".vector( self :_gsl_vector_float_view )=>gsl_vector_float" },
  { dao__gsl_vector_float_view__gsl_vector_float_view, "_gsl_vector_float_view(  )=>_gsl_vector_float_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_float_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_float_view_Typer = 
{ "_gsl_vector_float_view", NULL,
  dao__gsl_vector_float_view_Nums,
  dao__gsl_vector_float_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_float_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_float_view_Typer = & _gsl_vector_float_view_Typer;
DaoType *dao_type__gsl_vector_float_view = NULL;
static void dao__gsl_vector_float_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_float_view *self = (_gsl_vector_float_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_float_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_float );
}
static void dao__gsl_vector_float_view__gsl_vector_float_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_float_view *self = Dao__gsl_vector_float_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_float_view );
}
/* /usr/local/include/gsl/gsl_vector_float.h */


static DaoNumItem dao__gsl_vector_float_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_float_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_float_const_view__gsl_vector_float_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_float_const_view_Meths[] = 
{
  { dao__gsl_vector_float_const_view_GETF_vector, ".vector( self :_gsl_vector_float_const_view )=>gsl_vector_float" },
  { dao__gsl_vector_float_const_view__gsl_vector_float_const_view, "_gsl_vector_float_const_view(  )=>_gsl_vector_float_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_float_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_float_const_view_Typer = 
{ "_gsl_vector_float_const_view", NULL,
  dao__gsl_vector_float_const_view_Nums,
  dao__gsl_vector_float_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_float_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_float_const_view_Typer = & _gsl_vector_float_const_view_Typer;
DaoType *dao_type__gsl_vector_float_const_view = NULL;
static void dao__gsl_vector_float_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_float_const_view *self = (_gsl_vector_float_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_float_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_float );
}
static void dao__gsl_vector_float_const_view__gsl_vector_float_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_float_const_view *self = Dao__gsl_vector_float_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_float_const_view );
}
/* /usr/local/include/gsl/gsl_block_complex_float.h */


static DaoNumItem dao_gsl_block_complex_float_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_complex_float_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_complex_float_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_complex_float_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_complex_float_struct_gsl_block_complex_float_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_complex_float_struct_Meths[] = 
{
  { dao_gsl_block_complex_float_struct_GETF_size, ".size( self :gsl_block_complex_float_struct )=>int" },
  { dao_gsl_block_complex_float_struct_SETF_size, ".size=( self :gsl_block_complex_float_struct, size :int )" },
  { dao_gsl_block_complex_float_struct_GETF_data, ".data( self :gsl_block_complex_float_struct )=>float" },
  { dao_gsl_block_complex_float_struct_gsl_block_complex_float_struct, "gsl_block_complex_float_struct(  )=>gsl_block_complex_float_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_complex_float_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_complex_float_struct_Typer = 
{ "gsl_block_complex_float_struct", NULL,
  dao_gsl_block_complex_float_struct_Nums,
  dao_gsl_block_complex_float_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_complex_float_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_complex_float_struct_Typer = & gsl_block_complex_float_struct_Typer;
DaoType *dao_type_gsl_block_complex_float_struct = NULL;
static void dao_gsl_block_complex_float_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_complex_float_struct *self = (struct gsl_block_complex_float_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_complex_float_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_complex_float_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_complex_float_struct *self = (struct gsl_block_complex_float_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_complex_float_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_complex_float_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_complex_float_struct *self = (struct gsl_block_complex_float_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_complex_float_struct);
  DaoProcess_PutVectorF( _proc, (float*) self->data, 0 );
}
static void dao_gsl_block_complex_float_struct_gsl_block_complex_float_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_complex_float_struct *self = Dao_gsl_block_complex_float_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_complex_float_struct );
}
/* /usr/local/include/gsl/gsl_vector_complex_float.h */


static DaoNumItem dao_gsl_vector_complex_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_complex_float_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_float_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_float_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_float_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_float_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_float_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_float_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_float_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_complex_float_gsl_vector_complex_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_complex_float_Meths[] = 
{
  { dao_gsl_vector_complex_float_GETF_size, ".size( self :gsl_vector_complex_float )=>int" },
  { dao_gsl_vector_complex_float_SETF_size, ".size=( self :gsl_vector_complex_float, size :int )" },
  { dao_gsl_vector_complex_float_GETF_stride, ".stride( self :gsl_vector_complex_float )=>int" },
  { dao_gsl_vector_complex_float_SETF_stride, ".stride=( self :gsl_vector_complex_float, stride :int )" },
  { dao_gsl_vector_complex_float_GETF_data, ".data( self :gsl_vector_complex_float )=>float" },
  { dao_gsl_vector_complex_float_GETF_block, ".block( self :gsl_vector_complex_float )=>gsl_block_complex_float_struct" },
  { dao_gsl_vector_complex_float_GETF_owner, ".owner( self :gsl_vector_complex_float )=>int" },
  { dao_gsl_vector_complex_float_SETF_owner, ".owner=( self :gsl_vector_complex_float, owner :int )" },
  { dao_gsl_vector_complex_float_gsl_vector_complex_float, "gsl_vector_complex_float(  )=>gsl_vector_complex_float" },
  { NULL, NULL }
};
static void Dao_gsl_vector_complex_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_complex_float_Typer = 
{ "gsl_vector_complex_float", NULL,
  dao_gsl_vector_complex_float_Nums,
  dao_gsl_vector_complex_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_complex_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_complex_float_Typer = & gsl_vector_complex_float_Typer;
DaoType *dao_type_gsl_vector_complex_float = NULL;
static void dao_gsl_vector_complex_float_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_float *self = (gsl_vector_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_float);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_complex_float_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_float *self = (gsl_vector_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_float);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_complex_float_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_float *self = (gsl_vector_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_float);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_complex_float_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_float *self = (gsl_vector_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_float);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_complex_float_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_float *self = (gsl_vector_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_float);
  DaoProcess_PutVectorF( _proc, (float*) self->data, 0 );
}
static void dao_gsl_vector_complex_float_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_float *self = (gsl_vector_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_float);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_complex_float_struct );
}
static void dao_gsl_vector_complex_float_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_float *self = (gsl_vector_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_float);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_complex_float_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_complex_float *self = (gsl_vector_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_complex_float);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_complex_float_gsl_vector_complex_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_complex_float *self = Dao_gsl_vector_complex_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_complex_float );
}
/* /usr/local/include/gsl/gsl_vector_complex_float.h */


static DaoNumItem dao__gsl_vector_complex_float_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_complex_float_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_complex_float_view__gsl_vector_complex_float_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_complex_float_view_Meths[] = 
{
  { dao__gsl_vector_complex_float_view_GETF_vector, ".vector( self :_gsl_vector_complex_float_view )=>gsl_vector_complex_float" },
  { dao__gsl_vector_complex_float_view__gsl_vector_complex_float_view, "_gsl_vector_complex_float_view(  )=>_gsl_vector_complex_float_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_complex_float_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_complex_float_view_Typer = 
{ "_gsl_vector_complex_float_view", NULL,
  dao__gsl_vector_complex_float_view_Nums,
  dao__gsl_vector_complex_float_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_complex_float_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_complex_float_view_Typer = & _gsl_vector_complex_float_view_Typer;
DaoType *dao_type__gsl_vector_complex_float_view = NULL;
static void dao__gsl_vector_complex_float_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_complex_float_view *self = (_gsl_vector_complex_float_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_complex_float_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_complex_float );
}
static void dao__gsl_vector_complex_float_view__gsl_vector_complex_float_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_complex_float_view *self = Dao__gsl_vector_complex_float_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_complex_float_view );
}
/* /usr/local/include/gsl/gsl_vector_complex_float.h */


static DaoNumItem dao__gsl_vector_complex_float_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_complex_float_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_complex_float_const_view__gsl_vector_complex_float_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_complex_float_const_view_Meths[] = 
{
  { dao__gsl_vector_complex_float_const_view_GETF_vector, ".vector( self :_gsl_vector_complex_float_const_view )=>gsl_vector_complex_float" },
  { dao__gsl_vector_complex_float_const_view__gsl_vector_complex_float_const_view, "_gsl_vector_complex_float_const_view(  )=>_gsl_vector_complex_float_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_complex_float_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_complex_float_const_view_Typer = 
{ "_gsl_vector_complex_float_const_view", NULL,
  dao__gsl_vector_complex_float_const_view_Nums,
  dao__gsl_vector_complex_float_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_complex_float_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_complex_float_const_view_Typer = & _gsl_vector_complex_float_const_view_Typer;
DaoType *dao_type__gsl_vector_complex_float_const_view = NULL;
static void dao__gsl_vector_complex_float_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_complex_float_const_view *self = (_gsl_vector_complex_float_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_complex_float_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_complex_float );
}
static void dao__gsl_vector_complex_float_const_view__gsl_vector_complex_float_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_complex_float_const_view *self = Dao__gsl_vector_complex_float_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_complex_float_const_view );
}
/* /usr/local/include/gsl/gsl_block_ulong.h */


static DaoNumItem dao_gsl_block_ulong_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_ulong_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_ulong_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_ulong_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_ulong_struct_gsl_block_ulong_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_ulong_struct_Meths[] = 
{
  { dao_gsl_block_ulong_struct_GETF_size, ".size( self :gsl_block_ulong_struct )=>int" },
  { dao_gsl_block_ulong_struct_SETF_size, ".size=( self :gsl_block_ulong_struct, size :int )" },
  { dao_gsl_block_ulong_struct_GETF_data, ".data( self :gsl_block_ulong_struct )=>int" },
  { dao_gsl_block_ulong_struct_gsl_block_ulong_struct, "gsl_block_ulong_struct(  )=>gsl_block_ulong_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_ulong_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_ulong_struct_Typer = 
{ "gsl_block_ulong_struct", NULL,
  dao_gsl_block_ulong_struct_Nums,
  dao_gsl_block_ulong_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_ulong_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_ulong_struct_Typer = & gsl_block_ulong_struct_Typer;
DaoType *dao_type_gsl_block_ulong_struct = NULL;
static void dao_gsl_block_ulong_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_ulong_struct *self = (struct gsl_block_ulong_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_ulong_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_ulong_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_ulong_struct *self = (struct gsl_block_ulong_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_ulong_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_ulong_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_ulong_struct *self = (struct gsl_block_ulong_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_ulong_struct);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_block_ulong_struct_gsl_block_ulong_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_ulong_struct *self = Dao_gsl_block_ulong_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_ulong_struct );
}
/* /usr/local/include/gsl/gsl_vector_ulong.h */


static DaoNumItem dao_gsl_vector_ulong_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_ulong_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ulong_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ulong_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ulong_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ulong_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ulong_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ulong_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ulong_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ulong_gsl_vector_ulong( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_ulong_Meths[] = 
{
  { dao_gsl_vector_ulong_GETF_size, ".size( self :gsl_vector_ulong )=>int" },
  { dao_gsl_vector_ulong_SETF_size, ".size=( self :gsl_vector_ulong, size :int )" },
  { dao_gsl_vector_ulong_GETF_stride, ".stride( self :gsl_vector_ulong )=>int" },
  { dao_gsl_vector_ulong_SETF_stride, ".stride=( self :gsl_vector_ulong, stride :int )" },
  { dao_gsl_vector_ulong_GETF_data, ".data( self :gsl_vector_ulong )=>int" },
  { dao_gsl_vector_ulong_GETF_block, ".block( self :gsl_vector_ulong )=>gsl_block_ulong_struct" },
  { dao_gsl_vector_ulong_GETF_owner, ".owner( self :gsl_vector_ulong )=>int" },
  { dao_gsl_vector_ulong_SETF_owner, ".owner=( self :gsl_vector_ulong, owner :int )" },
  { dao_gsl_vector_ulong_gsl_vector_ulong, "gsl_vector_ulong(  )=>gsl_vector_ulong" },
  { NULL, NULL }
};
static void Dao_gsl_vector_ulong_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_ulong_Typer = 
{ "gsl_vector_ulong", NULL,
  dao_gsl_vector_ulong_Nums,
  dao_gsl_vector_ulong_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_ulong_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_ulong_Typer = & gsl_vector_ulong_Typer;
DaoType *dao_type_gsl_vector_ulong = NULL;
static void dao_gsl_vector_ulong_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ulong *self = (gsl_vector_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ulong);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_ulong_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ulong *self = (gsl_vector_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ulong);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_ulong_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ulong *self = (gsl_vector_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ulong);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_ulong_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ulong *self = (gsl_vector_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ulong);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_ulong_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ulong *self = (gsl_vector_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ulong);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_vector_ulong_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ulong *self = (gsl_vector_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ulong);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_ulong_struct );
}
static void dao_gsl_vector_ulong_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ulong *self = (gsl_vector_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ulong);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_ulong_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ulong *self = (gsl_vector_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ulong);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_ulong_gsl_vector_ulong( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_ulong *self = Dao_gsl_vector_ulong_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_ulong );
}
/* /usr/local/include/gsl/gsl_vector_ulong.h */


static DaoNumItem dao__gsl_vector_ulong_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_ulong_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_ulong_view__gsl_vector_ulong_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_ulong_view_Meths[] = 
{
  { dao__gsl_vector_ulong_view_GETF_vector, ".vector( self :_gsl_vector_ulong_view )=>gsl_vector_ulong" },
  { dao__gsl_vector_ulong_view__gsl_vector_ulong_view, "_gsl_vector_ulong_view(  )=>_gsl_vector_ulong_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_ulong_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_ulong_view_Typer = 
{ "_gsl_vector_ulong_view", NULL,
  dao__gsl_vector_ulong_view_Nums,
  dao__gsl_vector_ulong_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_ulong_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_ulong_view_Typer = & _gsl_vector_ulong_view_Typer;
DaoType *dao_type__gsl_vector_ulong_view = NULL;
static void dao__gsl_vector_ulong_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_ulong_view *self = (_gsl_vector_ulong_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_ulong_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_ulong );
}
static void dao__gsl_vector_ulong_view__gsl_vector_ulong_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_ulong_view *self = Dao__gsl_vector_ulong_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_ulong_view );
}
/* /usr/local/include/gsl/gsl_vector_ulong.h */


static DaoNumItem dao__gsl_vector_ulong_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_ulong_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_ulong_const_view__gsl_vector_ulong_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_ulong_const_view_Meths[] = 
{
  { dao__gsl_vector_ulong_const_view_GETF_vector, ".vector( self :_gsl_vector_ulong_const_view )=>gsl_vector_ulong" },
  { dao__gsl_vector_ulong_const_view__gsl_vector_ulong_const_view, "_gsl_vector_ulong_const_view(  )=>_gsl_vector_ulong_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_ulong_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_ulong_const_view_Typer = 
{ "_gsl_vector_ulong_const_view", NULL,
  dao__gsl_vector_ulong_const_view_Nums,
  dao__gsl_vector_ulong_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_ulong_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_ulong_const_view_Typer = & _gsl_vector_ulong_const_view_Typer;
DaoType *dao_type__gsl_vector_ulong_const_view = NULL;
static void dao__gsl_vector_ulong_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_ulong_const_view *self = (_gsl_vector_ulong_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_ulong_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_ulong );
}
static void dao__gsl_vector_ulong_const_view__gsl_vector_ulong_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_ulong_const_view *self = Dao__gsl_vector_ulong_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_ulong_const_view );
}
/* /usr/local/include/gsl/gsl_block_long.h */


static DaoNumItem dao_gsl_block_long_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_long_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_long_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_long_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_long_struct_gsl_block_long_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_long_struct_Meths[] = 
{
  { dao_gsl_block_long_struct_GETF_size, ".size( self :gsl_block_long_struct )=>int" },
  { dao_gsl_block_long_struct_SETF_size, ".size=( self :gsl_block_long_struct, size :int )" },
  { dao_gsl_block_long_struct_GETF_data, ".data( self :gsl_block_long_struct )=>int" },
  { dao_gsl_block_long_struct_gsl_block_long_struct, "gsl_block_long_struct(  )=>gsl_block_long_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_long_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_long_struct_Typer = 
{ "gsl_block_long_struct", NULL,
  dao_gsl_block_long_struct_Nums,
  dao_gsl_block_long_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_long_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_long_struct_Typer = & gsl_block_long_struct_Typer;
DaoType *dao_type_gsl_block_long_struct = NULL;
static void dao_gsl_block_long_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_long_struct *self = (struct gsl_block_long_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_long_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_long_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_long_struct *self = (struct gsl_block_long_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_long_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_long_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_long_struct *self = (struct gsl_block_long_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_long_struct);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_block_long_struct_gsl_block_long_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_long_struct *self = Dao_gsl_block_long_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_long_struct );
}
/* /usr/local/include/gsl/gsl_vector_long.h */


static DaoNumItem dao_gsl_vector_long_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_long_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_long_gsl_vector_long( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_long_Meths[] = 
{
  { dao_gsl_vector_long_GETF_size, ".size( self :gsl_vector_long )=>int" },
  { dao_gsl_vector_long_SETF_size, ".size=( self :gsl_vector_long, size :int )" },
  { dao_gsl_vector_long_GETF_stride, ".stride( self :gsl_vector_long )=>int" },
  { dao_gsl_vector_long_SETF_stride, ".stride=( self :gsl_vector_long, stride :int )" },
  { dao_gsl_vector_long_GETF_data, ".data( self :gsl_vector_long )=>int" },
  { dao_gsl_vector_long_GETF_block, ".block( self :gsl_vector_long )=>gsl_block_long_struct" },
  { dao_gsl_vector_long_GETF_owner, ".owner( self :gsl_vector_long )=>int" },
  { dao_gsl_vector_long_SETF_owner, ".owner=( self :gsl_vector_long, owner :int )" },
  { dao_gsl_vector_long_gsl_vector_long, "gsl_vector_long(  )=>gsl_vector_long" },
  { NULL, NULL }
};
static void Dao_gsl_vector_long_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_long_Typer = 
{ "gsl_vector_long", NULL,
  dao_gsl_vector_long_Nums,
  dao_gsl_vector_long_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_long_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_long_Typer = & gsl_vector_long_Typer;
DaoType *dao_type_gsl_vector_long = NULL;
static void dao_gsl_vector_long_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long *self = (gsl_vector_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_long_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long *self = (gsl_vector_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_long_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long *self = (gsl_vector_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_long_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long *self = (gsl_vector_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_long_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long *self = (gsl_vector_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_vector_long_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long *self = (gsl_vector_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_long_struct );
}
static void dao_gsl_vector_long_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long *self = (gsl_vector_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_long_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_long *self = (gsl_vector_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_long);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_long_gsl_vector_long( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_long *self = Dao_gsl_vector_long_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_long );
}
/* /usr/local/include/gsl/gsl_vector_long.h */


static DaoNumItem dao__gsl_vector_long_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_long_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_long_view__gsl_vector_long_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_long_view_Meths[] = 
{
  { dao__gsl_vector_long_view_GETF_vector, ".vector( self :_gsl_vector_long_view )=>gsl_vector_long" },
  { dao__gsl_vector_long_view__gsl_vector_long_view, "_gsl_vector_long_view(  )=>_gsl_vector_long_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_long_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_long_view_Typer = 
{ "_gsl_vector_long_view", NULL,
  dao__gsl_vector_long_view_Nums,
  dao__gsl_vector_long_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_long_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_long_view_Typer = & _gsl_vector_long_view_Typer;
DaoType *dao_type__gsl_vector_long_view = NULL;
static void dao__gsl_vector_long_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_long_view *self = (_gsl_vector_long_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_long_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_long );
}
static void dao__gsl_vector_long_view__gsl_vector_long_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_long_view *self = Dao__gsl_vector_long_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_long_view );
}
/* /usr/local/include/gsl/gsl_vector_long.h */


static DaoNumItem dao__gsl_vector_long_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_long_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_long_const_view__gsl_vector_long_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_long_const_view_Meths[] = 
{
  { dao__gsl_vector_long_const_view_GETF_vector, ".vector( self :_gsl_vector_long_const_view )=>gsl_vector_long" },
  { dao__gsl_vector_long_const_view__gsl_vector_long_const_view, "_gsl_vector_long_const_view(  )=>_gsl_vector_long_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_long_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_long_const_view_Typer = 
{ "_gsl_vector_long_const_view", NULL,
  dao__gsl_vector_long_const_view_Nums,
  dao__gsl_vector_long_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_long_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_long_const_view_Typer = & _gsl_vector_long_const_view_Typer;
DaoType *dao_type__gsl_vector_long_const_view = NULL;
static void dao__gsl_vector_long_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_long_const_view *self = (_gsl_vector_long_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_long_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_long );
}
static void dao__gsl_vector_long_const_view__gsl_vector_long_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_long_const_view *self = Dao__gsl_vector_long_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_long_const_view );
}
/* /usr/local/include/gsl/gsl_block_uint.h */


static DaoNumItem dao_gsl_block_uint_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_uint_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_uint_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_uint_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_uint_struct_gsl_block_uint_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_uint_struct_Meths[] = 
{
  { dao_gsl_block_uint_struct_GETF_size, ".size( self :gsl_block_uint_struct )=>int" },
  { dao_gsl_block_uint_struct_SETF_size, ".size=( self :gsl_block_uint_struct, size :int )" },
  { dao_gsl_block_uint_struct_GETF_data, ".data( self :gsl_block_uint_struct )=>int" },
  { dao_gsl_block_uint_struct_gsl_block_uint_struct, "gsl_block_uint_struct(  )=>gsl_block_uint_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_uint_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_uint_struct_Typer = 
{ "gsl_block_uint_struct", NULL,
  dao_gsl_block_uint_struct_Nums,
  dao_gsl_block_uint_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_uint_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_uint_struct_Typer = & gsl_block_uint_struct_Typer;
DaoType *dao_type_gsl_block_uint_struct = NULL;
static void dao_gsl_block_uint_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_uint_struct *self = (struct gsl_block_uint_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_uint_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_uint_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_uint_struct *self = (struct gsl_block_uint_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_uint_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_uint_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_uint_struct *self = (struct gsl_block_uint_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_uint_struct);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_block_uint_struct_gsl_block_uint_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_uint_struct *self = Dao_gsl_block_uint_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_uint_struct );
}
/* /usr/local/include/gsl/gsl_vector_uint.h */


static DaoNumItem dao_gsl_vector_uint_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_uint_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uint_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uint_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uint_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uint_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uint_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uint_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uint_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uint_gsl_vector_uint( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_uint_Meths[] = 
{
  { dao_gsl_vector_uint_GETF_size, ".size( self :gsl_vector_uint )=>int" },
  { dao_gsl_vector_uint_SETF_size, ".size=( self :gsl_vector_uint, size :int )" },
  { dao_gsl_vector_uint_GETF_stride, ".stride( self :gsl_vector_uint )=>int" },
  { dao_gsl_vector_uint_SETF_stride, ".stride=( self :gsl_vector_uint, stride :int )" },
  { dao_gsl_vector_uint_GETF_data, ".data( self :gsl_vector_uint )=>int" },
  { dao_gsl_vector_uint_GETF_block, ".block( self :gsl_vector_uint )=>gsl_block_uint_struct" },
  { dao_gsl_vector_uint_GETF_owner, ".owner( self :gsl_vector_uint )=>int" },
  { dao_gsl_vector_uint_SETF_owner, ".owner=( self :gsl_vector_uint, owner :int )" },
  { dao_gsl_vector_uint_gsl_vector_uint, "gsl_vector_uint(  )=>gsl_vector_uint" },
  { NULL, NULL }
};
static void Dao_gsl_vector_uint_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_uint_Typer = 
{ "gsl_vector_uint", NULL,
  dao_gsl_vector_uint_Nums,
  dao_gsl_vector_uint_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_uint_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_uint_Typer = & gsl_vector_uint_Typer;
DaoType *dao_type_gsl_vector_uint = NULL;
static void dao_gsl_vector_uint_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uint *self = (gsl_vector_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uint);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_uint_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uint *self = (gsl_vector_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uint);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_uint_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uint *self = (gsl_vector_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uint);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_uint_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uint *self = (gsl_vector_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uint);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_uint_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uint *self = (gsl_vector_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uint);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_vector_uint_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uint *self = (gsl_vector_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uint);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_uint_struct );
}
static void dao_gsl_vector_uint_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uint *self = (gsl_vector_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uint);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_uint_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uint *self = (gsl_vector_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uint);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_uint_gsl_vector_uint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_uint *self = Dao_gsl_vector_uint_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_uint );
}
/* /usr/local/include/gsl/gsl_vector_uint.h */


static DaoNumItem dao__gsl_vector_uint_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_uint_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_uint_view__gsl_vector_uint_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_uint_view_Meths[] = 
{
  { dao__gsl_vector_uint_view_GETF_vector, ".vector( self :_gsl_vector_uint_view )=>gsl_vector_uint" },
  { dao__gsl_vector_uint_view__gsl_vector_uint_view, "_gsl_vector_uint_view(  )=>_gsl_vector_uint_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_uint_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_uint_view_Typer = 
{ "_gsl_vector_uint_view", NULL,
  dao__gsl_vector_uint_view_Nums,
  dao__gsl_vector_uint_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_uint_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_uint_view_Typer = & _gsl_vector_uint_view_Typer;
DaoType *dao_type__gsl_vector_uint_view = NULL;
static void dao__gsl_vector_uint_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_uint_view *self = (_gsl_vector_uint_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_uint_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_uint );
}
static void dao__gsl_vector_uint_view__gsl_vector_uint_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_uint_view *self = Dao__gsl_vector_uint_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_uint_view );
}
/* /usr/local/include/gsl/gsl_vector_uint.h */


static DaoNumItem dao__gsl_vector_uint_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_uint_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_uint_const_view__gsl_vector_uint_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_uint_const_view_Meths[] = 
{
  { dao__gsl_vector_uint_const_view_GETF_vector, ".vector( self :_gsl_vector_uint_const_view )=>gsl_vector_uint" },
  { dao__gsl_vector_uint_const_view__gsl_vector_uint_const_view, "_gsl_vector_uint_const_view(  )=>_gsl_vector_uint_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_uint_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_uint_const_view_Typer = 
{ "_gsl_vector_uint_const_view", NULL,
  dao__gsl_vector_uint_const_view_Nums,
  dao__gsl_vector_uint_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_uint_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_uint_const_view_Typer = & _gsl_vector_uint_const_view_Typer;
DaoType *dao_type__gsl_vector_uint_const_view = NULL;
static void dao__gsl_vector_uint_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_uint_const_view *self = (_gsl_vector_uint_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_uint_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_uint );
}
static void dao__gsl_vector_uint_const_view__gsl_vector_uint_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_uint_const_view *self = Dao__gsl_vector_uint_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_uint_const_view );
}
/* /usr/local/include/gsl/gsl_block_int.h */


static DaoNumItem dao_gsl_block_int_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_int_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_int_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_int_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_int_struct_gsl_block_int_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_int_struct_Meths[] = 
{
  { dao_gsl_block_int_struct_GETF_size, ".size( self :gsl_block_int_struct )=>int" },
  { dao_gsl_block_int_struct_SETF_size, ".size=( self :gsl_block_int_struct, size :int )" },
  { dao_gsl_block_int_struct_GETF_data, ".data( self :gsl_block_int_struct )=>int" },
  { dao_gsl_block_int_struct_gsl_block_int_struct, "gsl_block_int_struct(  )=>gsl_block_int_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_int_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_int_struct_Typer = 
{ "gsl_block_int_struct", NULL,
  dao_gsl_block_int_struct_Nums,
  dao_gsl_block_int_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_int_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_int_struct_Typer = & gsl_block_int_struct_Typer;
DaoType *dao_type_gsl_block_int_struct = NULL;
static void dao_gsl_block_int_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_int_struct *self = (struct gsl_block_int_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_int_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_int_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_int_struct *self = (struct gsl_block_int_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_int_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_int_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_int_struct *self = (struct gsl_block_int_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_int_struct);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_block_int_struct_gsl_block_int_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_int_struct *self = Dao_gsl_block_int_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_int_struct );
}
/* /usr/local/include/gsl/gsl_vector_int.h */


static DaoNumItem dao_gsl_vector_int_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_int_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_int_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_int_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_int_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_int_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_int_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_int_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_int_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_int_gsl_vector_int( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_int_Meths[] = 
{
  { dao_gsl_vector_int_GETF_size, ".size( self :gsl_vector_int )=>int" },
  { dao_gsl_vector_int_SETF_size, ".size=( self :gsl_vector_int, size :int )" },
  { dao_gsl_vector_int_GETF_stride, ".stride( self :gsl_vector_int )=>int" },
  { dao_gsl_vector_int_SETF_stride, ".stride=( self :gsl_vector_int, stride :int )" },
  { dao_gsl_vector_int_GETF_data, ".data( self :gsl_vector_int )=>int" },
  { dao_gsl_vector_int_GETF_block, ".block( self :gsl_vector_int )=>gsl_block_int_struct" },
  { dao_gsl_vector_int_GETF_owner, ".owner( self :gsl_vector_int )=>int" },
  { dao_gsl_vector_int_SETF_owner, ".owner=( self :gsl_vector_int, owner :int )" },
  { dao_gsl_vector_int_gsl_vector_int, "gsl_vector_int(  )=>gsl_vector_int" },
  { NULL, NULL }
};
static void Dao_gsl_vector_int_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_int_Typer = 
{ "gsl_vector_int", NULL,
  dao_gsl_vector_int_Nums,
  dao_gsl_vector_int_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_int_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_int_Typer = & gsl_vector_int_Typer;
DaoType *dao_type_gsl_vector_int = NULL;
static void dao_gsl_vector_int_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_int *self = (gsl_vector_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_int);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_int_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_int *self = (gsl_vector_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_int);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_int_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_int *self = (gsl_vector_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_int);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_int_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_int *self = (gsl_vector_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_int);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_int_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_int *self = (gsl_vector_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_int);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_vector_int_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_int *self = (gsl_vector_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_int);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_int_struct );
}
static void dao_gsl_vector_int_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_int *self = (gsl_vector_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_int);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_int_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_int *self = (gsl_vector_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_int);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_int_gsl_vector_int( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_int *self = Dao_gsl_vector_int_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_int );
}
/* /usr/local/include/gsl/gsl_vector_int.h */


static DaoNumItem dao__gsl_vector_int_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_int_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_int_view__gsl_vector_int_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_int_view_Meths[] = 
{
  { dao__gsl_vector_int_view_GETF_vector, ".vector( self :_gsl_vector_int_view )=>gsl_vector_int" },
  { dao__gsl_vector_int_view__gsl_vector_int_view, "_gsl_vector_int_view(  )=>_gsl_vector_int_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_int_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_int_view_Typer = 
{ "_gsl_vector_int_view", NULL,
  dao__gsl_vector_int_view_Nums,
  dao__gsl_vector_int_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_int_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_int_view_Typer = & _gsl_vector_int_view_Typer;
DaoType *dao_type__gsl_vector_int_view = NULL;
static void dao__gsl_vector_int_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_int_view *self = (_gsl_vector_int_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_int_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_int );
}
static void dao__gsl_vector_int_view__gsl_vector_int_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_int_view *self = Dao__gsl_vector_int_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_int_view );
}
/* /usr/local/include/gsl/gsl_vector_int.h */


static DaoNumItem dao__gsl_vector_int_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_int_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_int_const_view__gsl_vector_int_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_int_const_view_Meths[] = 
{
  { dao__gsl_vector_int_const_view_GETF_vector, ".vector( self :_gsl_vector_int_const_view )=>gsl_vector_int" },
  { dao__gsl_vector_int_const_view__gsl_vector_int_const_view, "_gsl_vector_int_const_view(  )=>_gsl_vector_int_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_int_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_int_const_view_Typer = 
{ "_gsl_vector_int_const_view", NULL,
  dao__gsl_vector_int_const_view_Nums,
  dao__gsl_vector_int_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_int_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_int_const_view_Typer = & _gsl_vector_int_const_view_Typer;
DaoType *dao_type__gsl_vector_int_const_view = NULL;
static void dao__gsl_vector_int_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_int_const_view *self = (_gsl_vector_int_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_int_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_int );
}
static void dao__gsl_vector_int_const_view__gsl_vector_int_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_int_const_view *self = Dao__gsl_vector_int_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_int_const_view );
}
/* /usr/local/include/gsl/gsl_block_ushort.h */


static DaoNumItem dao_gsl_block_ushort_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_ushort_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_ushort_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_ushort_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_ushort_struct_gsl_block_ushort_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_ushort_struct_Meths[] = 
{
  { dao_gsl_block_ushort_struct_GETF_size, ".size( self :gsl_block_ushort_struct )=>int" },
  { dao_gsl_block_ushort_struct_SETF_size, ".size=( self :gsl_block_ushort_struct, size :int )" },
  { dao_gsl_block_ushort_struct_GETF_data, ".data( self :gsl_block_ushort_struct )=>int" },
  { dao_gsl_block_ushort_struct_gsl_block_ushort_struct, "gsl_block_ushort_struct(  )=>gsl_block_ushort_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_ushort_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_ushort_struct_Typer = 
{ "gsl_block_ushort_struct", NULL,
  dao_gsl_block_ushort_struct_Nums,
  dao_gsl_block_ushort_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_ushort_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_ushort_struct_Typer = & gsl_block_ushort_struct_Typer;
DaoType *dao_type_gsl_block_ushort_struct = NULL;
static void dao_gsl_block_ushort_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_ushort_struct *self = (struct gsl_block_ushort_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_ushort_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_ushort_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_ushort_struct *self = (struct gsl_block_ushort_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_ushort_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_ushort_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_ushort_struct *self = (struct gsl_block_ushort_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_ushort_struct);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_block_ushort_struct_gsl_block_ushort_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_ushort_struct *self = Dao_gsl_block_ushort_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_ushort_struct );
}
/* /usr/local/include/gsl/gsl_vector_ushort.h */


static DaoNumItem dao_gsl_vector_ushort_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_ushort_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ushort_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ushort_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ushort_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ushort_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ushort_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ushort_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ushort_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_ushort_gsl_vector_ushort( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_ushort_Meths[] = 
{
  { dao_gsl_vector_ushort_GETF_size, ".size( self :gsl_vector_ushort )=>int" },
  { dao_gsl_vector_ushort_SETF_size, ".size=( self :gsl_vector_ushort, size :int )" },
  { dao_gsl_vector_ushort_GETF_stride, ".stride( self :gsl_vector_ushort )=>int" },
  { dao_gsl_vector_ushort_SETF_stride, ".stride=( self :gsl_vector_ushort, stride :int )" },
  { dao_gsl_vector_ushort_GETF_data, ".data( self :gsl_vector_ushort )=>int" },
  { dao_gsl_vector_ushort_GETF_block, ".block( self :gsl_vector_ushort )=>gsl_block_ushort_struct" },
  { dao_gsl_vector_ushort_GETF_owner, ".owner( self :gsl_vector_ushort )=>int" },
  { dao_gsl_vector_ushort_SETF_owner, ".owner=( self :gsl_vector_ushort, owner :int )" },
  { dao_gsl_vector_ushort_gsl_vector_ushort, "gsl_vector_ushort(  )=>gsl_vector_ushort" },
  { NULL, NULL }
};
static void Dao_gsl_vector_ushort_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_ushort_Typer = 
{ "gsl_vector_ushort", NULL,
  dao_gsl_vector_ushort_Nums,
  dao_gsl_vector_ushort_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_ushort_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_ushort_Typer = & gsl_vector_ushort_Typer;
DaoType *dao_type_gsl_vector_ushort = NULL;
static void dao_gsl_vector_ushort_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ushort *self = (gsl_vector_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ushort);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_ushort_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ushort *self = (gsl_vector_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ushort);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_ushort_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ushort *self = (gsl_vector_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ushort);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_ushort_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ushort *self = (gsl_vector_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ushort);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_ushort_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ushort *self = (gsl_vector_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ushort);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_vector_ushort_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ushort *self = (gsl_vector_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ushort);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_ushort_struct );
}
static void dao_gsl_vector_ushort_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ushort *self = (gsl_vector_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ushort);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_ushort_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_ushort *self = (gsl_vector_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_ushort);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_ushort_gsl_vector_ushort( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_ushort *self = Dao_gsl_vector_ushort_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_ushort );
}
/* /usr/local/include/gsl/gsl_vector_ushort.h */


static DaoNumItem dao__gsl_vector_ushort_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_ushort_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_ushort_view__gsl_vector_ushort_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_ushort_view_Meths[] = 
{
  { dao__gsl_vector_ushort_view_GETF_vector, ".vector( self :_gsl_vector_ushort_view )=>gsl_vector_ushort" },
  { dao__gsl_vector_ushort_view__gsl_vector_ushort_view, "_gsl_vector_ushort_view(  )=>_gsl_vector_ushort_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_ushort_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_ushort_view_Typer = 
{ "_gsl_vector_ushort_view", NULL,
  dao__gsl_vector_ushort_view_Nums,
  dao__gsl_vector_ushort_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_ushort_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_ushort_view_Typer = & _gsl_vector_ushort_view_Typer;
DaoType *dao_type__gsl_vector_ushort_view = NULL;
static void dao__gsl_vector_ushort_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_ushort_view *self = (_gsl_vector_ushort_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_ushort_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_ushort );
}
static void dao__gsl_vector_ushort_view__gsl_vector_ushort_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_ushort_view *self = Dao__gsl_vector_ushort_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_ushort_view );
}
/* /usr/local/include/gsl/gsl_vector_ushort.h */


static DaoNumItem dao__gsl_vector_ushort_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_ushort_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_ushort_const_view__gsl_vector_ushort_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_ushort_const_view_Meths[] = 
{
  { dao__gsl_vector_ushort_const_view_GETF_vector, ".vector( self :_gsl_vector_ushort_const_view )=>gsl_vector_ushort" },
  { dao__gsl_vector_ushort_const_view__gsl_vector_ushort_const_view, "_gsl_vector_ushort_const_view(  )=>_gsl_vector_ushort_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_ushort_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_ushort_const_view_Typer = 
{ "_gsl_vector_ushort_const_view", NULL,
  dao__gsl_vector_ushort_const_view_Nums,
  dao__gsl_vector_ushort_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_ushort_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_ushort_const_view_Typer = & _gsl_vector_ushort_const_view_Typer;
DaoType *dao_type__gsl_vector_ushort_const_view = NULL;
static void dao__gsl_vector_ushort_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_ushort_const_view *self = (_gsl_vector_ushort_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_ushort_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_ushort );
}
static void dao__gsl_vector_ushort_const_view__gsl_vector_ushort_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_ushort_const_view *self = Dao__gsl_vector_ushort_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_ushort_const_view );
}
/* /usr/local/include/gsl/gsl_block_short.h */


static DaoNumItem dao_gsl_block_short_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_short_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_short_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_short_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_short_struct_gsl_block_short_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_short_struct_Meths[] = 
{
  { dao_gsl_block_short_struct_GETF_size, ".size( self :gsl_block_short_struct )=>int" },
  { dao_gsl_block_short_struct_SETF_size, ".size=( self :gsl_block_short_struct, size :int )" },
  { dao_gsl_block_short_struct_GETF_data, ".data( self :gsl_block_short_struct )=>int" },
  { dao_gsl_block_short_struct_gsl_block_short_struct, "gsl_block_short_struct(  )=>gsl_block_short_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_short_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_short_struct_Typer = 
{ "gsl_block_short_struct", NULL,
  dao_gsl_block_short_struct_Nums,
  dao_gsl_block_short_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_short_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_short_struct_Typer = & gsl_block_short_struct_Typer;
DaoType *dao_type_gsl_block_short_struct = NULL;
static void dao_gsl_block_short_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_short_struct *self = (struct gsl_block_short_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_short_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_short_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_short_struct *self = (struct gsl_block_short_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_short_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_short_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_short_struct *self = (struct gsl_block_short_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_short_struct);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_block_short_struct_gsl_block_short_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_short_struct *self = Dao_gsl_block_short_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_short_struct );
}
/* /usr/local/include/gsl/gsl_vector_short.h */


static DaoNumItem dao_gsl_vector_short_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_short_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_short_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_short_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_short_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_short_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_short_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_short_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_short_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_short_gsl_vector_short( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_short_Meths[] = 
{
  { dao_gsl_vector_short_GETF_size, ".size( self :gsl_vector_short )=>int" },
  { dao_gsl_vector_short_SETF_size, ".size=( self :gsl_vector_short, size :int )" },
  { dao_gsl_vector_short_GETF_stride, ".stride( self :gsl_vector_short )=>int" },
  { dao_gsl_vector_short_SETF_stride, ".stride=( self :gsl_vector_short, stride :int )" },
  { dao_gsl_vector_short_GETF_data, ".data( self :gsl_vector_short )=>int" },
  { dao_gsl_vector_short_GETF_block, ".block( self :gsl_vector_short )=>gsl_block_short_struct" },
  { dao_gsl_vector_short_GETF_owner, ".owner( self :gsl_vector_short )=>int" },
  { dao_gsl_vector_short_SETF_owner, ".owner=( self :gsl_vector_short, owner :int )" },
  { dao_gsl_vector_short_gsl_vector_short, "gsl_vector_short(  )=>gsl_vector_short" },
  { NULL, NULL }
};
static void Dao_gsl_vector_short_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_short_Typer = 
{ "gsl_vector_short", NULL,
  dao_gsl_vector_short_Nums,
  dao_gsl_vector_short_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_short_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_short_Typer = & gsl_vector_short_Typer;
DaoType *dao_type_gsl_vector_short = NULL;
static void dao_gsl_vector_short_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_short *self = (gsl_vector_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_short);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_short_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_short *self = (gsl_vector_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_short);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_short_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_short *self = (gsl_vector_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_short);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_short_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_short *self = (gsl_vector_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_short);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_short_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_short *self = (gsl_vector_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_short);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_vector_short_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_short *self = (gsl_vector_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_short);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_short_struct );
}
static void dao_gsl_vector_short_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_short *self = (gsl_vector_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_short);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_short_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_short *self = (gsl_vector_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_short);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_short_gsl_vector_short( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_short *self = Dao_gsl_vector_short_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_short );
}
/* /usr/local/include/gsl/gsl_vector_short.h */


static DaoNumItem dao__gsl_vector_short_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_short_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_short_view__gsl_vector_short_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_short_view_Meths[] = 
{
  { dao__gsl_vector_short_view_GETF_vector, ".vector( self :_gsl_vector_short_view )=>gsl_vector_short" },
  { dao__gsl_vector_short_view__gsl_vector_short_view, "_gsl_vector_short_view(  )=>_gsl_vector_short_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_short_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_short_view_Typer = 
{ "_gsl_vector_short_view", NULL,
  dao__gsl_vector_short_view_Nums,
  dao__gsl_vector_short_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_short_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_short_view_Typer = & _gsl_vector_short_view_Typer;
DaoType *dao_type__gsl_vector_short_view = NULL;
static void dao__gsl_vector_short_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_short_view *self = (_gsl_vector_short_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_short_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_short );
}
static void dao__gsl_vector_short_view__gsl_vector_short_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_short_view *self = Dao__gsl_vector_short_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_short_view );
}
/* /usr/local/include/gsl/gsl_vector_short.h */


static DaoNumItem dao__gsl_vector_short_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_short_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_short_const_view__gsl_vector_short_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_short_const_view_Meths[] = 
{
  { dao__gsl_vector_short_const_view_GETF_vector, ".vector( self :_gsl_vector_short_const_view )=>gsl_vector_short" },
  { dao__gsl_vector_short_const_view__gsl_vector_short_const_view, "_gsl_vector_short_const_view(  )=>_gsl_vector_short_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_short_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_short_const_view_Typer = 
{ "_gsl_vector_short_const_view", NULL,
  dao__gsl_vector_short_const_view_Nums,
  dao__gsl_vector_short_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_short_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_short_const_view_Typer = & _gsl_vector_short_const_view_Typer;
DaoType *dao_type__gsl_vector_short_const_view = NULL;
static void dao__gsl_vector_short_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_short_const_view *self = (_gsl_vector_short_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_short_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_short );
}
static void dao__gsl_vector_short_const_view__gsl_vector_short_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_short_const_view *self = Dao__gsl_vector_short_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_short_const_view );
}
/* /usr/local/include/gsl/gsl_block_uchar.h */


static DaoNumItem dao_gsl_block_uchar_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_uchar_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_uchar_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_uchar_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_uchar_struct_gsl_block_uchar_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_uchar_struct_Meths[] = 
{
  { dao_gsl_block_uchar_struct_GETF_size, ".size( self :gsl_block_uchar_struct )=>int" },
  { dao_gsl_block_uchar_struct_SETF_size, ".size=( self :gsl_block_uchar_struct, size :int )" },
  { dao_gsl_block_uchar_struct_GETF_data, ".data( self :gsl_block_uchar_struct )=>string" },
  { dao_gsl_block_uchar_struct_gsl_block_uchar_struct, "gsl_block_uchar_struct(  )=>gsl_block_uchar_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_uchar_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_uchar_struct_Typer = 
{ "gsl_block_uchar_struct", NULL,
  dao_gsl_block_uchar_struct_Nums,
  dao_gsl_block_uchar_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_uchar_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_uchar_struct_Typer = & gsl_block_uchar_struct_Typer;
DaoType *dao_type_gsl_block_uchar_struct = NULL;
static void dao_gsl_block_uchar_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_uchar_struct *self = (struct gsl_block_uchar_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_uchar_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_uchar_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_uchar_struct *self = (struct gsl_block_uchar_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_uchar_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_uchar_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_uchar_struct *self = (struct gsl_block_uchar_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_uchar_struct);
  DaoProcess_PutMBString( _proc, (char*) self->data );
}
static void dao_gsl_block_uchar_struct_gsl_block_uchar_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_uchar_struct *self = Dao_gsl_block_uchar_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_uchar_struct );
}
/* /usr/local/include/gsl/gsl_vector_uchar.h */


static DaoNumItem dao_gsl_vector_uchar_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_uchar_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uchar_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uchar_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uchar_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uchar_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uchar_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uchar_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uchar_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_uchar_gsl_vector_uchar( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_uchar_Meths[] = 
{
  { dao_gsl_vector_uchar_GETF_size, ".size( self :gsl_vector_uchar )=>int" },
  { dao_gsl_vector_uchar_SETF_size, ".size=( self :gsl_vector_uchar, size :int )" },
  { dao_gsl_vector_uchar_GETF_stride, ".stride( self :gsl_vector_uchar )=>int" },
  { dao_gsl_vector_uchar_SETF_stride, ".stride=( self :gsl_vector_uchar, stride :int )" },
  { dao_gsl_vector_uchar_GETF_data, ".data( self :gsl_vector_uchar )=>string" },
  { dao_gsl_vector_uchar_GETF_block, ".block( self :gsl_vector_uchar )=>gsl_block_uchar_struct" },
  { dao_gsl_vector_uchar_GETF_owner, ".owner( self :gsl_vector_uchar )=>int" },
  { dao_gsl_vector_uchar_SETF_owner, ".owner=( self :gsl_vector_uchar, owner :int )" },
  { dao_gsl_vector_uchar_gsl_vector_uchar, "gsl_vector_uchar(  )=>gsl_vector_uchar" },
  { NULL, NULL }
};
static void Dao_gsl_vector_uchar_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_uchar_Typer = 
{ "gsl_vector_uchar", NULL,
  dao_gsl_vector_uchar_Nums,
  dao_gsl_vector_uchar_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_uchar_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_uchar_Typer = & gsl_vector_uchar_Typer;
DaoType *dao_type_gsl_vector_uchar = NULL;
static void dao_gsl_vector_uchar_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uchar *self = (gsl_vector_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uchar);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_uchar_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uchar *self = (gsl_vector_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uchar);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_uchar_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uchar *self = (gsl_vector_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uchar);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_uchar_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uchar *self = (gsl_vector_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uchar);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_uchar_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uchar *self = (gsl_vector_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uchar);
  DaoProcess_PutMBString( _proc, (char*) self->data );
}
static void dao_gsl_vector_uchar_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uchar *self = (gsl_vector_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uchar);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_uchar_struct );
}
static void dao_gsl_vector_uchar_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uchar *self = (gsl_vector_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uchar);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_uchar_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_uchar *self = (gsl_vector_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_uchar);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_uchar_gsl_vector_uchar( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_uchar *self = Dao_gsl_vector_uchar_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_uchar );
}
/* /usr/local/include/gsl/gsl_vector_uchar.h */


static DaoNumItem dao__gsl_vector_uchar_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_uchar_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_uchar_view__gsl_vector_uchar_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_uchar_view_Meths[] = 
{
  { dao__gsl_vector_uchar_view_GETF_vector, ".vector( self :_gsl_vector_uchar_view )=>gsl_vector_uchar" },
  { dao__gsl_vector_uchar_view__gsl_vector_uchar_view, "_gsl_vector_uchar_view(  )=>_gsl_vector_uchar_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_uchar_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_uchar_view_Typer = 
{ "_gsl_vector_uchar_view", NULL,
  dao__gsl_vector_uchar_view_Nums,
  dao__gsl_vector_uchar_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_uchar_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_uchar_view_Typer = & _gsl_vector_uchar_view_Typer;
DaoType *dao_type__gsl_vector_uchar_view = NULL;
static void dao__gsl_vector_uchar_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_uchar_view *self = (_gsl_vector_uchar_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_uchar_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_uchar );
}
static void dao__gsl_vector_uchar_view__gsl_vector_uchar_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_uchar_view *self = Dao__gsl_vector_uchar_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_uchar_view );
}
/* /usr/local/include/gsl/gsl_vector_uchar.h */


static DaoNumItem dao__gsl_vector_uchar_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_uchar_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_uchar_const_view__gsl_vector_uchar_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_uchar_const_view_Meths[] = 
{
  { dao__gsl_vector_uchar_const_view_GETF_vector, ".vector( self :_gsl_vector_uchar_const_view )=>gsl_vector_uchar" },
  { dao__gsl_vector_uchar_const_view__gsl_vector_uchar_const_view, "_gsl_vector_uchar_const_view(  )=>_gsl_vector_uchar_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_uchar_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_uchar_const_view_Typer = 
{ "_gsl_vector_uchar_const_view", NULL,
  dao__gsl_vector_uchar_const_view_Nums,
  dao__gsl_vector_uchar_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_uchar_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_uchar_const_view_Typer = & _gsl_vector_uchar_const_view_Typer;
DaoType *dao_type__gsl_vector_uchar_const_view = NULL;
static void dao__gsl_vector_uchar_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_uchar_const_view *self = (_gsl_vector_uchar_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_uchar_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_uchar );
}
static void dao__gsl_vector_uchar_const_view__gsl_vector_uchar_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_uchar_const_view *self = Dao__gsl_vector_uchar_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_uchar_const_view );
}
/* /usr/local/include/gsl/gsl_block_char.h */


static DaoNumItem dao_gsl_block_char_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_block_char_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_char_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_char_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_block_char_struct_gsl_block_char_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_block_char_struct_Meths[] = 
{
  { dao_gsl_block_char_struct_GETF_size, ".size( self :gsl_block_char_struct )=>int" },
  { dao_gsl_block_char_struct_SETF_size, ".size=( self :gsl_block_char_struct, size :int )" },
  { dao_gsl_block_char_struct_GETF_data, ".data( self :gsl_block_char_struct )=>string" },
  { dao_gsl_block_char_struct_gsl_block_char_struct, "gsl_block_char_struct(  )=>gsl_block_char_struct" },
  { NULL, NULL }
};
static void Dao_gsl_block_char_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_block_char_struct_Typer = 
{ "gsl_block_char_struct", NULL,
  dao_gsl_block_char_struct_Nums,
  dao_gsl_block_char_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_block_char_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_block_char_struct_Typer = & gsl_block_char_struct_Typer;
DaoType *dao_type_gsl_block_char_struct = NULL;
static void dao_gsl_block_char_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_char_struct *self = (struct gsl_block_char_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_char_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_block_char_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_char_struct *self = (struct gsl_block_char_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_char_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_block_char_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_block_char_struct *self = (struct gsl_block_char_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_block_char_struct);
  DaoProcess_PutMBString( _proc, (char*) self->data );
}
static void dao_gsl_block_char_struct_gsl_block_char_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_block_char_struct *self = Dao_gsl_block_char_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_block_char_struct );
}
/* /usr/local/include/gsl/gsl_vector_char.h */


static DaoNumItem dao_gsl_vector_char_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_vector_char_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_char_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_char_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_char_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_char_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_char_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_char_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_char_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_vector_char_gsl_vector_char( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_vector_char_Meths[] = 
{
  { dao_gsl_vector_char_GETF_size, ".size( self :gsl_vector_char )=>int" },
  { dao_gsl_vector_char_SETF_size, ".size=( self :gsl_vector_char, size :int )" },
  { dao_gsl_vector_char_GETF_stride, ".stride( self :gsl_vector_char )=>int" },
  { dao_gsl_vector_char_SETF_stride, ".stride=( self :gsl_vector_char, stride :int )" },
  { dao_gsl_vector_char_GETF_data, ".data( self :gsl_vector_char )=>string" },
  { dao_gsl_vector_char_GETF_block, ".block( self :gsl_vector_char )=>gsl_block_char_struct" },
  { dao_gsl_vector_char_GETF_owner, ".owner( self :gsl_vector_char )=>int" },
  { dao_gsl_vector_char_SETF_owner, ".owner=( self :gsl_vector_char, owner :int )" },
  { dao_gsl_vector_char_gsl_vector_char, "gsl_vector_char(  )=>gsl_vector_char" },
  { NULL, NULL }
};
static void Dao_gsl_vector_char_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_vector_char_Typer = 
{ "gsl_vector_char", NULL,
  dao_gsl_vector_char_Nums,
  dao_gsl_vector_char_Meths,
  { NULL },
  { NULL },
  Dao_gsl_vector_char_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_vector_char_Typer = & gsl_vector_char_Typer;
DaoType *dao_type_gsl_vector_char = NULL;
static void dao_gsl_vector_char_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_char *self = (gsl_vector_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_char);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_vector_char_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_char *self = (gsl_vector_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_char);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_char_GETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_char *self = (gsl_vector_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_char);
  DaoProcess_PutInteger( _proc, (daoint) self->stride );
}
static void dao_gsl_vector_char_SETF_stride( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_char *self = (gsl_vector_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_char);
  self->stride = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_char_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_char *self = (gsl_vector_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_char);
  DaoProcess_PutMBString( _proc, (char*) self->data );
}
static void dao_gsl_vector_char_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_char *self = (gsl_vector_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_char);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_char_struct );
}
static void dao_gsl_vector_char_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_char *self = (gsl_vector_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_char);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_vector_char_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_vector_char *self = (gsl_vector_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_vector_char);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_vector_char_gsl_vector_char( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_vector_char *self = Dao_gsl_vector_char_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_vector_char );
}
/* /usr/local/include/gsl/gsl_vector_char.h */


static DaoNumItem dao__gsl_vector_char_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_char_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_char_view__gsl_vector_char_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_char_view_Meths[] = 
{
  { dao__gsl_vector_char_view_GETF_vector, ".vector( self :_gsl_vector_char_view )=>gsl_vector_char" },
  { dao__gsl_vector_char_view__gsl_vector_char_view, "_gsl_vector_char_view(  )=>_gsl_vector_char_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_char_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_char_view_Typer = 
{ "_gsl_vector_char_view", NULL,
  dao__gsl_vector_char_view_Nums,
  dao__gsl_vector_char_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_char_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_char_view_Typer = & _gsl_vector_char_view_Typer;
DaoType *dao_type__gsl_vector_char_view = NULL;
static void dao__gsl_vector_char_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_char_view *self = (_gsl_vector_char_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_char_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_char );
}
static void dao__gsl_vector_char_view__gsl_vector_char_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_char_view *self = Dao__gsl_vector_char_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_char_view );
}
/* /usr/local/include/gsl/gsl_vector_char.h */


static DaoNumItem dao__gsl_vector_char_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_vector_char_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_vector_char_const_view__gsl_vector_char_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_vector_char_const_view_Meths[] = 
{
  { dao__gsl_vector_char_const_view_GETF_vector, ".vector( self :_gsl_vector_char_const_view )=>gsl_vector_char" },
  { dao__gsl_vector_char_const_view__gsl_vector_char_const_view, "_gsl_vector_char_const_view(  )=>_gsl_vector_char_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_vector_char_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_vector_char_const_view_Typer = 
{ "_gsl_vector_char_const_view", NULL,
  dao__gsl_vector_char_const_view_Nums,
  dao__gsl_vector_char_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_vector_char_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_vector_char_const_view_Typer = & _gsl_vector_char_const_view_Typer;
DaoType *dao_type__gsl_vector_char_const_view = NULL;
static void dao__gsl_vector_char_const_view_GETF_vector( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_vector_char_const_view *self = (_gsl_vector_char_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_vector_char_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->vector, dao_type_gsl_vector_char );
}
static void dao__gsl_vector_char_const_view__gsl_vector_char_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_vector_char_const_view *self = Dao__gsl_vector_char_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_vector_char_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_complex_long_double.h */


static DaoNumItem dao_gsl_matrix_complex_long_double_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_complex_long_double_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_long_double_gsl_matrix_complex_long_double( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_complex_long_double_Meths[] = 
{
  { dao_gsl_matrix_complex_long_double_GETF_size1, ".size1( self :gsl_matrix_complex_long_double )=>int" },
  { dao_gsl_matrix_complex_long_double_SETF_size1, ".size1=( self :gsl_matrix_complex_long_double, size1 :int )" },
  { dao_gsl_matrix_complex_long_double_GETF_size2, ".size2( self :gsl_matrix_complex_long_double )=>int" },
  { dao_gsl_matrix_complex_long_double_SETF_size2, ".size2=( self :gsl_matrix_complex_long_double, size2 :int )" },
  { dao_gsl_matrix_complex_long_double_GETF_tda, ".tda( self :gsl_matrix_complex_long_double )=>int" },
  { dao_gsl_matrix_complex_long_double_SETF_tda, ".tda=( self :gsl_matrix_complex_long_double, tda :int )" },
  { dao_gsl_matrix_complex_long_double_GETF_data, ".data( self :gsl_matrix_complex_long_double )=>double" },
  { dao_gsl_matrix_complex_long_double_GETF_block, ".block( self :gsl_matrix_complex_long_double )=>gsl_block_complex_long_double_struct" },
  { dao_gsl_matrix_complex_long_double_GETF_owner, ".owner( self :gsl_matrix_complex_long_double )=>int" },
  { dao_gsl_matrix_complex_long_double_SETF_owner, ".owner=( self :gsl_matrix_complex_long_double, owner :int )" },
  { dao_gsl_matrix_complex_long_double_gsl_matrix_complex_long_double, "gsl_matrix_complex_long_double(  )=>gsl_matrix_complex_long_double" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_complex_long_double_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_complex_long_double_Typer = 
{ "gsl_matrix_complex_long_double", NULL,
  dao_gsl_matrix_complex_long_double_Nums,
  dao_gsl_matrix_complex_long_double_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_complex_long_double_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_complex_long_double_Typer = & gsl_matrix_complex_long_double_Typer;
DaoType *dao_type_gsl_matrix_complex_long_double = NULL;
static void dao_gsl_matrix_complex_long_double_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_complex_long_double_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_long_double_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_complex_long_double_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_long_double_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_complex_long_double_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_long_double_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_matrix_complex_long_double_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_complex_long_double_struct );
}
static void dao_gsl_matrix_complex_long_double_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_complex_long_double_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_long_double *self = (gsl_matrix_complex_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_long_double);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_long_double_gsl_matrix_complex_long_double( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_complex_long_double *self = Dao_gsl_matrix_complex_long_double_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_complex_long_double );
}
/* /usr/local/include/gsl/gsl_matrix_complex_long_double.h */


static DaoNumItem dao__gsl_matrix_complex_long_double_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_complex_long_double_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_complex_long_double_view__gsl_matrix_complex_long_double_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_complex_long_double_view_Meths[] = 
{
  { dao__gsl_matrix_complex_long_double_view_GETF_matrix, ".matrix( self :_gsl_matrix_complex_long_double_view )=>gsl_matrix_complex_long_double" },
  { dao__gsl_matrix_complex_long_double_view__gsl_matrix_complex_long_double_view, "_gsl_matrix_complex_long_double_view(  )=>_gsl_matrix_complex_long_double_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_complex_long_double_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_complex_long_double_view_Typer = 
{ "_gsl_matrix_complex_long_double_view", NULL,
  dao__gsl_matrix_complex_long_double_view_Nums,
  dao__gsl_matrix_complex_long_double_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_complex_long_double_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_complex_long_double_view_Typer = & _gsl_matrix_complex_long_double_view_Typer;
DaoType *dao_type__gsl_matrix_complex_long_double_view = NULL;
static void dao__gsl_matrix_complex_long_double_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_complex_long_double_view *self = (_gsl_matrix_complex_long_double_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_complex_long_double_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_complex_long_double );
}
static void dao__gsl_matrix_complex_long_double_view__gsl_matrix_complex_long_double_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_complex_long_double_view *self = Dao__gsl_matrix_complex_long_double_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_complex_long_double_view );
}
/* /usr/local/include/gsl/gsl_matrix_complex_long_double.h */


static DaoNumItem dao__gsl_matrix_complex_long_double_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_complex_long_double_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_complex_long_double_const_view__gsl_matrix_complex_long_double_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_complex_long_double_const_view_Meths[] = 
{
  { dao__gsl_matrix_complex_long_double_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_complex_long_double_const_view )=>gsl_matrix_complex_long_double" },
  { dao__gsl_matrix_complex_long_double_const_view__gsl_matrix_complex_long_double_const_view, "_gsl_matrix_complex_long_double_const_view(  )=>_gsl_matrix_complex_long_double_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_complex_long_double_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_complex_long_double_const_view_Typer = 
{ "_gsl_matrix_complex_long_double_const_view", NULL,
  dao__gsl_matrix_complex_long_double_const_view_Nums,
  dao__gsl_matrix_complex_long_double_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_complex_long_double_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_complex_long_double_const_view_Typer = & _gsl_matrix_complex_long_double_const_view_Typer;
DaoType *dao_type__gsl_matrix_complex_long_double_const_view = NULL;
static void dao__gsl_matrix_complex_long_double_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_complex_long_double_const_view *self = (_gsl_matrix_complex_long_double_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_complex_long_double_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_complex_long_double );
}
static void dao__gsl_matrix_complex_long_double_const_view__gsl_matrix_complex_long_double_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_complex_long_double_const_view *self = Dao__gsl_matrix_complex_long_double_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_complex_long_double_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_complex_double.h */


static DaoNumItem dao_gsl_matrix_complex_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_complex_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_gsl_matrix_complex( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_complex_Meths[] = 
{
  { dao_gsl_matrix_complex_GETF_size1, ".size1( self :gsl_matrix_complex )=>int" },
  { dao_gsl_matrix_complex_SETF_size1, ".size1=( self :gsl_matrix_complex, size1 :int )" },
  { dao_gsl_matrix_complex_GETF_size2, ".size2( self :gsl_matrix_complex )=>int" },
  { dao_gsl_matrix_complex_SETF_size2, ".size2=( self :gsl_matrix_complex, size2 :int )" },
  { dao_gsl_matrix_complex_GETF_tda, ".tda( self :gsl_matrix_complex )=>int" },
  { dao_gsl_matrix_complex_SETF_tda, ".tda=( self :gsl_matrix_complex, tda :int )" },
  { dao_gsl_matrix_complex_GETF_data, ".data( self :gsl_matrix_complex )=>double" },
  { dao_gsl_matrix_complex_GETF_block, ".block( self :gsl_matrix_complex )=>gsl_block_complex_struct" },
  { dao_gsl_matrix_complex_GETF_owner, ".owner( self :gsl_matrix_complex )=>int" },
  { dao_gsl_matrix_complex_SETF_owner, ".owner=( self :gsl_matrix_complex, owner :int )" },
  { dao_gsl_matrix_complex_gsl_matrix_complex, "gsl_matrix_complex(  )=>gsl_matrix_complex" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_complex_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_complex_Typer = 
{ "gsl_matrix_complex", NULL,
  dao_gsl_matrix_complex_Nums,
  dao_gsl_matrix_complex_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_complex_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_complex_Typer = & gsl_matrix_complex_Typer;
DaoType *dao_type_gsl_matrix_complex = NULL;
static void dao_gsl_matrix_complex_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_complex_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_complex_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_complex_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_matrix_complex_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_complex_struct );
}
static void dao_gsl_matrix_complex_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_complex_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex *self = (gsl_matrix_complex*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_gsl_matrix_complex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_complex *self = Dao_gsl_matrix_complex_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_complex );
}
/* /usr/local/include/gsl/gsl_matrix_complex_double.h */


static DaoNumItem dao__gsl_matrix_complex_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_complex_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_complex_view__gsl_matrix_complex_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_complex_view_Meths[] = 
{
  { dao__gsl_matrix_complex_view_GETF_matrix, ".matrix( self :_gsl_matrix_complex_view )=>gsl_matrix_complex" },
  { dao__gsl_matrix_complex_view__gsl_matrix_complex_view, "_gsl_matrix_complex_view(  )=>_gsl_matrix_complex_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_complex_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_complex_view_Typer = 
{ "_gsl_matrix_complex_view", NULL,
  dao__gsl_matrix_complex_view_Nums,
  dao__gsl_matrix_complex_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_complex_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_complex_view_Typer = & _gsl_matrix_complex_view_Typer;
DaoType *dao_type__gsl_matrix_complex_view = NULL;
static void dao__gsl_matrix_complex_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_complex_view *self = (_gsl_matrix_complex_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_complex_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_complex );
}
static void dao__gsl_matrix_complex_view__gsl_matrix_complex_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_complex_view *self = Dao__gsl_matrix_complex_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_complex_view );
}
/* /usr/local/include/gsl/gsl_matrix_complex_double.h */


static DaoNumItem dao__gsl_matrix_complex_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_complex_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_complex_const_view__gsl_matrix_complex_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_complex_const_view_Meths[] = 
{
  { dao__gsl_matrix_complex_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_complex_const_view )=>gsl_matrix_complex" },
  { dao__gsl_matrix_complex_const_view__gsl_matrix_complex_const_view, "_gsl_matrix_complex_const_view(  )=>_gsl_matrix_complex_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_complex_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_complex_const_view_Typer = 
{ "_gsl_matrix_complex_const_view", NULL,
  dao__gsl_matrix_complex_const_view_Nums,
  dao__gsl_matrix_complex_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_complex_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_complex_const_view_Typer = & _gsl_matrix_complex_const_view_Typer;
DaoType *dao_type__gsl_matrix_complex_const_view = NULL;
static void dao__gsl_matrix_complex_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_complex_const_view *self = (_gsl_matrix_complex_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_complex_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_complex );
}
static void dao__gsl_matrix_complex_const_view__gsl_matrix_complex_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_complex_const_view *self = Dao__gsl_matrix_complex_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_complex_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_complex_float.h */


static DaoNumItem dao_gsl_matrix_complex_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_complex_float_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_complex_float_gsl_matrix_complex_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_complex_float_Meths[] = 
{
  { dao_gsl_matrix_complex_float_GETF_size1, ".size1( self :gsl_matrix_complex_float )=>int" },
  { dao_gsl_matrix_complex_float_SETF_size1, ".size1=( self :gsl_matrix_complex_float, size1 :int )" },
  { dao_gsl_matrix_complex_float_GETF_size2, ".size2( self :gsl_matrix_complex_float )=>int" },
  { dao_gsl_matrix_complex_float_SETF_size2, ".size2=( self :gsl_matrix_complex_float, size2 :int )" },
  { dao_gsl_matrix_complex_float_GETF_tda, ".tda( self :gsl_matrix_complex_float )=>int" },
  { dao_gsl_matrix_complex_float_SETF_tda, ".tda=( self :gsl_matrix_complex_float, tda :int )" },
  { dao_gsl_matrix_complex_float_GETF_data, ".data( self :gsl_matrix_complex_float )=>float" },
  { dao_gsl_matrix_complex_float_GETF_block, ".block( self :gsl_matrix_complex_float )=>gsl_block_complex_float_struct" },
  { dao_gsl_matrix_complex_float_GETF_owner, ".owner( self :gsl_matrix_complex_float )=>int" },
  { dao_gsl_matrix_complex_float_SETF_owner, ".owner=( self :gsl_matrix_complex_float, owner :int )" },
  { dao_gsl_matrix_complex_float_gsl_matrix_complex_float, "gsl_matrix_complex_float(  )=>gsl_matrix_complex_float" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_complex_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_complex_float_Typer = 
{ "gsl_matrix_complex_float", NULL,
  dao_gsl_matrix_complex_float_Nums,
  dao_gsl_matrix_complex_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_complex_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_complex_float_Typer = & gsl_matrix_complex_float_Typer;
DaoType *dao_type_gsl_matrix_complex_float = NULL;
static void dao_gsl_matrix_complex_float_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_complex_float_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_float_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_complex_float_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_float_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_complex_float_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_float_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  DaoProcess_PutVectorF( _proc, (float*) self->data, 0 );
}
static void dao_gsl_matrix_complex_float_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_complex_float_struct );
}
static void dao_gsl_matrix_complex_float_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_complex_float_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_complex_float *self = (gsl_matrix_complex_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_complex_float);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_complex_float_gsl_matrix_complex_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_complex_float *self = Dao_gsl_matrix_complex_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_complex_float );
}
/* /usr/local/include/gsl/gsl_matrix_complex_float.h */


static DaoNumItem dao__gsl_matrix_complex_float_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_complex_float_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_complex_float_view__gsl_matrix_complex_float_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_complex_float_view_Meths[] = 
{
  { dao__gsl_matrix_complex_float_view_GETF_matrix, ".matrix( self :_gsl_matrix_complex_float_view )=>gsl_matrix_complex_float" },
  { dao__gsl_matrix_complex_float_view__gsl_matrix_complex_float_view, "_gsl_matrix_complex_float_view(  )=>_gsl_matrix_complex_float_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_complex_float_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_complex_float_view_Typer = 
{ "_gsl_matrix_complex_float_view", NULL,
  dao__gsl_matrix_complex_float_view_Nums,
  dao__gsl_matrix_complex_float_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_complex_float_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_complex_float_view_Typer = & _gsl_matrix_complex_float_view_Typer;
DaoType *dao_type__gsl_matrix_complex_float_view = NULL;
static void dao__gsl_matrix_complex_float_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_complex_float_view *self = (_gsl_matrix_complex_float_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_complex_float_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_complex_float );
}
static void dao__gsl_matrix_complex_float_view__gsl_matrix_complex_float_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_complex_float_view *self = Dao__gsl_matrix_complex_float_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_complex_float_view );
}
/* /usr/local/include/gsl/gsl_matrix_complex_float.h */


static DaoNumItem dao__gsl_matrix_complex_float_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_complex_float_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_complex_float_const_view__gsl_matrix_complex_float_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_complex_float_const_view_Meths[] = 
{
  { dao__gsl_matrix_complex_float_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_complex_float_const_view )=>gsl_matrix_complex_float" },
  { dao__gsl_matrix_complex_float_const_view__gsl_matrix_complex_float_const_view, "_gsl_matrix_complex_float_const_view(  )=>_gsl_matrix_complex_float_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_complex_float_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_complex_float_const_view_Typer = 
{ "_gsl_matrix_complex_float_const_view", NULL,
  dao__gsl_matrix_complex_float_const_view_Nums,
  dao__gsl_matrix_complex_float_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_complex_float_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_complex_float_const_view_Typer = & _gsl_matrix_complex_float_const_view_Typer;
DaoType *dao_type__gsl_matrix_complex_float_const_view = NULL;
static void dao__gsl_matrix_complex_float_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_complex_float_const_view *self = (_gsl_matrix_complex_float_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_complex_float_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_complex_float );
}
static void dao__gsl_matrix_complex_float_const_view__gsl_matrix_complex_float_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_complex_float_const_view *self = Dao__gsl_matrix_complex_float_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_complex_float_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_long_double.h */


static DaoNumItem dao_gsl_matrix_long_double_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_long_double_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_double_gsl_matrix_long_double( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_long_double_Meths[] = 
{
  { dao_gsl_matrix_long_double_GETF_size1, ".size1( self :gsl_matrix_long_double )=>int" },
  { dao_gsl_matrix_long_double_SETF_size1, ".size1=( self :gsl_matrix_long_double, size1 :int )" },
  { dao_gsl_matrix_long_double_GETF_size2, ".size2( self :gsl_matrix_long_double )=>int" },
  { dao_gsl_matrix_long_double_SETF_size2, ".size2=( self :gsl_matrix_long_double, size2 :int )" },
  { dao_gsl_matrix_long_double_GETF_tda, ".tda( self :gsl_matrix_long_double )=>int" },
  { dao_gsl_matrix_long_double_SETF_tda, ".tda=( self :gsl_matrix_long_double, tda :int )" },
  { dao_gsl_matrix_long_double_GETF_data, ".data( self :gsl_matrix_long_double )=>double" },
  { dao_gsl_matrix_long_double_GETF_block, ".block( self :gsl_matrix_long_double )=>gsl_block_long_double_struct" },
  { dao_gsl_matrix_long_double_GETF_owner, ".owner( self :gsl_matrix_long_double )=>int" },
  { dao_gsl_matrix_long_double_SETF_owner, ".owner=( self :gsl_matrix_long_double, owner :int )" },
  { dao_gsl_matrix_long_double_gsl_matrix_long_double, "gsl_matrix_long_double(  )=>gsl_matrix_long_double" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_long_double_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_long_double_Typer = 
{ "gsl_matrix_long_double", NULL,
  dao_gsl_matrix_long_double_Nums,
  dao_gsl_matrix_long_double_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_long_double_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_long_double_Typer = & gsl_matrix_long_double_Typer;
DaoType *dao_type_gsl_matrix_long_double = NULL;
static void dao_gsl_matrix_long_double_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_long_double_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_long_double_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_long_double_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_long_double_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_long_double_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_long_double_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_matrix_long_double_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_long_double_struct );
}
static void dao_gsl_matrix_long_double_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_long_double_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long_double *self = (gsl_matrix_long_double*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long_double);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_long_double_gsl_matrix_long_double( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_long_double *self = Dao_gsl_matrix_long_double_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_long_double );
}
/* /usr/local/include/gsl/gsl_matrix_long_double.h */


static DaoNumItem dao__gsl_matrix_long_double_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_long_double_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_long_double_view__gsl_matrix_long_double_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_long_double_view_Meths[] = 
{
  { dao__gsl_matrix_long_double_view_GETF_matrix, ".matrix( self :_gsl_matrix_long_double_view )=>gsl_matrix_long_double" },
  { dao__gsl_matrix_long_double_view__gsl_matrix_long_double_view, "_gsl_matrix_long_double_view(  )=>_gsl_matrix_long_double_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_long_double_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_long_double_view_Typer = 
{ "_gsl_matrix_long_double_view", NULL,
  dao__gsl_matrix_long_double_view_Nums,
  dao__gsl_matrix_long_double_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_long_double_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_long_double_view_Typer = & _gsl_matrix_long_double_view_Typer;
DaoType *dao_type__gsl_matrix_long_double_view = NULL;
static void dao__gsl_matrix_long_double_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_long_double_view *self = (_gsl_matrix_long_double_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_long_double_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_long_double );
}
static void dao__gsl_matrix_long_double_view__gsl_matrix_long_double_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_long_double_view *self = Dao__gsl_matrix_long_double_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_long_double_view );
}
/* /usr/local/include/gsl/gsl_matrix_long_double.h */


static DaoNumItem dao__gsl_matrix_long_double_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_long_double_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_long_double_const_view__gsl_matrix_long_double_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_long_double_const_view_Meths[] = 
{
  { dao__gsl_matrix_long_double_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_long_double_const_view )=>gsl_matrix_long_double" },
  { dao__gsl_matrix_long_double_const_view__gsl_matrix_long_double_const_view, "_gsl_matrix_long_double_const_view(  )=>_gsl_matrix_long_double_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_long_double_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_long_double_const_view_Typer = 
{ "_gsl_matrix_long_double_const_view", NULL,
  dao__gsl_matrix_long_double_const_view_Nums,
  dao__gsl_matrix_long_double_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_long_double_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_long_double_const_view_Typer = & _gsl_matrix_long_double_const_view_Typer;
DaoType *dao_type__gsl_matrix_long_double_const_view = NULL;
static void dao__gsl_matrix_long_double_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_long_double_const_view *self = (_gsl_matrix_long_double_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_long_double_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_long_double );
}
static void dao__gsl_matrix_long_double_const_view__gsl_matrix_long_double_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_long_double_const_view *self = Dao__gsl_matrix_long_double_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_long_double_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_double.h */


static DaoNumItem dao_gsl_matrix_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_gsl_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_Meths[] = 
{
  { dao_gsl_matrix_GETF_size1, ".size1( self :gsl_matrix )=>int" },
  { dao_gsl_matrix_SETF_size1, ".size1=( self :gsl_matrix, size1 :int )" },
  { dao_gsl_matrix_GETF_size2, ".size2( self :gsl_matrix )=>int" },
  { dao_gsl_matrix_SETF_size2, ".size2=( self :gsl_matrix, size2 :int )" },
  { dao_gsl_matrix_GETF_tda, ".tda( self :gsl_matrix )=>int" },
  { dao_gsl_matrix_SETF_tda, ".tda=( self :gsl_matrix, tda :int )" },
  { dao_gsl_matrix_GETF_data, ".data( self :gsl_matrix )=>double" },
  { dao_gsl_matrix_GETF_block, ".block( self :gsl_matrix )=>gsl_block_struct" },
  { dao_gsl_matrix_GETF_owner, ".owner( self :gsl_matrix )=>int" },
  { dao_gsl_matrix_SETF_owner, ".owner=( self :gsl_matrix, owner :int )" },
  { dao_gsl_matrix_gsl_matrix, "gsl_matrix(  )=>gsl_matrix" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_Typer = 
{ "gsl_matrix", NULL,
  dao_gsl_matrix_Nums,
  dao_gsl_matrix_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_Typer = & gsl_matrix_Typer;
DaoType *dao_type_gsl_matrix = NULL;
static void dao_gsl_matrix_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  DaoProcess_PutVectorD( _proc, (double*) self->data, 0 );
}
static void dao_gsl_matrix_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_struct );
}
static void dao_gsl_matrix_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix *self = (gsl_matrix*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_gsl_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix *self = Dao_gsl_matrix_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix );
}
/* /usr/local/include/gsl/gsl_matrix_double.h */


static DaoNumItem dao__gsl_matrix_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_view__gsl_matrix_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_view_Meths[] = 
{
  { dao__gsl_matrix_view_GETF_matrix, ".matrix( self :_gsl_matrix_view )=>gsl_matrix" },
  { dao__gsl_matrix_view__gsl_matrix_view, "_gsl_matrix_view(  )=>_gsl_matrix_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_view_Typer = 
{ "_gsl_matrix_view", NULL,
  dao__gsl_matrix_view_Nums,
  dao__gsl_matrix_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_view_Typer = & _gsl_matrix_view_Typer;
DaoType *dao_type__gsl_matrix_view = NULL;
static void dao__gsl_matrix_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_view *self = (_gsl_matrix_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix );
}
static void dao__gsl_matrix_view__gsl_matrix_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_view *self = Dao__gsl_matrix_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_view );
}
/* /usr/local/include/gsl/gsl_matrix_double.h */


static DaoNumItem dao__gsl_matrix_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_const_view__gsl_matrix_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_const_view_Meths[] = 
{
  { dao__gsl_matrix_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_const_view )=>gsl_matrix" },
  { dao__gsl_matrix_const_view__gsl_matrix_const_view, "_gsl_matrix_const_view(  )=>_gsl_matrix_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_const_view_Typer = 
{ "_gsl_matrix_const_view", NULL,
  dao__gsl_matrix_const_view_Nums,
  dao__gsl_matrix_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_const_view_Typer = & _gsl_matrix_const_view_Typer;
DaoType *dao_type__gsl_matrix_const_view = NULL;
static void dao__gsl_matrix_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_const_view *self = (_gsl_matrix_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix );
}
static void dao__gsl_matrix_const_view__gsl_matrix_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_const_view *self = Dao__gsl_matrix_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_float.h */


static DaoNumItem dao_gsl_matrix_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_float_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_float_gsl_matrix_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_float_Meths[] = 
{
  { dao_gsl_matrix_float_GETF_size1, ".size1( self :gsl_matrix_float )=>int" },
  { dao_gsl_matrix_float_SETF_size1, ".size1=( self :gsl_matrix_float, size1 :int )" },
  { dao_gsl_matrix_float_GETF_size2, ".size2( self :gsl_matrix_float )=>int" },
  { dao_gsl_matrix_float_SETF_size2, ".size2=( self :gsl_matrix_float, size2 :int )" },
  { dao_gsl_matrix_float_GETF_tda, ".tda( self :gsl_matrix_float )=>int" },
  { dao_gsl_matrix_float_SETF_tda, ".tda=( self :gsl_matrix_float, tda :int )" },
  { dao_gsl_matrix_float_GETF_data, ".data( self :gsl_matrix_float )=>float" },
  { dao_gsl_matrix_float_GETF_block, ".block( self :gsl_matrix_float )=>gsl_block_float_struct" },
  { dao_gsl_matrix_float_GETF_owner, ".owner( self :gsl_matrix_float )=>int" },
  { dao_gsl_matrix_float_SETF_owner, ".owner=( self :gsl_matrix_float, owner :int )" },
  { dao_gsl_matrix_float_gsl_matrix_float, "gsl_matrix_float(  )=>gsl_matrix_float" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_float_Typer = 
{ "gsl_matrix_float", NULL,
  dao_gsl_matrix_float_Nums,
  dao_gsl_matrix_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_float_Typer = & gsl_matrix_float_Typer;
DaoType *dao_type_gsl_matrix_float = NULL;
static void dao_gsl_matrix_float_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_float_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_float_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_float_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_float_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_float_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_float_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  DaoProcess_PutVectorF( _proc, (float*) self->data, 0 );
}
static void dao_gsl_matrix_float_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_float_struct );
}
static void dao_gsl_matrix_float_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_float_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_float *self = (gsl_matrix_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_float);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_float_gsl_matrix_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_float *self = Dao_gsl_matrix_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_float );
}
/* /usr/local/include/gsl/gsl_matrix_float.h */


static DaoNumItem dao__gsl_matrix_float_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_float_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_float_view__gsl_matrix_float_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_float_view_Meths[] = 
{
  { dao__gsl_matrix_float_view_GETF_matrix, ".matrix( self :_gsl_matrix_float_view )=>gsl_matrix_float" },
  { dao__gsl_matrix_float_view__gsl_matrix_float_view, "_gsl_matrix_float_view(  )=>_gsl_matrix_float_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_float_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_float_view_Typer = 
{ "_gsl_matrix_float_view", NULL,
  dao__gsl_matrix_float_view_Nums,
  dao__gsl_matrix_float_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_float_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_float_view_Typer = & _gsl_matrix_float_view_Typer;
DaoType *dao_type__gsl_matrix_float_view = NULL;
static void dao__gsl_matrix_float_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_float_view *self = (_gsl_matrix_float_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_float_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_float );
}
static void dao__gsl_matrix_float_view__gsl_matrix_float_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_float_view *self = Dao__gsl_matrix_float_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_float_view );
}
/* /usr/local/include/gsl/gsl_matrix_float.h */


static DaoNumItem dao__gsl_matrix_float_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_float_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_float_const_view__gsl_matrix_float_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_float_const_view_Meths[] = 
{
  { dao__gsl_matrix_float_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_float_const_view )=>gsl_matrix_float" },
  { dao__gsl_matrix_float_const_view__gsl_matrix_float_const_view, "_gsl_matrix_float_const_view(  )=>_gsl_matrix_float_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_float_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_float_const_view_Typer = 
{ "_gsl_matrix_float_const_view", NULL,
  dao__gsl_matrix_float_const_view_Nums,
  dao__gsl_matrix_float_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_float_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_float_const_view_Typer = & _gsl_matrix_float_const_view_Typer;
DaoType *dao_type__gsl_matrix_float_const_view = NULL;
static void dao__gsl_matrix_float_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_float_const_view *self = (_gsl_matrix_float_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_float_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_float );
}
static void dao__gsl_matrix_float_const_view__gsl_matrix_float_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_float_const_view *self = Dao__gsl_matrix_float_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_float_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_ulong.h */


static DaoNumItem dao_gsl_matrix_ulong_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_ulong_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ulong_gsl_matrix_ulong( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_ulong_Meths[] = 
{
  { dao_gsl_matrix_ulong_GETF_size1, ".size1( self :gsl_matrix_ulong )=>int" },
  { dao_gsl_matrix_ulong_SETF_size1, ".size1=( self :gsl_matrix_ulong, size1 :int )" },
  { dao_gsl_matrix_ulong_GETF_size2, ".size2( self :gsl_matrix_ulong )=>int" },
  { dao_gsl_matrix_ulong_SETF_size2, ".size2=( self :gsl_matrix_ulong, size2 :int )" },
  { dao_gsl_matrix_ulong_GETF_tda, ".tda( self :gsl_matrix_ulong )=>int" },
  { dao_gsl_matrix_ulong_SETF_tda, ".tda=( self :gsl_matrix_ulong, tda :int )" },
  { dao_gsl_matrix_ulong_GETF_data, ".data( self :gsl_matrix_ulong )=>int" },
  { dao_gsl_matrix_ulong_GETF_block, ".block( self :gsl_matrix_ulong )=>gsl_block_ulong_struct" },
  { dao_gsl_matrix_ulong_GETF_owner, ".owner( self :gsl_matrix_ulong )=>int" },
  { dao_gsl_matrix_ulong_SETF_owner, ".owner=( self :gsl_matrix_ulong, owner :int )" },
  { dao_gsl_matrix_ulong_gsl_matrix_ulong, "gsl_matrix_ulong(  )=>gsl_matrix_ulong" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_ulong_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_ulong_Typer = 
{ "gsl_matrix_ulong", NULL,
  dao_gsl_matrix_ulong_Nums,
  dao_gsl_matrix_ulong_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_ulong_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_ulong_Typer = & gsl_matrix_ulong_Typer;
DaoType *dao_type_gsl_matrix_ulong = NULL;
static void dao_gsl_matrix_ulong_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_ulong_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_ulong_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_ulong_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_ulong_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_ulong_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_ulong_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_matrix_ulong_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_ulong_struct );
}
static void dao_gsl_matrix_ulong_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_ulong_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ulong *self = (gsl_matrix_ulong*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ulong);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_ulong_gsl_matrix_ulong( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_ulong *self = Dao_gsl_matrix_ulong_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_ulong );
}
/* /usr/local/include/gsl/gsl_matrix_ulong.h */


static DaoNumItem dao__gsl_matrix_ulong_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_ulong_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_ulong_view__gsl_matrix_ulong_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_ulong_view_Meths[] = 
{
  { dao__gsl_matrix_ulong_view_GETF_matrix, ".matrix( self :_gsl_matrix_ulong_view )=>gsl_matrix_ulong" },
  { dao__gsl_matrix_ulong_view__gsl_matrix_ulong_view, "_gsl_matrix_ulong_view(  )=>_gsl_matrix_ulong_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_ulong_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_ulong_view_Typer = 
{ "_gsl_matrix_ulong_view", NULL,
  dao__gsl_matrix_ulong_view_Nums,
  dao__gsl_matrix_ulong_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_ulong_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_ulong_view_Typer = & _gsl_matrix_ulong_view_Typer;
DaoType *dao_type__gsl_matrix_ulong_view = NULL;
static void dao__gsl_matrix_ulong_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_ulong_view *self = (_gsl_matrix_ulong_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_ulong_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_ulong );
}
static void dao__gsl_matrix_ulong_view__gsl_matrix_ulong_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_ulong_view *self = Dao__gsl_matrix_ulong_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_ulong_view );
}
/* /usr/local/include/gsl/gsl_matrix_ulong.h */


static DaoNumItem dao__gsl_matrix_ulong_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_ulong_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_ulong_const_view__gsl_matrix_ulong_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_ulong_const_view_Meths[] = 
{
  { dao__gsl_matrix_ulong_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_ulong_const_view )=>gsl_matrix_ulong" },
  { dao__gsl_matrix_ulong_const_view__gsl_matrix_ulong_const_view, "_gsl_matrix_ulong_const_view(  )=>_gsl_matrix_ulong_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_ulong_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_ulong_const_view_Typer = 
{ "_gsl_matrix_ulong_const_view", NULL,
  dao__gsl_matrix_ulong_const_view_Nums,
  dao__gsl_matrix_ulong_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_ulong_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_ulong_const_view_Typer = & _gsl_matrix_ulong_const_view_Typer;
DaoType *dao_type__gsl_matrix_ulong_const_view = NULL;
static void dao__gsl_matrix_ulong_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_ulong_const_view *self = (_gsl_matrix_ulong_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_ulong_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_ulong );
}
static void dao__gsl_matrix_ulong_const_view__gsl_matrix_ulong_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_ulong_const_view *self = Dao__gsl_matrix_ulong_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_ulong_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_long.h */


static DaoNumItem dao_gsl_matrix_long_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_long_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_long_gsl_matrix_long( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_long_Meths[] = 
{
  { dao_gsl_matrix_long_GETF_size1, ".size1( self :gsl_matrix_long )=>int" },
  { dao_gsl_matrix_long_SETF_size1, ".size1=( self :gsl_matrix_long, size1 :int )" },
  { dao_gsl_matrix_long_GETF_size2, ".size2( self :gsl_matrix_long )=>int" },
  { dao_gsl_matrix_long_SETF_size2, ".size2=( self :gsl_matrix_long, size2 :int )" },
  { dao_gsl_matrix_long_GETF_tda, ".tda( self :gsl_matrix_long )=>int" },
  { dao_gsl_matrix_long_SETF_tda, ".tda=( self :gsl_matrix_long, tda :int )" },
  { dao_gsl_matrix_long_GETF_data, ".data( self :gsl_matrix_long )=>int" },
  { dao_gsl_matrix_long_GETF_block, ".block( self :gsl_matrix_long )=>gsl_block_long_struct" },
  { dao_gsl_matrix_long_GETF_owner, ".owner( self :gsl_matrix_long )=>int" },
  { dao_gsl_matrix_long_SETF_owner, ".owner=( self :gsl_matrix_long, owner :int )" },
  { dao_gsl_matrix_long_gsl_matrix_long, "gsl_matrix_long(  )=>gsl_matrix_long" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_long_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_long_Typer = 
{ "gsl_matrix_long", NULL,
  dao_gsl_matrix_long_Nums,
  dao_gsl_matrix_long_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_long_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_long_Typer = & gsl_matrix_long_Typer;
DaoType *dao_type_gsl_matrix_long = NULL;
static void dao_gsl_matrix_long_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_long_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_long_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_long_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_long_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_long_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_long_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_matrix_long_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_long_struct );
}
static void dao_gsl_matrix_long_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_long_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_long *self = (gsl_matrix_long*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_long);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_long_gsl_matrix_long( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_long *self = Dao_gsl_matrix_long_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_long );
}
/* /usr/local/include/gsl/gsl_matrix_long.h */


static DaoNumItem dao__gsl_matrix_long_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_long_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_long_view__gsl_matrix_long_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_long_view_Meths[] = 
{
  { dao__gsl_matrix_long_view_GETF_matrix, ".matrix( self :_gsl_matrix_long_view )=>gsl_matrix_long" },
  { dao__gsl_matrix_long_view__gsl_matrix_long_view, "_gsl_matrix_long_view(  )=>_gsl_matrix_long_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_long_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_long_view_Typer = 
{ "_gsl_matrix_long_view", NULL,
  dao__gsl_matrix_long_view_Nums,
  dao__gsl_matrix_long_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_long_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_long_view_Typer = & _gsl_matrix_long_view_Typer;
DaoType *dao_type__gsl_matrix_long_view = NULL;
static void dao__gsl_matrix_long_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_long_view *self = (_gsl_matrix_long_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_long_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_long );
}
static void dao__gsl_matrix_long_view__gsl_matrix_long_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_long_view *self = Dao__gsl_matrix_long_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_long_view );
}
/* /usr/local/include/gsl/gsl_matrix_long.h */


static DaoNumItem dao__gsl_matrix_long_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_long_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_long_const_view__gsl_matrix_long_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_long_const_view_Meths[] = 
{
  { dao__gsl_matrix_long_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_long_const_view )=>gsl_matrix_long" },
  { dao__gsl_matrix_long_const_view__gsl_matrix_long_const_view, "_gsl_matrix_long_const_view(  )=>_gsl_matrix_long_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_long_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_long_const_view_Typer = 
{ "_gsl_matrix_long_const_view", NULL,
  dao__gsl_matrix_long_const_view_Nums,
  dao__gsl_matrix_long_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_long_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_long_const_view_Typer = & _gsl_matrix_long_const_view_Typer;
DaoType *dao_type__gsl_matrix_long_const_view = NULL;
static void dao__gsl_matrix_long_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_long_const_view *self = (_gsl_matrix_long_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_long_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_long );
}
static void dao__gsl_matrix_long_const_view__gsl_matrix_long_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_long_const_view *self = Dao__gsl_matrix_long_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_long_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_uint.h */


static DaoNumItem dao_gsl_matrix_uint_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_uint_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uint_gsl_matrix_uint( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_uint_Meths[] = 
{
  { dao_gsl_matrix_uint_GETF_size1, ".size1( self :gsl_matrix_uint )=>int" },
  { dao_gsl_matrix_uint_SETF_size1, ".size1=( self :gsl_matrix_uint, size1 :int )" },
  { dao_gsl_matrix_uint_GETF_size2, ".size2( self :gsl_matrix_uint )=>int" },
  { dao_gsl_matrix_uint_SETF_size2, ".size2=( self :gsl_matrix_uint, size2 :int )" },
  { dao_gsl_matrix_uint_GETF_tda, ".tda( self :gsl_matrix_uint )=>int" },
  { dao_gsl_matrix_uint_SETF_tda, ".tda=( self :gsl_matrix_uint, tda :int )" },
  { dao_gsl_matrix_uint_GETF_data, ".data( self :gsl_matrix_uint )=>int" },
  { dao_gsl_matrix_uint_GETF_block, ".block( self :gsl_matrix_uint )=>gsl_block_uint_struct" },
  { dao_gsl_matrix_uint_GETF_owner, ".owner( self :gsl_matrix_uint )=>int" },
  { dao_gsl_matrix_uint_SETF_owner, ".owner=( self :gsl_matrix_uint, owner :int )" },
  { dao_gsl_matrix_uint_gsl_matrix_uint, "gsl_matrix_uint(  )=>gsl_matrix_uint" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_uint_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_uint_Typer = 
{ "gsl_matrix_uint", NULL,
  dao_gsl_matrix_uint_Nums,
  dao_gsl_matrix_uint_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_uint_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_uint_Typer = & gsl_matrix_uint_Typer;
DaoType *dao_type_gsl_matrix_uint = NULL;
static void dao_gsl_matrix_uint_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_uint_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_uint_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_uint_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_uint_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_uint_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_uint_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_matrix_uint_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_uint_struct );
}
static void dao_gsl_matrix_uint_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_uint_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uint *self = (gsl_matrix_uint*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uint);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_uint_gsl_matrix_uint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_uint *self = Dao_gsl_matrix_uint_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_uint );
}
/* /usr/local/include/gsl/gsl_matrix_uint.h */


static DaoNumItem dao__gsl_matrix_uint_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_uint_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_uint_view__gsl_matrix_uint_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_uint_view_Meths[] = 
{
  { dao__gsl_matrix_uint_view_GETF_matrix, ".matrix( self :_gsl_matrix_uint_view )=>gsl_matrix_uint" },
  { dao__gsl_matrix_uint_view__gsl_matrix_uint_view, "_gsl_matrix_uint_view(  )=>_gsl_matrix_uint_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_uint_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_uint_view_Typer = 
{ "_gsl_matrix_uint_view", NULL,
  dao__gsl_matrix_uint_view_Nums,
  dao__gsl_matrix_uint_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_uint_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_uint_view_Typer = & _gsl_matrix_uint_view_Typer;
DaoType *dao_type__gsl_matrix_uint_view = NULL;
static void dao__gsl_matrix_uint_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_uint_view *self = (_gsl_matrix_uint_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_uint_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_uint );
}
static void dao__gsl_matrix_uint_view__gsl_matrix_uint_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_uint_view *self = Dao__gsl_matrix_uint_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_uint_view );
}
/* /usr/local/include/gsl/gsl_matrix_uint.h */


static DaoNumItem dao__gsl_matrix_uint_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_uint_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_uint_const_view__gsl_matrix_uint_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_uint_const_view_Meths[] = 
{
  { dao__gsl_matrix_uint_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_uint_const_view )=>gsl_matrix_uint" },
  { dao__gsl_matrix_uint_const_view__gsl_matrix_uint_const_view, "_gsl_matrix_uint_const_view(  )=>_gsl_matrix_uint_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_uint_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_uint_const_view_Typer = 
{ "_gsl_matrix_uint_const_view", NULL,
  dao__gsl_matrix_uint_const_view_Nums,
  dao__gsl_matrix_uint_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_uint_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_uint_const_view_Typer = & _gsl_matrix_uint_const_view_Typer;
DaoType *dao_type__gsl_matrix_uint_const_view = NULL;
static void dao__gsl_matrix_uint_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_uint_const_view *self = (_gsl_matrix_uint_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_uint_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_uint );
}
static void dao__gsl_matrix_uint_const_view__gsl_matrix_uint_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_uint_const_view *self = Dao__gsl_matrix_uint_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_uint_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_int.h */


static DaoNumItem dao_gsl_matrix_int_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_int_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_int_gsl_matrix_int( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_int_Meths[] = 
{
  { dao_gsl_matrix_int_GETF_size1, ".size1( self :gsl_matrix_int )=>int" },
  { dao_gsl_matrix_int_SETF_size1, ".size1=( self :gsl_matrix_int, size1 :int )" },
  { dao_gsl_matrix_int_GETF_size2, ".size2( self :gsl_matrix_int )=>int" },
  { dao_gsl_matrix_int_SETF_size2, ".size2=( self :gsl_matrix_int, size2 :int )" },
  { dao_gsl_matrix_int_GETF_tda, ".tda( self :gsl_matrix_int )=>int" },
  { dao_gsl_matrix_int_SETF_tda, ".tda=( self :gsl_matrix_int, tda :int )" },
  { dao_gsl_matrix_int_GETF_data, ".data( self :gsl_matrix_int )=>int" },
  { dao_gsl_matrix_int_GETF_block, ".block( self :gsl_matrix_int )=>gsl_block_int_struct" },
  { dao_gsl_matrix_int_GETF_owner, ".owner( self :gsl_matrix_int )=>int" },
  { dao_gsl_matrix_int_SETF_owner, ".owner=( self :gsl_matrix_int, owner :int )" },
  { dao_gsl_matrix_int_gsl_matrix_int, "gsl_matrix_int(  )=>gsl_matrix_int" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_int_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_int_Typer = 
{ "gsl_matrix_int", NULL,
  dao_gsl_matrix_int_Nums,
  dao_gsl_matrix_int_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_int_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_int_Typer = & gsl_matrix_int_Typer;
DaoType *dao_type_gsl_matrix_int = NULL;
static void dao_gsl_matrix_int_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_int_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_int_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_int_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_int_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_int_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_int_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_matrix_int_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_int_struct );
}
static void dao_gsl_matrix_int_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_int_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_int *self = (gsl_matrix_int*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_int);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_int_gsl_matrix_int( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_int *self = Dao_gsl_matrix_int_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_int );
}
/* /usr/local/include/gsl/gsl_matrix_int.h */


static DaoNumItem dao__gsl_matrix_int_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_int_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_int_view__gsl_matrix_int_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_int_view_Meths[] = 
{
  { dao__gsl_matrix_int_view_GETF_matrix, ".matrix( self :_gsl_matrix_int_view )=>gsl_matrix_int" },
  { dao__gsl_matrix_int_view__gsl_matrix_int_view, "_gsl_matrix_int_view(  )=>_gsl_matrix_int_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_int_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_int_view_Typer = 
{ "_gsl_matrix_int_view", NULL,
  dao__gsl_matrix_int_view_Nums,
  dao__gsl_matrix_int_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_int_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_int_view_Typer = & _gsl_matrix_int_view_Typer;
DaoType *dao_type__gsl_matrix_int_view = NULL;
static void dao__gsl_matrix_int_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_int_view *self = (_gsl_matrix_int_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_int_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_int );
}
static void dao__gsl_matrix_int_view__gsl_matrix_int_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_int_view *self = Dao__gsl_matrix_int_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_int_view );
}
/* /usr/local/include/gsl/gsl_matrix_int.h */


static DaoNumItem dao__gsl_matrix_int_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_int_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_int_const_view__gsl_matrix_int_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_int_const_view_Meths[] = 
{
  { dao__gsl_matrix_int_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_int_const_view )=>gsl_matrix_int" },
  { dao__gsl_matrix_int_const_view__gsl_matrix_int_const_view, "_gsl_matrix_int_const_view(  )=>_gsl_matrix_int_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_int_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_int_const_view_Typer = 
{ "_gsl_matrix_int_const_view", NULL,
  dao__gsl_matrix_int_const_view_Nums,
  dao__gsl_matrix_int_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_int_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_int_const_view_Typer = & _gsl_matrix_int_const_view_Typer;
DaoType *dao_type__gsl_matrix_int_const_view = NULL;
static void dao__gsl_matrix_int_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_int_const_view *self = (_gsl_matrix_int_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_int_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_int );
}
static void dao__gsl_matrix_int_const_view__gsl_matrix_int_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_int_const_view *self = Dao__gsl_matrix_int_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_int_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_ushort.h */


static DaoNumItem dao_gsl_matrix_ushort_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_ushort_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_ushort_gsl_matrix_ushort( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_ushort_Meths[] = 
{
  { dao_gsl_matrix_ushort_GETF_size1, ".size1( self :gsl_matrix_ushort )=>int" },
  { dao_gsl_matrix_ushort_SETF_size1, ".size1=( self :gsl_matrix_ushort, size1 :int )" },
  { dao_gsl_matrix_ushort_GETF_size2, ".size2( self :gsl_matrix_ushort )=>int" },
  { dao_gsl_matrix_ushort_SETF_size2, ".size2=( self :gsl_matrix_ushort, size2 :int )" },
  { dao_gsl_matrix_ushort_GETF_tda, ".tda( self :gsl_matrix_ushort )=>int" },
  { dao_gsl_matrix_ushort_SETF_tda, ".tda=( self :gsl_matrix_ushort, tda :int )" },
  { dao_gsl_matrix_ushort_GETF_data, ".data( self :gsl_matrix_ushort )=>int" },
  { dao_gsl_matrix_ushort_GETF_block, ".block( self :gsl_matrix_ushort )=>gsl_block_ushort_struct" },
  { dao_gsl_matrix_ushort_GETF_owner, ".owner( self :gsl_matrix_ushort )=>int" },
  { dao_gsl_matrix_ushort_SETF_owner, ".owner=( self :gsl_matrix_ushort, owner :int )" },
  { dao_gsl_matrix_ushort_gsl_matrix_ushort, "gsl_matrix_ushort(  )=>gsl_matrix_ushort" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_ushort_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_ushort_Typer = 
{ "gsl_matrix_ushort", NULL,
  dao_gsl_matrix_ushort_Nums,
  dao_gsl_matrix_ushort_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_ushort_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_ushort_Typer = & gsl_matrix_ushort_Typer;
DaoType *dao_type_gsl_matrix_ushort = NULL;
static void dao_gsl_matrix_ushort_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_ushort_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_ushort_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_ushort_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_ushort_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_ushort_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_ushort_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_matrix_ushort_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_ushort_struct );
}
static void dao_gsl_matrix_ushort_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_ushort_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_ushort *self = (gsl_matrix_ushort*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_ushort);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_ushort_gsl_matrix_ushort( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_ushort *self = Dao_gsl_matrix_ushort_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_ushort );
}
/* /usr/local/include/gsl/gsl_matrix_ushort.h */


static DaoNumItem dao__gsl_matrix_ushort_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_ushort_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_ushort_view__gsl_matrix_ushort_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_ushort_view_Meths[] = 
{
  { dao__gsl_matrix_ushort_view_GETF_matrix, ".matrix( self :_gsl_matrix_ushort_view )=>gsl_matrix_ushort" },
  { dao__gsl_matrix_ushort_view__gsl_matrix_ushort_view, "_gsl_matrix_ushort_view(  )=>_gsl_matrix_ushort_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_ushort_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_ushort_view_Typer = 
{ "_gsl_matrix_ushort_view", NULL,
  dao__gsl_matrix_ushort_view_Nums,
  dao__gsl_matrix_ushort_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_ushort_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_ushort_view_Typer = & _gsl_matrix_ushort_view_Typer;
DaoType *dao_type__gsl_matrix_ushort_view = NULL;
static void dao__gsl_matrix_ushort_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_ushort_view *self = (_gsl_matrix_ushort_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_ushort_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_ushort );
}
static void dao__gsl_matrix_ushort_view__gsl_matrix_ushort_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_ushort_view *self = Dao__gsl_matrix_ushort_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_ushort_view );
}
/* /usr/local/include/gsl/gsl_matrix_ushort.h */


static DaoNumItem dao__gsl_matrix_ushort_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_ushort_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_ushort_const_view__gsl_matrix_ushort_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_ushort_const_view_Meths[] = 
{
  { dao__gsl_matrix_ushort_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_ushort_const_view )=>gsl_matrix_ushort" },
  { dao__gsl_matrix_ushort_const_view__gsl_matrix_ushort_const_view, "_gsl_matrix_ushort_const_view(  )=>_gsl_matrix_ushort_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_ushort_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_ushort_const_view_Typer = 
{ "_gsl_matrix_ushort_const_view", NULL,
  dao__gsl_matrix_ushort_const_view_Nums,
  dao__gsl_matrix_ushort_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_ushort_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_ushort_const_view_Typer = & _gsl_matrix_ushort_const_view_Typer;
DaoType *dao_type__gsl_matrix_ushort_const_view = NULL;
static void dao__gsl_matrix_ushort_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_ushort_const_view *self = (_gsl_matrix_ushort_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_ushort_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_ushort );
}
static void dao__gsl_matrix_ushort_const_view__gsl_matrix_ushort_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_ushort_const_view *self = Dao__gsl_matrix_ushort_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_ushort_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_short.h */


static DaoNumItem dao_gsl_matrix_short_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_short_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_short_gsl_matrix_short( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_short_Meths[] = 
{
  { dao_gsl_matrix_short_GETF_size1, ".size1( self :gsl_matrix_short )=>int" },
  { dao_gsl_matrix_short_SETF_size1, ".size1=( self :gsl_matrix_short, size1 :int )" },
  { dao_gsl_matrix_short_GETF_size2, ".size2( self :gsl_matrix_short )=>int" },
  { dao_gsl_matrix_short_SETF_size2, ".size2=( self :gsl_matrix_short, size2 :int )" },
  { dao_gsl_matrix_short_GETF_tda, ".tda( self :gsl_matrix_short )=>int" },
  { dao_gsl_matrix_short_SETF_tda, ".tda=( self :gsl_matrix_short, tda :int )" },
  { dao_gsl_matrix_short_GETF_data, ".data( self :gsl_matrix_short )=>int" },
  { dao_gsl_matrix_short_GETF_block, ".block( self :gsl_matrix_short )=>gsl_block_short_struct" },
  { dao_gsl_matrix_short_GETF_owner, ".owner( self :gsl_matrix_short )=>int" },
  { dao_gsl_matrix_short_SETF_owner, ".owner=( self :gsl_matrix_short, owner :int )" },
  { dao_gsl_matrix_short_gsl_matrix_short, "gsl_matrix_short(  )=>gsl_matrix_short" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_short_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_short_Typer = 
{ "gsl_matrix_short", NULL,
  dao_gsl_matrix_short_Nums,
  dao_gsl_matrix_short_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_short_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_short_Typer = & gsl_matrix_short_Typer;
DaoType *dao_type_gsl_matrix_short = NULL;
static void dao_gsl_matrix_short_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_short_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_short_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_short_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_short_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_short_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_short_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_matrix_short_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_short_struct );
}
static void dao_gsl_matrix_short_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_short_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_short *self = (gsl_matrix_short*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_short);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_short_gsl_matrix_short( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_short *self = Dao_gsl_matrix_short_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_short );
}
/* /usr/local/include/gsl/gsl_matrix_short.h */


static DaoNumItem dao__gsl_matrix_short_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_short_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_short_view__gsl_matrix_short_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_short_view_Meths[] = 
{
  { dao__gsl_matrix_short_view_GETF_matrix, ".matrix( self :_gsl_matrix_short_view )=>gsl_matrix_short" },
  { dao__gsl_matrix_short_view__gsl_matrix_short_view, "_gsl_matrix_short_view(  )=>_gsl_matrix_short_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_short_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_short_view_Typer = 
{ "_gsl_matrix_short_view", NULL,
  dao__gsl_matrix_short_view_Nums,
  dao__gsl_matrix_short_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_short_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_short_view_Typer = & _gsl_matrix_short_view_Typer;
DaoType *dao_type__gsl_matrix_short_view = NULL;
static void dao__gsl_matrix_short_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_short_view *self = (_gsl_matrix_short_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_short_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_short );
}
static void dao__gsl_matrix_short_view__gsl_matrix_short_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_short_view *self = Dao__gsl_matrix_short_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_short_view );
}
/* /usr/local/include/gsl/gsl_matrix_short.h */


static DaoNumItem dao__gsl_matrix_short_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_short_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_short_const_view__gsl_matrix_short_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_short_const_view_Meths[] = 
{
  { dao__gsl_matrix_short_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_short_const_view )=>gsl_matrix_short" },
  { dao__gsl_matrix_short_const_view__gsl_matrix_short_const_view, "_gsl_matrix_short_const_view(  )=>_gsl_matrix_short_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_short_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_short_const_view_Typer = 
{ "_gsl_matrix_short_const_view", NULL,
  dao__gsl_matrix_short_const_view_Nums,
  dao__gsl_matrix_short_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_short_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_short_const_view_Typer = & _gsl_matrix_short_const_view_Typer;
DaoType *dao_type__gsl_matrix_short_const_view = NULL;
static void dao__gsl_matrix_short_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_short_const_view *self = (_gsl_matrix_short_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_short_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_short );
}
static void dao__gsl_matrix_short_const_view__gsl_matrix_short_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_short_const_view *self = Dao__gsl_matrix_short_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_short_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_uchar.h */


static DaoNumItem dao_gsl_matrix_uchar_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_uchar_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_uchar_gsl_matrix_uchar( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_uchar_Meths[] = 
{
  { dao_gsl_matrix_uchar_GETF_size1, ".size1( self :gsl_matrix_uchar )=>int" },
  { dao_gsl_matrix_uchar_SETF_size1, ".size1=( self :gsl_matrix_uchar, size1 :int )" },
  { dao_gsl_matrix_uchar_GETF_size2, ".size2( self :gsl_matrix_uchar )=>int" },
  { dao_gsl_matrix_uchar_SETF_size2, ".size2=( self :gsl_matrix_uchar, size2 :int )" },
  { dao_gsl_matrix_uchar_GETF_tda, ".tda( self :gsl_matrix_uchar )=>int" },
  { dao_gsl_matrix_uchar_SETF_tda, ".tda=( self :gsl_matrix_uchar, tda :int )" },
  { dao_gsl_matrix_uchar_GETF_data, ".data( self :gsl_matrix_uchar )=>string" },
  { dao_gsl_matrix_uchar_GETF_block, ".block( self :gsl_matrix_uchar )=>gsl_block_uchar_struct" },
  { dao_gsl_matrix_uchar_GETF_owner, ".owner( self :gsl_matrix_uchar )=>int" },
  { dao_gsl_matrix_uchar_SETF_owner, ".owner=( self :gsl_matrix_uchar, owner :int )" },
  { dao_gsl_matrix_uchar_gsl_matrix_uchar, "gsl_matrix_uchar(  )=>gsl_matrix_uchar" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_uchar_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_uchar_Typer = 
{ "gsl_matrix_uchar", NULL,
  dao_gsl_matrix_uchar_Nums,
  dao_gsl_matrix_uchar_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_uchar_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_uchar_Typer = & gsl_matrix_uchar_Typer;
DaoType *dao_type_gsl_matrix_uchar = NULL;
static void dao_gsl_matrix_uchar_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_uchar_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_uchar_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_uchar_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_uchar_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_uchar_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_uchar_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  DaoProcess_PutMBString( _proc, (char*) self->data );
}
static void dao_gsl_matrix_uchar_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_uchar_struct );
}
static void dao_gsl_matrix_uchar_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_uchar_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_uchar *self = (gsl_matrix_uchar*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_uchar);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_uchar_gsl_matrix_uchar( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_uchar *self = Dao_gsl_matrix_uchar_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_uchar );
}
/* /usr/local/include/gsl/gsl_matrix_uchar.h */


static DaoNumItem dao__gsl_matrix_uchar_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_uchar_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_uchar_view__gsl_matrix_uchar_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_uchar_view_Meths[] = 
{
  { dao__gsl_matrix_uchar_view_GETF_matrix, ".matrix( self :_gsl_matrix_uchar_view )=>gsl_matrix_uchar" },
  { dao__gsl_matrix_uchar_view__gsl_matrix_uchar_view, "_gsl_matrix_uchar_view(  )=>_gsl_matrix_uchar_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_uchar_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_uchar_view_Typer = 
{ "_gsl_matrix_uchar_view", NULL,
  dao__gsl_matrix_uchar_view_Nums,
  dao__gsl_matrix_uchar_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_uchar_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_uchar_view_Typer = & _gsl_matrix_uchar_view_Typer;
DaoType *dao_type__gsl_matrix_uchar_view = NULL;
static void dao__gsl_matrix_uchar_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_uchar_view *self = (_gsl_matrix_uchar_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_uchar_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_uchar );
}
static void dao__gsl_matrix_uchar_view__gsl_matrix_uchar_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_uchar_view *self = Dao__gsl_matrix_uchar_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_uchar_view );
}
/* /usr/local/include/gsl/gsl_matrix_uchar.h */


static DaoNumItem dao__gsl_matrix_uchar_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_uchar_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_uchar_const_view__gsl_matrix_uchar_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_uchar_const_view_Meths[] = 
{
  { dao__gsl_matrix_uchar_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_uchar_const_view )=>gsl_matrix_uchar" },
  { dao__gsl_matrix_uchar_const_view__gsl_matrix_uchar_const_view, "_gsl_matrix_uchar_const_view(  )=>_gsl_matrix_uchar_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_uchar_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_uchar_const_view_Typer = 
{ "_gsl_matrix_uchar_const_view", NULL,
  dao__gsl_matrix_uchar_const_view_Nums,
  dao__gsl_matrix_uchar_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_uchar_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_uchar_const_view_Typer = & _gsl_matrix_uchar_const_view_Typer;
DaoType *dao_type__gsl_matrix_uchar_const_view = NULL;
static void dao__gsl_matrix_uchar_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_uchar_const_view *self = (_gsl_matrix_uchar_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_uchar_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_uchar );
}
static void dao__gsl_matrix_uchar_const_view__gsl_matrix_uchar_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_uchar_const_view *self = Dao__gsl_matrix_uchar_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_uchar_const_view );
}
/* /usr/local/include/gsl/gsl_matrix_char.h */


static DaoNumItem dao_gsl_matrix_char_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_matrix_char_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_matrix_char_gsl_matrix_char( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_matrix_char_Meths[] = 
{
  { dao_gsl_matrix_char_GETF_size1, ".size1( self :gsl_matrix_char )=>int" },
  { dao_gsl_matrix_char_SETF_size1, ".size1=( self :gsl_matrix_char, size1 :int )" },
  { dao_gsl_matrix_char_GETF_size2, ".size2( self :gsl_matrix_char )=>int" },
  { dao_gsl_matrix_char_SETF_size2, ".size2=( self :gsl_matrix_char, size2 :int )" },
  { dao_gsl_matrix_char_GETF_tda, ".tda( self :gsl_matrix_char )=>int" },
  { dao_gsl_matrix_char_SETF_tda, ".tda=( self :gsl_matrix_char, tda :int )" },
  { dao_gsl_matrix_char_GETF_data, ".data( self :gsl_matrix_char )=>string" },
  { dao_gsl_matrix_char_GETF_block, ".block( self :gsl_matrix_char )=>gsl_block_char_struct" },
  { dao_gsl_matrix_char_GETF_owner, ".owner( self :gsl_matrix_char )=>int" },
  { dao_gsl_matrix_char_SETF_owner, ".owner=( self :gsl_matrix_char, owner :int )" },
  { dao_gsl_matrix_char_gsl_matrix_char, "gsl_matrix_char(  )=>gsl_matrix_char" },
  { NULL, NULL }
};
static void Dao_gsl_matrix_char_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_matrix_char_Typer = 
{ "gsl_matrix_char", NULL,
  dao_gsl_matrix_char_Nums,
  dao_gsl_matrix_char_Meths,
  { NULL },
  { NULL },
  Dao_gsl_matrix_char_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_matrix_char_Typer = & gsl_matrix_char_Typer;
DaoType *dao_type_gsl_matrix_char = NULL;
static void dao_gsl_matrix_char_GETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  DaoProcess_PutInteger( _proc, (daoint) self->size1 );
}
static void dao_gsl_matrix_char_SETF_size1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  self->size1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_char_GETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  DaoProcess_PutInteger( _proc, (daoint) self->size2 );
}
static void dao_gsl_matrix_char_SETF_size2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  self->size2 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_char_GETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  DaoProcess_PutInteger( _proc, (daoint) self->tda );
}
static void dao_gsl_matrix_char_SETF_tda( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  self->tda = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_char_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  DaoProcess_PutMBString( _proc, (char*) self->data );
}
static void dao_gsl_matrix_char_GETF_block( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  DaoProcess_WrapCdata( _proc, (void*) self->block, dao_type_gsl_block_char_struct );
}
static void dao_gsl_matrix_char_GETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  DaoProcess_PutInteger( _proc, (daoint) self->owner );
}
static void dao_gsl_matrix_char_SETF_owner( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_matrix_char *self = (gsl_matrix_char*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_matrix_char);
  self->owner = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_matrix_char_gsl_matrix_char( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_matrix_char *self = Dao_gsl_matrix_char_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_matrix_char );
}
/* /usr/local/include/gsl/gsl_matrix_char.h */


static DaoNumItem dao__gsl_matrix_char_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_char_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_char_view__gsl_matrix_char_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_char_view_Meths[] = 
{
  { dao__gsl_matrix_char_view_GETF_matrix, ".matrix( self :_gsl_matrix_char_view )=>gsl_matrix_char" },
  { dao__gsl_matrix_char_view__gsl_matrix_char_view, "_gsl_matrix_char_view(  )=>_gsl_matrix_char_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_char_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_char_view_Typer = 
{ "_gsl_matrix_char_view", NULL,
  dao__gsl_matrix_char_view_Nums,
  dao__gsl_matrix_char_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_char_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_char_view_Typer = & _gsl_matrix_char_view_Typer;
DaoType *dao_type__gsl_matrix_char_view = NULL;
static void dao__gsl_matrix_char_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_char_view *self = (_gsl_matrix_char_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_char_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_char );
}
static void dao__gsl_matrix_char_view__gsl_matrix_char_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_char_view *self = Dao__gsl_matrix_char_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_char_view );
}
/* /usr/local/include/gsl/gsl_matrix_char.h */


static DaoNumItem dao__gsl_matrix_char_const_view_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao__gsl_matrix_char_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gsl_matrix_char_const_view__gsl_matrix_char_const_view( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao__gsl_matrix_char_const_view_Meths[] = 
{
  { dao__gsl_matrix_char_const_view_GETF_matrix, ".matrix( self :_gsl_matrix_char_const_view )=>gsl_matrix_char" },
  { dao__gsl_matrix_char_const_view__gsl_matrix_char_const_view, "_gsl_matrix_char_const_view(  )=>_gsl_matrix_char_const_view" },
  { NULL, NULL }
};
static void Dao__gsl_matrix_char_const_view_Delete( void *self )
{
	free( self );
}

static DaoTypeBase _gsl_matrix_char_const_view_Typer = 
{ "_gsl_matrix_char_const_view", NULL,
  dao__gsl_matrix_char_const_view_Nums,
  dao__gsl_matrix_char_const_view_Meths,
  { NULL },
  { NULL },
  Dao__gsl_matrix_char_const_view_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao__gsl_matrix_char_const_view_Typer = & _gsl_matrix_char_const_view_Typer;
DaoType *dao_type__gsl_matrix_char_const_view = NULL;
static void dao__gsl_matrix_char_const_view_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  _gsl_matrix_char_const_view *self = (_gsl_matrix_char_const_view*)DaoValue_TryCastCdata(_p[0],dao_type__gsl_matrix_char_const_view);
  DaoProcess_WrapCdata( _proc, (void*)&self->matrix, dao_type_gsl_matrix_char );
}
static void dao__gsl_matrix_char_const_view__gsl_matrix_char_const_view( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	_gsl_matrix_char_const_view *self = Dao__gsl_matrix_char_const_view_New();
	DaoProcess_WrapCdata( _proc, self, dao_type__gsl_matrix_char_const_view );
}
/* /usr/include/architecture/i386/math.h */
static DaoTypeBase exception_Typer = 
{ "exception", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GSL *dao_exception_Typer = & exception_Typer;
DaoType *dao_type_exception = NULL;
/* /usr/local/include/gsl/gsl_math.h */


static DaoNumItem dao_gsl_function_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_function_struct_gsl_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_function_struct_Meths[] = 
{
  { dao_gsl_function_struct_GETF_params, ".params( self :gsl_function_struct )=>cdata" },
  { dao_gsl_function_struct_gsl_function_struct, "gsl_function_struct(  )=>gsl_function_struct" },
  { NULL, NULL }
};
static void Dao_gsl_function_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_function_struct_Typer = 
{ "gsl_function_struct", NULL,
  dao_gsl_function_struct_Nums,
  dao_gsl_function_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_function_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_function_struct_Typer = & gsl_function_struct_Typer;
DaoType *dao_type_gsl_function_struct = NULL;
static void dao_gsl_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_function_struct *self = (struct gsl_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_function_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_function_struct_gsl_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_function_struct *self = Dao_gsl_function_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_math.h */


static DaoNumItem dao_gsl_function_fdf_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_function_fdf_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_function_fdf_struct_gsl_function_fdf_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_function_fdf_struct_Meths[] = 
{
  { dao_gsl_function_fdf_struct_GETF_params, ".params( self :gsl_function_fdf_struct )=>cdata" },
  { dao_gsl_function_fdf_struct_gsl_function_fdf_struct, "gsl_function_fdf_struct(  )=>gsl_function_fdf_struct" },
  { NULL, NULL }
};
static void Dao_gsl_function_fdf_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_function_fdf_struct_Typer = 
{ "gsl_function_fdf_struct", NULL,
  dao_gsl_function_fdf_struct_Nums,
  dao_gsl_function_fdf_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_function_fdf_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_function_fdf_struct_Typer = & gsl_function_fdf_struct_Typer;
DaoType *dao_type_gsl_function_fdf_struct = NULL;
static void dao_gsl_function_fdf_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_function_fdf_struct *self = (struct gsl_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_function_fdf_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_function_fdf_struct_gsl_function_fdf_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_function_fdf_struct *self = Dao_gsl_function_fdf_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_math.h */


static DaoNumItem dao_gsl_function_vec_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_function_vec_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_function_vec_struct_gsl_function_vec_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_function_vec_struct_Meths[] = 
{
  { dao_gsl_function_vec_struct_GETF_params, ".params( self :gsl_function_vec_struct )=>cdata" },
  { dao_gsl_function_vec_struct_gsl_function_vec_struct, "gsl_function_vec_struct(  )=>gsl_function_vec_struct" },
  { NULL, NULL }
};
static void Dao_gsl_function_vec_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_function_vec_struct_Typer = 
{ "gsl_function_vec_struct", NULL,
  dao_gsl_function_vec_struct_Nums,
  dao_gsl_function_vec_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_function_vec_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_function_vec_struct_Typer = & gsl_function_vec_struct_Typer;
DaoType *dao_type_gsl_function_vec_struct = NULL;
static void dao_gsl_function_vec_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_function_vec_struct *self = (struct gsl_function_vec_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_function_vec_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_function_vec_struct_gsl_function_vec_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_function_vec_struct *self = Dao_gsl_function_vec_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_bspline.h */


static DaoNumItem dao_gsl_bspline_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_bspline_workspace_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_GETF_km1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_SETF_km1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_GETF_l( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_SETF_l( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_GETF_nbreak( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_SETF_nbreak( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_GETF_knots( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_GETF_deltal( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_GETF_deltar( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_GETF_B( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_workspace_gsl_bspline_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_bspline_workspace_Meths[] = 
{
  { dao_gsl_bspline_workspace_GETF_k, ".k( self :gsl_bspline_workspace )=>int" },
  { dao_gsl_bspline_workspace_SETF_k, ".k=( self :gsl_bspline_workspace, k :int )" },
  { dao_gsl_bspline_workspace_GETF_km1, ".km1( self :gsl_bspline_workspace )=>int" },
  { dao_gsl_bspline_workspace_SETF_km1, ".km1=( self :gsl_bspline_workspace, km1 :int )" },
  { dao_gsl_bspline_workspace_GETF_l, ".l( self :gsl_bspline_workspace )=>int" },
  { dao_gsl_bspline_workspace_SETF_l, ".l=( self :gsl_bspline_workspace, l :int )" },
  { dao_gsl_bspline_workspace_GETF_nbreak, ".nbreak( self :gsl_bspline_workspace )=>int" },
  { dao_gsl_bspline_workspace_SETF_nbreak, ".nbreak=( self :gsl_bspline_workspace, nbreak :int )" },
  { dao_gsl_bspline_workspace_GETF_n, ".n( self :gsl_bspline_workspace )=>int" },
  { dao_gsl_bspline_workspace_SETF_n, ".n=( self :gsl_bspline_workspace, n :int )" },
  { dao_gsl_bspline_workspace_GETF_knots, ".knots( self :gsl_bspline_workspace )=>gsl_vector" },
  { dao_gsl_bspline_workspace_GETF_deltal, ".deltal( self :gsl_bspline_workspace )=>gsl_vector" },
  { dao_gsl_bspline_workspace_GETF_deltar, ".deltar( self :gsl_bspline_workspace )=>gsl_vector" },
  { dao_gsl_bspline_workspace_GETF_B, ".B( self :gsl_bspline_workspace )=>gsl_vector" },
  { dao_gsl_bspline_workspace_gsl_bspline_workspace, "gsl_bspline_workspace(  )=>gsl_bspline_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_bspline_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_bspline_workspace_Typer = 
{ "gsl_bspline_workspace", NULL,
  dao_gsl_bspline_workspace_Nums,
  dao_gsl_bspline_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_bspline_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_bspline_workspace_Typer = & gsl_bspline_workspace_Typer;
DaoType *dao_type_gsl_bspline_workspace = NULL;
static void dao_gsl_bspline_workspace_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->k );
}
static void dao_gsl_bspline_workspace_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  self->k = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_bspline_workspace_GETF_km1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->km1 );
}
static void dao_gsl_bspline_workspace_SETF_km1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  self->km1 = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_bspline_workspace_GETF_l( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->l );
}
static void dao_gsl_bspline_workspace_SETF_l( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  self->l = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_bspline_workspace_GETF_nbreak( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->nbreak );
}
static void dao_gsl_bspline_workspace_SETF_nbreak( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  self->nbreak = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_bspline_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_bspline_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_bspline_workspace_GETF_knots( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->knots, dao_type_gsl_vector );
}
static void dao_gsl_bspline_workspace_GETF_deltal( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->deltal, dao_type_gsl_vector );
}
static void dao_gsl_bspline_workspace_GETF_deltar( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->deltar, dao_type_gsl_vector );
}
static void dao_gsl_bspline_workspace_GETF_B( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_workspace *self = (gsl_bspline_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->B, dao_type_gsl_vector );
}
static void dao_gsl_bspline_workspace_gsl_bspline_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_bspline_workspace *self = Dao_gsl_bspline_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_bspline_workspace );
}
/* /usr/local/include/gsl/gsl_bspline.h */


static DaoNumItem dao_gsl_bspline_deriv_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_bspline_deriv_workspace_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_deriv_workspace_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_deriv_workspace_GETF_A( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_deriv_workspace_GETF_dB( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_bspline_deriv_workspace_gsl_bspline_deriv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_bspline_deriv_workspace_Meths[] = 
{
  { dao_gsl_bspline_deriv_workspace_GETF_k, ".k( self :gsl_bspline_deriv_workspace )=>int" },
  { dao_gsl_bspline_deriv_workspace_SETF_k, ".k=( self :gsl_bspline_deriv_workspace, k :int )" },
  { dao_gsl_bspline_deriv_workspace_GETF_A, ".A( self :gsl_bspline_deriv_workspace )=>gsl_matrix" },
  { dao_gsl_bspline_deriv_workspace_GETF_dB, ".dB( self :gsl_bspline_deriv_workspace )=>gsl_matrix" },
  { dao_gsl_bspline_deriv_workspace_gsl_bspline_deriv_workspace, "gsl_bspline_deriv_workspace(  )=>gsl_bspline_deriv_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_bspline_deriv_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_bspline_deriv_workspace_Typer = 
{ "gsl_bspline_deriv_workspace", NULL,
  dao_gsl_bspline_deriv_workspace_Nums,
  dao_gsl_bspline_deriv_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_bspline_deriv_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_bspline_deriv_workspace_Typer = & gsl_bspline_deriv_workspace_Typer;
DaoType *dao_type_gsl_bspline_deriv_workspace = NULL;
static void dao_gsl_bspline_deriv_workspace_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_deriv_workspace *self = (gsl_bspline_deriv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_deriv_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->k );
}
static void dao_gsl_bspline_deriv_workspace_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_deriv_workspace *self = (gsl_bspline_deriv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_deriv_workspace);
  self->k = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_bspline_deriv_workspace_GETF_A( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_deriv_workspace *self = (gsl_bspline_deriv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_deriv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->A, dao_type_gsl_matrix );
}
static void dao_gsl_bspline_deriv_workspace_GETF_dB( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_bspline_deriv_workspace *self = (gsl_bspline_deriv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_bspline_deriv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->dB, dao_type_gsl_matrix );
}
static void dao_gsl_bspline_deriv_workspace_gsl_bspline_deriv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_bspline_deriv_workspace *self = Dao_gsl_bspline_deriv_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_bspline_deriv_workspace );
}
/* /usr/local/include/gsl/gsl_chebyshev.h */


static DaoNumItem dao_gsl_cheb_series_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_cheb_series_struct_GETF_c( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_GETF_order( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_SETF_order( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_GETF_a( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_SETF_a( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_GETF_order_sp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_SETF_order_sp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_cheb_series_struct_gsl_cheb_series_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_cheb_series_struct_Meths[] = 
{
  { dao_gsl_cheb_series_struct_GETF_c, ".c( self :gsl_cheb_series_struct )=>double" },
  { dao_gsl_cheb_series_struct_GETF_order, ".order( self :gsl_cheb_series_struct )=>int" },
  { dao_gsl_cheb_series_struct_SETF_order, ".order=( self :gsl_cheb_series_struct, order :int )" },
  { dao_gsl_cheb_series_struct_GETF_a, ".a( self :gsl_cheb_series_struct )=>double" },
  { dao_gsl_cheb_series_struct_SETF_a, ".a=( self :gsl_cheb_series_struct, a :double )" },
  { dao_gsl_cheb_series_struct_GETF_b, ".b( self :gsl_cheb_series_struct )=>double" },
  { dao_gsl_cheb_series_struct_SETF_b, ".b=( self :gsl_cheb_series_struct, b :double )" },
  { dao_gsl_cheb_series_struct_GETF_order_sp, ".order_sp( self :gsl_cheb_series_struct )=>int" },
  { dao_gsl_cheb_series_struct_SETF_order_sp, ".order_sp=( self :gsl_cheb_series_struct, order_sp :int )" },
  { dao_gsl_cheb_series_struct_GETF_f, ".f( self :gsl_cheb_series_struct )=>double" },
  { dao_gsl_cheb_series_struct_gsl_cheb_series_struct, "gsl_cheb_series_struct(  )=>gsl_cheb_series_struct" },
  { NULL, NULL }
};
static void Dao_gsl_cheb_series_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_cheb_series_struct_Typer = 
{ "gsl_cheb_series_struct", NULL,
  dao_gsl_cheb_series_struct_Nums,
  dao_gsl_cheb_series_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_cheb_series_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_cheb_series_struct_Typer = & gsl_cheb_series_struct_Typer;
DaoType *dao_type_gsl_cheb_series_struct = NULL;
static void dao_gsl_cheb_series_struct_GETF_c( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->c, 0 );
}
static void dao_gsl_cheb_series_struct_GETF_order( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->order );
}
static void dao_gsl_cheb_series_struct_SETF_order( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  self->order = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_cheb_series_struct_GETF_a( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  DaoProcess_PutDouble( _proc, (double) self->a );
}
static void dao_gsl_cheb_series_struct_SETF_a( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  self->a = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_cheb_series_struct_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  DaoProcess_PutDouble( _proc, (double) self->b );
}
static void dao_gsl_cheb_series_struct_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  self->b = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_cheb_series_struct_GETF_order_sp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->order_sp );
}
static void dao_gsl_cheb_series_struct_SETF_order_sp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  self->order_sp = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_cheb_series_struct_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_cheb_series_struct *self = (struct gsl_cheb_series_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_cheb_series_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->f, 0 );
}
static void dao_gsl_cheb_series_struct_gsl_cheb_series_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_cheb_series_struct *self = Dao_gsl_cheb_series_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_cheb_series_struct );
}
/* /usr/local/include/gsl/gsl_combination.h */


static DaoNumItem dao_gsl_combination_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_combination_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_combination_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_combination_struct_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_combination_struct_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_combination_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_combination_struct_gsl_combination_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_combination_struct_Meths[] = 
{
  { dao_gsl_combination_struct_GETF_n, ".n( self :gsl_combination_struct )=>int" },
  { dao_gsl_combination_struct_SETF_n, ".n=( self :gsl_combination_struct, n :int )" },
  { dao_gsl_combination_struct_GETF_k, ".k( self :gsl_combination_struct )=>int" },
  { dao_gsl_combination_struct_SETF_k, ".k=( self :gsl_combination_struct, k :int )" },
  { dao_gsl_combination_struct_GETF_data, ".data( self :gsl_combination_struct )=>int" },
  { dao_gsl_combination_struct_gsl_combination_struct, "gsl_combination_struct(  )=>gsl_combination_struct" },
  { NULL, NULL }
};
static void Dao_gsl_combination_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_combination_struct_Typer = 
{ "gsl_combination_struct", NULL,
  dao_gsl_combination_struct_Nums,
  dao_gsl_combination_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_combination_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_combination_struct_Typer = & gsl_combination_struct_Typer;
DaoType *dao_type_gsl_combination_struct = NULL;
static void dao_gsl_combination_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_combination_struct *self = (struct gsl_combination_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_combination_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_combination_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_combination_struct *self = (struct gsl_combination_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_combination_struct);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_combination_struct_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_combination_struct *self = (struct gsl_combination_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_combination_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->k );
}
static void dao_gsl_combination_struct_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_combination_struct *self = (struct gsl_combination_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_combination_struct);
  self->k = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_combination_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_combination_struct *self = (struct gsl_combination_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_combination_struct);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_combination_struct_gsl_combination_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_combination_struct *self = Dao_gsl_combination_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_combination_struct );
}
/* /usr/local/include/gsl/gsl_dht.h */


static DaoNumItem dao_gsl_dht_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_dht_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_GETF_nu( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_SETF_nu( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_GETF_xmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_SETF_xmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_GETF_kmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_SETF_kmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_GETF_j( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_GETF_Jjj( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_GETF_J2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_dht_struct_gsl_dht_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_dht_struct_Meths[] = 
{
  { dao_gsl_dht_struct_GETF_size, ".size( self :gsl_dht_struct )=>int" },
  { dao_gsl_dht_struct_SETF_size, ".size=( self :gsl_dht_struct, size :int )" },
  { dao_gsl_dht_struct_GETF_nu, ".nu( self :gsl_dht_struct )=>double" },
  { dao_gsl_dht_struct_SETF_nu, ".nu=( self :gsl_dht_struct, nu :double )" },
  { dao_gsl_dht_struct_GETF_xmax, ".xmax( self :gsl_dht_struct )=>double" },
  { dao_gsl_dht_struct_SETF_xmax, ".xmax=( self :gsl_dht_struct, xmax :double )" },
  { dao_gsl_dht_struct_GETF_kmax, ".kmax( self :gsl_dht_struct )=>double" },
  { dao_gsl_dht_struct_SETF_kmax, ".kmax=( self :gsl_dht_struct, kmax :double )" },
  { dao_gsl_dht_struct_GETF_j, ".j( self :gsl_dht_struct )=>double" },
  { dao_gsl_dht_struct_GETF_Jjj, ".Jjj( self :gsl_dht_struct )=>double" },
  { dao_gsl_dht_struct_GETF_J2, ".J2( self :gsl_dht_struct )=>double" },
  { dao_gsl_dht_struct_gsl_dht_struct, "gsl_dht_struct(  )=>gsl_dht_struct" },
  { NULL, NULL }
};
static void Dao_gsl_dht_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_dht_struct_Typer = 
{ "gsl_dht_struct", NULL,
  dao_gsl_dht_struct_Nums,
  dao_gsl_dht_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_dht_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_dht_struct_Typer = & gsl_dht_struct_Typer;
DaoType *dao_type_gsl_dht_struct = NULL;
static void dao_gsl_dht_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_dht_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_dht_struct_GETF_nu( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  DaoProcess_PutDouble( _proc, (double) self->nu );
}
static void dao_gsl_dht_struct_SETF_nu( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  self->nu = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_dht_struct_GETF_xmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  DaoProcess_PutDouble( _proc, (double) self->xmax );
}
static void dao_gsl_dht_struct_SETF_xmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  self->xmax = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_dht_struct_GETF_kmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  DaoProcess_PutDouble( _proc, (double) self->kmax );
}
static void dao_gsl_dht_struct_SETF_kmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  self->kmax = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_dht_struct_GETF_j( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->j, 0 );
}
static void dao_gsl_dht_struct_GETF_Jjj( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->Jjj, 0 );
}
static void dao_gsl_dht_struct_GETF_J2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_dht_struct *self = (struct gsl_dht_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_dht_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->J2, 0 );
}
static void dao_gsl_dht_struct_gsl_dht_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_dht_struct *self = Dao_gsl_dht_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_dht_struct );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_symm_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_symm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symm_workspace_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symm_workspace_GETF_sd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symm_workspace_gsl_eigen_symm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_symm_workspace_Meths[] = 
{
  { dao_gsl_eigen_symm_workspace_GETF_size, ".size( self :gsl_eigen_symm_workspace )=>int" },
  { dao_gsl_eigen_symm_workspace_SETF_size, ".size=( self :gsl_eigen_symm_workspace, size :int )" },
  { dao_gsl_eigen_symm_workspace_GETF_d, ".d( self :gsl_eigen_symm_workspace )=>double" },
  { dao_gsl_eigen_symm_workspace_GETF_sd, ".sd( self :gsl_eigen_symm_workspace )=>double" },
  { dao_gsl_eigen_symm_workspace_gsl_eigen_symm_workspace, "gsl_eigen_symm_workspace(  )=>gsl_eigen_symm_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_symm_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_symm_workspace_Typer = 
{ "gsl_eigen_symm_workspace", NULL,
  dao_gsl_eigen_symm_workspace_Nums,
  dao_gsl_eigen_symm_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_symm_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_symm_workspace_Typer = & gsl_eigen_symm_workspace_Typer;
DaoType *dao_type_gsl_eigen_symm_workspace = NULL;
static void dao_gsl_eigen_symm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symm_workspace *self = (gsl_eigen_symm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symm_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_symm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symm_workspace *self = (gsl_eigen_symm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symm_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_symm_workspace_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symm_workspace *self = (gsl_eigen_symm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symm_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->d, 0 );
}
static void dao_gsl_eigen_symm_workspace_GETF_sd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symm_workspace *self = (gsl_eigen_symm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symm_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->sd, 0 );
}
static void dao_gsl_eigen_symm_workspace_gsl_eigen_symm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_symm_workspace *self = Dao_gsl_eigen_symm_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_symm_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_symmv_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_symmv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symmv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symmv_workspace_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symmv_workspace_GETF_sd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symmv_workspace_GETF_gc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symmv_workspace_GETF_gs( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_symmv_workspace_gsl_eigen_symmv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_symmv_workspace_Meths[] = 
{
  { dao_gsl_eigen_symmv_workspace_GETF_size, ".size( self :gsl_eigen_symmv_workspace )=>int" },
  { dao_gsl_eigen_symmv_workspace_SETF_size, ".size=( self :gsl_eigen_symmv_workspace, size :int )" },
  { dao_gsl_eigen_symmv_workspace_GETF_d, ".d( self :gsl_eigen_symmv_workspace )=>double" },
  { dao_gsl_eigen_symmv_workspace_GETF_sd, ".sd( self :gsl_eigen_symmv_workspace )=>double" },
  { dao_gsl_eigen_symmv_workspace_GETF_gc, ".gc( self :gsl_eigen_symmv_workspace )=>double" },
  { dao_gsl_eigen_symmv_workspace_GETF_gs, ".gs( self :gsl_eigen_symmv_workspace )=>double" },
  { dao_gsl_eigen_symmv_workspace_gsl_eigen_symmv_workspace, "gsl_eigen_symmv_workspace(  )=>gsl_eigen_symmv_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_symmv_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_symmv_workspace_Typer = 
{ "gsl_eigen_symmv_workspace", NULL,
  dao_gsl_eigen_symmv_workspace_Nums,
  dao_gsl_eigen_symmv_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_symmv_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_symmv_workspace_Typer = & gsl_eigen_symmv_workspace_Typer;
DaoType *dao_type_gsl_eigen_symmv_workspace = NULL;
static void dao_gsl_eigen_symmv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symmv_workspace *self = (gsl_eigen_symmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symmv_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_symmv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symmv_workspace *self = (gsl_eigen_symmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symmv_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_symmv_workspace_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symmv_workspace *self = (gsl_eigen_symmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symmv_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->d, 0 );
}
static void dao_gsl_eigen_symmv_workspace_GETF_sd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symmv_workspace *self = (gsl_eigen_symmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symmv_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->sd, 0 );
}
static void dao_gsl_eigen_symmv_workspace_GETF_gc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symmv_workspace *self = (gsl_eigen_symmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symmv_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->gc, 0 );
}
static void dao_gsl_eigen_symmv_workspace_GETF_gs( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_symmv_workspace *self = (gsl_eigen_symmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_symmv_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->gs, 0 );
}
static void dao_gsl_eigen_symmv_workspace_gsl_eigen_symmv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_symmv_workspace *self = Dao_gsl_eigen_symmv_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_symmv_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_herm_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_herm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_herm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_herm_workspace_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_herm_workspace_GETF_sd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_herm_workspace_GETF_tau( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_herm_workspace_gsl_eigen_herm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_herm_workspace_Meths[] = 
{
  { dao_gsl_eigen_herm_workspace_GETF_size, ".size( self :gsl_eigen_herm_workspace )=>int" },
  { dao_gsl_eigen_herm_workspace_SETF_size, ".size=( self :gsl_eigen_herm_workspace, size :int )" },
  { dao_gsl_eigen_herm_workspace_GETF_d, ".d( self :gsl_eigen_herm_workspace )=>double" },
  { dao_gsl_eigen_herm_workspace_GETF_sd, ".sd( self :gsl_eigen_herm_workspace )=>double" },
  { dao_gsl_eigen_herm_workspace_GETF_tau, ".tau( self :gsl_eigen_herm_workspace )=>double" },
  { dao_gsl_eigen_herm_workspace_gsl_eigen_herm_workspace, "gsl_eigen_herm_workspace(  )=>gsl_eigen_herm_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_herm_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_herm_workspace_Typer = 
{ "gsl_eigen_herm_workspace", NULL,
  dao_gsl_eigen_herm_workspace_Nums,
  dao_gsl_eigen_herm_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_herm_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_herm_workspace_Typer = & gsl_eigen_herm_workspace_Typer;
DaoType *dao_type_gsl_eigen_herm_workspace = NULL;
static void dao_gsl_eigen_herm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_herm_workspace *self = (gsl_eigen_herm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_herm_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_herm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_herm_workspace *self = (gsl_eigen_herm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_herm_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_herm_workspace_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_herm_workspace *self = (gsl_eigen_herm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_herm_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->d, 0 );
}
static void dao_gsl_eigen_herm_workspace_GETF_sd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_herm_workspace *self = (gsl_eigen_herm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_herm_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->sd, 0 );
}
static void dao_gsl_eigen_herm_workspace_GETF_tau( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_herm_workspace *self = (gsl_eigen_herm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_herm_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->tau, 0 );
}
static void dao_gsl_eigen_herm_workspace_gsl_eigen_herm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_herm_workspace *self = Dao_gsl_eigen_herm_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_herm_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_hermv_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_hermv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_hermv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_hermv_workspace_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_hermv_workspace_GETF_sd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_hermv_workspace_GETF_tau( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_hermv_workspace_GETF_gc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_hermv_workspace_GETF_gs( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_hermv_workspace_gsl_eigen_hermv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_hermv_workspace_Meths[] = 
{
  { dao_gsl_eigen_hermv_workspace_GETF_size, ".size( self :gsl_eigen_hermv_workspace )=>int" },
  { dao_gsl_eigen_hermv_workspace_SETF_size, ".size=( self :gsl_eigen_hermv_workspace, size :int )" },
  { dao_gsl_eigen_hermv_workspace_GETF_d, ".d( self :gsl_eigen_hermv_workspace )=>double" },
  { dao_gsl_eigen_hermv_workspace_GETF_sd, ".sd( self :gsl_eigen_hermv_workspace )=>double" },
  { dao_gsl_eigen_hermv_workspace_GETF_tau, ".tau( self :gsl_eigen_hermv_workspace )=>double" },
  { dao_gsl_eigen_hermv_workspace_GETF_gc, ".gc( self :gsl_eigen_hermv_workspace )=>double" },
  { dao_gsl_eigen_hermv_workspace_GETF_gs, ".gs( self :gsl_eigen_hermv_workspace )=>double" },
  { dao_gsl_eigen_hermv_workspace_gsl_eigen_hermv_workspace, "gsl_eigen_hermv_workspace(  )=>gsl_eigen_hermv_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_hermv_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_hermv_workspace_Typer = 
{ "gsl_eigen_hermv_workspace", NULL,
  dao_gsl_eigen_hermv_workspace_Nums,
  dao_gsl_eigen_hermv_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_hermv_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_hermv_workspace_Typer = & gsl_eigen_hermv_workspace_Typer;
DaoType *dao_type_gsl_eigen_hermv_workspace = NULL;
static void dao_gsl_eigen_hermv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_hermv_workspace *self = (gsl_eigen_hermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_hermv_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_hermv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_hermv_workspace *self = (gsl_eigen_hermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_hermv_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_hermv_workspace_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_hermv_workspace *self = (gsl_eigen_hermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_hermv_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->d, 0 );
}
static void dao_gsl_eigen_hermv_workspace_GETF_sd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_hermv_workspace *self = (gsl_eigen_hermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_hermv_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->sd, 0 );
}
static void dao_gsl_eigen_hermv_workspace_GETF_tau( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_hermv_workspace *self = (gsl_eigen_hermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_hermv_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->tau, 0 );
}
static void dao_gsl_eigen_hermv_workspace_GETF_gc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_hermv_workspace *self = (gsl_eigen_hermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_hermv_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->gc, 0 );
}
static void dao_gsl_eigen_hermv_workspace_GETF_gs( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_hermv_workspace *self = (gsl_eigen_hermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_hermv_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->gs, 0 );
}
static void dao_gsl_eigen_hermv_workspace_gsl_eigen_hermv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_hermv_workspace *self = Dao_gsl_eigen_hermv_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_hermv_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_francis_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_francis_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_GETF_max_iterations( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_SETF_max_iterations( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_GETF_n_iter( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_SETF_n_iter( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_GETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_SETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_GETF_compute_t( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_SETF_compute_t( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_GETF_H( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_francis_workspace_gsl_eigen_francis_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_francis_workspace_Meths[] = 
{
  { dao_gsl_eigen_francis_workspace_GETF_size, ".size( self :gsl_eigen_francis_workspace )=>int" },
  { dao_gsl_eigen_francis_workspace_SETF_size, ".size=( self :gsl_eigen_francis_workspace, size :int )" },
  { dao_gsl_eigen_francis_workspace_GETF_max_iterations, ".max_iterations( self :gsl_eigen_francis_workspace )=>int" },
  { dao_gsl_eigen_francis_workspace_SETF_max_iterations, ".max_iterations=( self :gsl_eigen_francis_workspace, max_iterations :int )" },
  { dao_gsl_eigen_francis_workspace_GETF_n_iter, ".n_iter( self :gsl_eigen_francis_workspace )=>int" },
  { dao_gsl_eigen_francis_workspace_SETF_n_iter, ".n_iter=( self :gsl_eigen_francis_workspace, n_iter :int )" },
  { dao_gsl_eigen_francis_workspace_GETF_n_evals, ".n_evals( self :gsl_eigen_francis_workspace )=>int" },
  { dao_gsl_eigen_francis_workspace_SETF_n_evals, ".n_evals=( self :gsl_eigen_francis_workspace, n_evals :int )" },
  { dao_gsl_eigen_francis_workspace_GETF_compute_t, ".compute_t( self :gsl_eigen_francis_workspace )=>int" },
  { dao_gsl_eigen_francis_workspace_SETF_compute_t, ".compute_t=( self :gsl_eigen_francis_workspace, compute_t :int )" },
  { dao_gsl_eigen_francis_workspace_GETF_H, ".H( self :gsl_eigen_francis_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_francis_workspace_GETF_Z, ".Z( self :gsl_eigen_francis_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_francis_workspace_gsl_eigen_francis_workspace, "gsl_eigen_francis_workspace(  )=>gsl_eigen_francis_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_francis_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_francis_workspace_Typer = 
{ "gsl_eigen_francis_workspace", NULL,
  dao_gsl_eigen_francis_workspace_Nums,
  dao_gsl_eigen_francis_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_francis_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_francis_workspace_Typer = & gsl_eigen_francis_workspace_Typer;
DaoType *dao_type_gsl_eigen_francis_workspace = NULL;
static void dao_gsl_eigen_francis_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_francis_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_francis_workspace_GETF_max_iterations( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->max_iterations );
}
static void dao_gsl_eigen_francis_workspace_SETF_max_iterations( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  self->max_iterations = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_francis_workspace_GETF_n_iter( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n_iter );
}
static void dao_gsl_eigen_francis_workspace_SETF_n_iter( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  self->n_iter = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_francis_workspace_GETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n_evals );
}
static void dao_gsl_eigen_francis_workspace_SETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  self->n_evals = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_francis_workspace_GETF_compute_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->compute_t );
}
static void dao_gsl_eigen_francis_workspace_SETF_compute_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  self->compute_t = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_francis_workspace_GETF_H( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->H, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_francis_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_francis_workspace *self = (gsl_eigen_francis_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_francis_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->Z, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_francis_workspace_gsl_eigen_francis_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_francis_workspace *self = Dao_gsl_eigen_francis_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_francis_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_nonsymm_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_nonsymm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_GETF_diag( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_GETF_tau( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_GETF_do_balance( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_SETF_do_balance( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_GETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_SETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_GETF_francis_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymm_workspace_gsl_eigen_nonsymm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_nonsymm_workspace_Meths[] = 
{
  { dao_gsl_eigen_nonsymm_workspace_GETF_size, ".size( self :gsl_eigen_nonsymm_workspace )=>int" },
  { dao_gsl_eigen_nonsymm_workspace_SETF_size, ".size=( self :gsl_eigen_nonsymm_workspace, size :int )" },
  { dao_gsl_eigen_nonsymm_workspace_GETF_diag, ".diag( self :gsl_eigen_nonsymm_workspace )=>gsl_vector" },
  { dao_gsl_eigen_nonsymm_workspace_GETF_tau, ".tau( self :gsl_eigen_nonsymm_workspace )=>gsl_vector" },
  { dao_gsl_eigen_nonsymm_workspace_GETF_Z, ".Z( self :gsl_eigen_nonsymm_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_nonsymm_workspace_GETF_do_balance, ".do_balance( self :gsl_eigen_nonsymm_workspace )=>int" },
  { dao_gsl_eigen_nonsymm_workspace_SETF_do_balance, ".do_balance=( self :gsl_eigen_nonsymm_workspace, do_balance :int )" },
  { dao_gsl_eigen_nonsymm_workspace_GETF_n_evals, ".n_evals( self :gsl_eigen_nonsymm_workspace )=>int" },
  { dao_gsl_eigen_nonsymm_workspace_SETF_n_evals, ".n_evals=( self :gsl_eigen_nonsymm_workspace, n_evals :int )" },
  { dao_gsl_eigen_nonsymm_workspace_GETF_francis_workspace_p, ".francis_workspace_p( self :gsl_eigen_nonsymm_workspace )=>gsl_eigen_francis_workspace" },
  { dao_gsl_eigen_nonsymm_workspace_gsl_eigen_nonsymm_workspace, "gsl_eigen_nonsymm_workspace(  )=>gsl_eigen_nonsymm_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_nonsymm_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_nonsymm_workspace_Typer = 
{ "gsl_eigen_nonsymm_workspace", NULL,
  dao_gsl_eigen_nonsymm_workspace_Nums,
  dao_gsl_eigen_nonsymm_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_nonsymm_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_nonsymm_workspace_Typer = & gsl_eigen_nonsymm_workspace_Typer;
DaoType *dao_type_gsl_eigen_nonsymm_workspace = NULL;
static void dao_gsl_eigen_nonsymm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_nonsymm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_nonsymm_workspace_GETF_diag( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->diag, dao_type_gsl_vector );
}
static void dao_gsl_eigen_nonsymm_workspace_GETF_tau( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->tau, dao_type_gsl_vector );
}
static void dao_gsl_eigen_nonsymm_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->Z, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_nonsymm_workspace_GETF_do_balance( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->do_balance );
}
static void dao_gsl_eigen_nonsymm_workspace_SETF_do_balance( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  self->do_balance = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_nonsymm_workspace_GETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n_evals );
}
static void dao_gsl_eigen_nonsymm_workspace_SETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  self->n_evals = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_nonsymm_workspace_GETF_francis_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymm_workspace *self = (gsl_eigen_nonsymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymm_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->francis_workspace_p, dao_type_gsl_eigen_francis_workspace );
}
static void dao_gsl_eigen_nonsymm_workspace_gsl_eigen_nonsymm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_nonsymm_workspace *self = Dao_gsl_eigen_nonsymm_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_nonsymm_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_nonsymmv_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_nonsymmv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymmv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymmv_workspace_GETF_work( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymmv_workspace_GETF_work2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymmv_workspace_GETF_work3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymmv_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymmv_workspace_GETF_nonsymm_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_nonsymmv_workspace_gsl_eigen_nonsymmv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_nonsymmv_workspace_Meths[] = 
{
  { dao_gsl_eigen_nonsymmv_workspace_GETF_size, ".size( self :gsl_eigen_nonsymmv_workspace )=>int" },
  { dao_gsl_eigen_nonsymmv_workspace_SETF_size, ".size=( self :gsl_eigen_nonsymmv_workspace, size :int )" },
  { dao_gsl_eigen_nonsymmv_workspace_GETF_work, ".work( self :gsl_eigen_nonsymmv_workspace )=>gsl_vector" },
  { dao_gsl_eigen_nonsymmv_workspace_GETF_work2, ".work2( self :gsl_eigen_nonsymmv_workspace )=>gsl_vector" },
  { dao_gsl_eigen_nonsymmv_workspace_GETF_work3, ".work3( self :gsl_eigen_nonsymmv_workspace )=>gsl_vector" },
  { dao_gsl_eigen_nonsymmv_workspace_GETF_Z, ".Z( self :gsl_eigen_nonsymmv_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_nonsymmv_workspace_GETF_nonsymm_workspace_p, ".nonsymm_workspace_p( self :gsl_eigen_nonsymmv_workspace )=>gsl_eigen_nonsymm_workspace" },
  { dao_gsl_eigen_nonsymmv_workspace_gsl_eigen_nonsymmv_workspace, "gsl_eigen_nonsymmv_workspace(  )=>gsl_eigen_nonsymmv_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_nonsymmv_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_nonsymmv_workspace_Typer = 
{ "gsl_eigen_nonsymmv_workspace", NULL,
  dao_gsl_eigen_nonsymmv_workspace_Nums,
  dao_gsl_eigen_nonsymmv_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_nonsymmv_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_nonsymmv_workspace_Typer = & gsl_eigen_nonsymmv_workspace_Typer;
DaoType *dao_type_gsl_eigen_nonsymmv_workspace = NULL;
static void dao_gsl_eigen_nonsymmv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymmv_workspace *self = (gsl_eigen_nonsymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymmv_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_nonsymmv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymmv_workspace *self = (gsl_eigen_nonsymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymmv_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_nonsymmv_workspace_GETF_work( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymmv_workspace *self = (gsl_eigen_nonsymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymmv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work, dao_type_gsl_vector );
}
static void dao_gsl_eigen_nonsymmv_workspace_GETF_work2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymmv_workspace *self = (gsl_eigen_nonsymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymmv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work2, dao_type_gsl_vector );
}
static void dao_gsl_eigen_nonsymmv_workspace_GETF_work3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymmv_workspace *self = (gsl_eigen_nonsymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymmv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work3, dao_type_gsl_vector );
}
static void dao_gsl_eigen_nonsymmv_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymmv_workspace *self = (gsl_eigen_nonsymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymmv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->Z, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_nonsymmv_workspace_GETF_nonsymm_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_nonsymmv_workspace *self = (gsl_eigen_nonsymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_nonsymmv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->nonsymm_workspace_p, dao_type_gsl_eigen_nonsymm_workspace );
}
static void dao_gsl_eigen_nonsymmv_workspace_gsl_eigen_nonsymmv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_nonsymmv_workspace *self = Dao_gsl_eigen_nonsymmv_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_nonsymmv_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_gensymm_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_gensymm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gensymm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gensymm_workspace_GETF_symm_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gensymm_workspace_gsl_eigen_gensymm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_gensymm_workspace_Meths[] = 
{
  { dao_gsl_eigen_gensymm_workspace_GETF_size, ".size( self :gsl_eigen_gensymm_workspace )=>int" },
  { dao_gsl_eigen_gensymm_workspace_SETF_size, ".size=( self :gsl_eigen_gensymm_workspace, size :int )" },
  { dao_gsl_eigen_gensymm_workspace_GETF_symm_workspace_p, ".symm_workspace_p( self :gsl_eigen_gensymm_workspace )=>gsl_eigen_symm_workspace" },
  { dao_gsl_eigen_gensymm_workspace_gsl_eigen_gensymm_workspace, "gsl_eigen_gensymm_workspace(  )=>gsl_eigen_gensymm_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_gensymm_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_gensymm_workspace_Typer = 
{ "gsl_eigen_gensymm_workspace", NULL,
  dao_gsl_eigen_gensymm_workspace_Nums,
  dao_gsl_eigen_gensymm_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_gensymm_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_gensymm_workspace_Typer = & gsl_eigen_gensymm_workspace_Typer;
DaoType *dao_type_gsl_eigen_gensymm_workspace = NULL;
static void dao_gsl_eigen_gensymm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gensymm_workspace *self = (gsl_eigen_gensymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gensymm_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_gensymm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gensymm_workspace *self = (gsl_eigen_gensymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gensymm_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_gensymm_workspace_GETF_symm_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gensymm_workspace *self = (gsl_eigen_gensymm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gensymm_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->symm_workspace_p, dao_type_gsl_eigen_symm_workspace );
}
static void dao_gsl_eigen_gensymm_workspace_gsl_eigen_gensymm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_gensymm_workspace *self = Dao_gsl_eigen_gensymm_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_gensymm_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_gensymmv_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_gensymmv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gensymmv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gensymmv_workspace_GETF_symmv_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gensymmv_workspace_gsl_eigen_gensymmv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_gensymmv_workspace_Meths[] = 
{
  { dao_gsl_eigen_gensymmv_workspace_GETF_size, ".size( self :gsl_eigen_gensymmv_workspace )=>int" },
  { dao_gsl_eigen_gensymmv_workspace_SETF_size, ".size=( self :gsl_eigen_gensymmv_workspace, size :int )" },
  { dao_gsl_eigen_gensymmv_workspace_GETF_symmv_workspace_p, ".symmv_workspace_p( self :gsl_eigen_gensymmv_workspace )=>gsl_eigen_symmv_workspace" },
  { dao_gsl_eigen_gensymmv_workspace_gsl_eigen_gensymmv_workspace, "gsl_eigen_gensymmv_workspace(  )=>gsl_eigen_gensymmv_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_gensymmv_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_gensymmv_workspace_Typer = 
{ "gsl_eigen_gensymmv_workspace", NULL,
  dao_gsl_eigen_gensymmv_workspace_Nums,
  dao_gsl_eigen_gensymmv_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_gensymmv_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_gensymmv_workspace_Typer = & gsl_eigen_gensymmv_workspace_Typer;
DaoType *dao_type_gsl_eigen_gensymmv_workspace = NULL;
static void dao_gsl_eigen_gensymmv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gensymmv_workspace *self = (gsl_eigen_gensymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gensymmv_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_gensymmv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gensymmv_workspace *self = (gsl_eigen_gensymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gensymmv_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_gensymmv_workspace_GETF_symmv_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gensymmv_workspace *self = (gsl_eigen_gensymmv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gensymmv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->symmv_workspace_p, dao_type_gsl_eigen_symmv_workspace );
}
static void dao_gsl_eigen_gensymmv_workspace_gsl_eigen_gensymmv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_gensymmv_workspace *self = Dao_gsl_eigen_gensymmv_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_gensymmv_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_genherm_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_genherm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genherm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genherm_workspace_GETF_herm_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genherm_workspace_gsl_eigen_genherm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_genherm_workspace_Meths[] = 
{
  { dao_gsl_eigen_genherm_workspace_GETF_size, ".size( self :gsl_eigen_genherm_workspace )=>int" },
  { dao_gsl_eigen_genherm_workspace_SETF_size, ".size=( self :gsl_eigen_genherm_workspace, size :int )" },
  { dao_gsl_eigen_genherm_workspace_GETF_herm_workspace_p, ".herm_workspace_p( self :gsl_eigen_genherm_workspace )=>gsl_eigen_herm_workspace" },
  { dao_gsl_eigen_genherm_workspace_gsl_eigen_genherm_workspace, "gsl_eigen_genherm_workspace(  )=>gsl_eigen_genherm_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_genherm_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_genherm_workspace_Typer = 
{ "gsl_eigen_genherm_workspace", NULL,
  dao_gsl_eigen_genherm_workspace_Nums,
  dao_gsl_eigen_genherm_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_genherm_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_genherm_workspace_Typer = & gsl_eigen_genherm_workspace_Typer;
DaoType *dao_type_gsl_eigen_genherm_workspace = NULL;
static void dao_gsl_eigen_genherm_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genherm_workspace *self = (gsl_eigen_genherm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genherm_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_genherm_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genherm_workspace *self = (gsl_eigen_genherm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genherm_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_genherm_workspace_GETF_herm_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genherm_workspace *self = (gsl_eigen_genherm_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genherm_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->herm_workspace_p, dao_type_gsl_eigen_herm_workspace );
}
static void dao_gsl_eigen_genherm_workspace_gsl_eigen_genherm_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_genherm_workspace *self = Dao_gsl_eigen_genherm_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_genherm_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_genhermv_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_genhermv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genhermv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genhermv_workspace_GETF_hermv_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genhermv_workspace_gsl_eigen_genhermv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_genhermv_workspace_Meths[] = 
{
  { dao_gsl_eigen_genhermv_workspace_GETF_size, ".size( self :gsl_eigen_genhermv_workspace )=>int" },
  { dao_gsl_eigen_genhermv_workspace_SETF_size, ".size=( self :gsl_eigen_genhermv_workspace, size :int )" },
  { dao_gsl_eigen_genhermv_workspace_GETF_hermv_workspace_p, ".hermv_workspace_p( self :gsl_eigen_genhermv_workspace )=>gsl_eigen_hermv_workspace" },
  { dao_gsl_eigen_genhermv_workspace_gsl_eigen_genhermv_workspace, "gsl_eigen_genhermv_workspace(  )=>gsl_eigen_genhermv_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_genhermv_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_genhermv_workspace_Typer = 
{ "gsl_eigen_genhermv_workspace", NULL,
  dao_gsl_eigen_genhermv_workspace_Nums,
  dao_gsl_eigen_genhermv_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_genhermv_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_genhermv_workspace_Typer = & gsl_eigen_genhermv_workspace_Typer;
DaoType *dao_type_gsl_eigen_genhermv_workspace = NULL;
static void dao_gsl_eigen_genhermv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genhermv_workspace *self = (gsl_eigen_genhermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genhermv_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_genhermv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genhermv_workspace *self = (gsl_eigen_genhermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genhermv_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_genhermv_workspace_GETF_hermv_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genhermv_workspace *self = (gsl_eigen_genhermv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genhermv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->hermv_workspace_p, dao_type_gsl_eigen_hermv_workspace );
}
static void dao_gsl_eigen_genhermv_workspace_gsl_eigen_genhermv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_genhermv_workspace *self = Dao_gsl_eigen_genhermv_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_genhermv_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_gen_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_gen_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_work( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_max_iterations( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_max_iterations( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_n_iter( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_n_iter( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_eshift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_eshift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_needtop( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_needtop( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_atol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_atol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_btol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_btol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_ascale( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_ascale( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_bscale( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_bscale( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_H( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_R( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_compute_s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_compute_s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_compute_t( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_SETF_compute_t( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_Q( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_gen_workspace_gsl_eigen_gen_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_gen_workspace_Meths[] = 
{
  { dao_gsl_eigen_gen_workspace_GETF_size, ".size( self :gsl_eigen_gen_workspace )=>int" },
  { dao_gsl_eigen_gen_workspace_SETF_size, ".size=( self :gsl_eigen_gen_workspace, size :int )" },
  { dao_gsl_eigen_gen_workspace_GETF_work, ".work( self :gsl_eigen_gen_workspace )=>gsl_vector" },
  { dao_gsl_eigen_gen_workspace_GETF_n_evals, ".n_evals( self :gsl_eigen_gen_workspace )=>int" },
  { dao_gsl_eigen_gen_workspace_SETF_n_evals, ".n_evals=( self :gsl_eigen_gen_workspace, n_evals :int )" },
  { dao_gsl_eigen_gen_workspace_GETF_max_iterations, ".max_iterations( self :gsl_eigen_gen_workspace )=>int" },
  { dao_gsl_eigen_gen_workspace_SETF_max_iterations, ".max_iterations=( self :gsl_eigen_gen_workspace, max_iterations :int )" },
  { dao_gsl_eigen_gen_workspace_GETF_n_iter, ".n_iter( self :gsl_eigen_gen_workspace )=>int" },
  { dao_gsl_eigen_gen_workspace_SETF_n_iter, ".n_iter=( self :gsl_eigen_gen_workspace, n_iter :int )" },
  { dao_gsl_eigen_gen_workspace_GETF_eshift, ".eshift( self :gsl_eigen_gen_workspace )=>double" },
  { dao_gsl_eigen_gen_workspace_SETF_eshift, ".eshift=( self :gsl_eigen_gen_workspace, eshift :double )" },
  { dao_gsl_eigen_gen_workspace_GETF_needtop, ".needtop( self :gsl_eigen_gen_workspace )=>int" },
  { dao_gsl_eigen_gen_workspace_SETF_needtop, ".needtop=( self :gsl_eigen_gen_workspace, needtop :int )" },
  { dao_gsl_eigen_gen_workspace_GETF_atol, ".atol( self :gsl_eigen_gen_workspace )=>double" },
  { dao_gsl_eigen_gen_workspace_SETF_atol, ".atol=( self :gsl_eigen_gen_workspace, atol :double )" },
  { dao_gsl_eigen_gen_workspace_GETF_btol, ".btol( self :gsl_eigen_gen_workspace )=>double" },
  { dao_gsl_eigen_gen_workspace_SETF_btol, ".btol=( self :gsl_eigen_gen_workspace, btol :double )" },
  { dao_gsl_eigen_gen_workspace_GETF_ascale, ".ascale( self :gsl_eigen_gen_workspace )=>double" },
  { dao_gsl_eigen_gen_workspace_SETF_ascale, ".ascale=( self :gsl_eigen_gen_workspace, ascale :double )" },
  { dao_gsl_eigen_gen_workspace_GETF_bscale, ".bscale( self :gsl_eigen_gen_workspace )=>double" },
  { dao_gsl_eigen_gen_workspace_SETF_bscale, ".bscale=( self :gsl_eigen_gen_workspace, bscale :double )" },
  { dao_gsl_eigen_gen_workspace_GETF_H, ".H( self :gsl_eigen_gen_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_gen_workspace_GETF_R, ".R( self :gsl_eigen_gen_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_gen_workspace_GETF_compute_s, ".compute_s( self :gsl_eigen_gen_workspace )=>int" },
  { dao_gsl_eigen_gen_workspace_SETF_compute_s, ".compute_s=( self :gsl_eigen_gen_workspace, compute_s :int )" },
  { dao_gsl_eigen_gen_workspace_GETF_compute_t, ".compute_t( self :gsl_eigen_gen_workspace )=>int" },
  { dao_gsl_eigen_gen_workspace_SETF_compute_t, ".compute_t=( self :gsl_eigen_gen_workspace, compute_t :int )" },
  { dao_gsl_eigen_gen_workspace_GETF_Q, ".Q( self :gsl_eigen_gen_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_gen_workspace_GETF_Z, ".Z( self :gsl_eigen_gen_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_gen_workspace_gsl_eigen_gen_workspace, "gsl_eigen_gen_workspace(  )=>gsl_eigen_gen_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_gen_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_gen_workspace_Typer = 
{ "gsl_eigen_gen_workspace", NULL,
  dao_gsl_eigen_gen_workspace_Nums,
  dao_gsl_eigen_gen_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_gen_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_gen_workspace_Typer = & gsl_eigen_gen_workspace_Typer;
DaoType *dao_type_gsl_eigen_gen_workspace = NULL;
static void dao_gsl_eigen_gen_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_gen_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_work( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work, dao_type_gsl_vector );
}
static void dao_gsl_eigen_gen_workspace_GETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n_evals );
}
static void dao_gsl_eigen_gen_workspace_SETF_n_evals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->n_evals = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_max_iterations( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->max_iterations );
}
static void dao_gsl_eigen_gen_workspace_SETF_max_iterations( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->max_iterations = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_n_iter( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n_iter );
}
static void dao_gsl_eigen_gen_workspace_SETF_n_iter( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->n_iter = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_eshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutDouble( _proc, (double) self->eshift );
}
static void dao_gsl_eigen_gen_workspace_SETF_eshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->eshift = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_needtop( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->needtop );
}
static void dao_gsl_eigen_gen_workspace_SETF_needtop( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->needtop = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_atol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutDouble( _proc, (double) self->atol );
}
static void dao_gsl_eigen_gen_workspace_SETF_atol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->atol = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_btol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutDouble( _proc, (double) self->btol );
}
static void dao_gsl_eigen_gen_workspace_SETF_btol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->btol = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_ascale( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutDouble( _proc, (double) self->ascale );
}
static void dao_gsl_eigen_gen_workspace_SETF_ascale( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->ascale = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_bscale( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutDouble( _proc, (double) self->bscale );
}
static void dao_gsl_eigen_gen_workspace_SETF_bscale( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->bscale = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_H( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->H, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_gen_workspace_GETF_R( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->R, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_gen_workspace_GETF_compute_s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->compute_s );
}
static void dao_gsl_eigen_gen_workspace_SETF_compute_s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->compute_s = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_compute_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->compute_t );
}
static void dao_gsl_eigen_gen_workspace_SETF_compute_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  self->compute_t = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_gen_workspace_GETF_Q( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->Q, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_gen_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_gen_workspace *self = (gsl_eigen_gen_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_gen_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->Z, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_gen_workspace_gsl_eigen_gen_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_gen_workspace *self = Dao_gsl_eigen_gen_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_gen_workspace );
}
/* /usr/local/include/gsl/gsl_eigen.h */


static DaoNumItem dao_gsl_eigen_genv_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_eigen_genv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_GETF_work1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_GETF_work2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_GETF_work3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_GETF_work4( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_GETF_work5( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_GETF_work6( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_GETF_Q( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_GETF_gen_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_eigen_genv_workspace_gsl_eigen_genv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_eigen_genv_workspace_Meths[] = 
{
  { dao_gsl_eigen_genv_workspace_GETF_size, ".size( self :gsl_eigen_genv_workspace )=>int" },
  { dao_gsl_eigen_genv_workspace_SETF_size, ".size=( self :gsl_eigen_genv_workspace, size :int )" },
  { dao_gsl_eigen_genv_workspace_GETF_work1, ".work1( self :gsl_eigen_genv_workspace )=>gsl_vector" },
  { dao_gsl_eigen_genv_workspace_GETF_work2, ".work2( self :gsl_eigen_genv_workspace )=>gsl_vector" },
  { dao_gsl_eigen_genv_workspace_GETF_work3, ".work3( self :gsl_eigen_genv_workspace )=>gsl_vector" },
  { dao_gsl_eigen_genv_workspace_GETF_work4, ".work4( self :gsl_eigen_genv_workspace )=>gsl_vector" },
  { dao_gsl_eigen_genv_workspace_GETF_work5, ".work5( self :gsl_eigen_genv_workspace )=>gsl_vector" },
  { dao_gsl_eigen_genv_workspace_GETF_work6, ".work6( self :gsl_eigen_genv_workspace )=>gsl_vector" },
  { dao_gsl_eigen_genv_workspace_GETF_Q, ".Q( self :gsl_eigen_genv_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_genv_workspace_GETF_Z, ".Z( self :gsl_eigen_genv_workspace )=>gsl_matrix" },
  { dao_gsl_eigen_genv_workspace_GETF_gen_workspace_p, ".gen_workspace_p( self :gsl_eigen_genv_workspace )=>gsl_eigen_gen_workspace" },
  { dao_gsl_eigen_genv_workspace_gsl_eigen_genv_workspace, "gsl_eigen_genv_workspace(  )=>gsl_eigen_genv_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_eigen_genv_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_eigen_genv_workspace_Typer = 
{ "gsl_eigen_genv_workspace", NULL,
  dao_gsl_eigen_genv_workspace_Nums,
  dao_gsl_eigen_genv_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_eigen_genv_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_eigen_genv_workspace_Typer = & gsl_eigen_genv_workspace_Typer;
DaoType *dao_type_gsl_eigen_genv_workspace = NULL;
static void dao_gsl_eigen_genv_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_eigen_genv_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_eigen_genv_workspace_GETF_work1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work1, dao_type_gsl_vector );
}
static void dao_gsl_eigen_genv_workspace_GETF_work2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work2, dao_type_gsl_vector );
}
static void dao_gsl_eigen_genv_workspace_GETF_work3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work3, dao_type_gsl_vector );
}
static void dao_gsl_eigen_genv_workspace_GETF_work4( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work4, dao_type_gsl_vector );
}
static void dao_gsl_eigen_genv_workspace_GETF_work5( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work5, dao_type_gsl_vector );
}
static void dao_gsl_eigen_genv_workspace_GETF_work6( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->work6, dao_type_gsl_vector );
}
static void dao_gsl_eigen_genv_workspace_GETF_Q( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->Q, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_genv_workspace_GETF_Z( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->Z, dao_type_gsl_matrix );
}
static void dao_gsl_eigen_genv_workspace_GETF_gen_workspace_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_eigen_genv_workspace *self = (gsl_eigen_genv_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_eigen_genv_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->gen_workspace_p, dao_type_gsl_eigen_gen_workspace );
}
static void dao_gsl_eigen_genv_workspace_gsl_eigen_genv_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_eigen_genv_workspace *self = Dao_gsl_eigen_genv_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_eigen_genv_workspace );
}
/* /usr/local/include/gsl/gsl_fft_complex.h */


static DaoNumItem dao_gsl_fft_complex_wavetable_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_complex_wavetable_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_gsl_fft_complex_wavetable( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_complex_wavetable_Meths[] = 
{
  { dao_gsl_fft_complex_wavetable_GETF_n, ".n( self :gsl_fft_complex_wavetable )=>int" },
  { dao_gsl_fft_complex_wavetable_SETF_n, ".n=( self :gsl_fft_complex_wavetable, n :int )" },
  { dao_gsl_fft_complex_wavetable_GETF_nf, ".nf( self :gsl_fft_complex_wavetable )=>int" },
  { dao_gsl_fft_complex_wavetable_SETF_nf, ".nf=( self :gsl_fft_complex_wavetable, nf :int )" },
  { dao_gsl_fft_complex_wavetable_GETF_factor, ".factor( self :gsl_fft_complex_wavetable )=>array<int>" },
  { dao_gsl_fft_complex_wavetable_SETF_factor, ".factor=( self :gsl_fft_complex_wavetable, factor :array<int> )" },
  { dao_gsl_fft_complex_wavetable_GETF_twiddle, ".twiddle( self :gsl_fft_complex_wavetable )=>list<gsl_complex>" },
  { dao_gsl_fft_complex_wavetable_GETF_trig, ".trig( self :gsl_fft_complex_wavetable )=>gsl_complex" },
  { dao_gsl_fft_complex_wavetable_gsl_fft_complex_wavetable, "gsl_fft_complex_wavetable(  )=>gsl_fft_complex_wavetable" },
  { NULL, NULL }
};
static void Dao_gsl_fft_complex_wavetable_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_complex_wavetable_Typer = 
{ "gsl_fft_complex_wavetable", NULL,
  dao_gsl_fft_complex_wavetable_Nums,
  dao_gsl_fft_complex_wavetable_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_complex_wavetable_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_complex_wavetable_Typer = & gsl_fft_complex_wavetable_Typer;
DaoType *dao_type_gsl_fft_complex_wavetable = NULL;
static void dao_gsl_fft_complex_wavetable_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable *self = (gsl_fft_complex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_complex_wavetable_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable *self = (gsl_fft_complex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_complex_wavetable_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable *self = (gsl_fft_complex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable);
  DaoProcess_PutInteger( _proc, (daoint) self->nf );
}
static void dao_gsl_fft_complex_wavetable_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable *self = (gsl_fft_complex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable);
  self->nf = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_complex_wavetable_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable *self = (gsl_fft_complex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->factor, 64 );
}
static void dao_gsl_fft_complex_wavetable_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable *self = (gsl_fft_complex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 64 ) size = 64;
  memmove( self->factor, DaoArray_ToSInt( (DaoArray*)_p[1] ), size*sizeof(signed int) );
}
static void dao_gsl_fft_complex_wavetable_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable *self = (gsl_fft_complex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable);
  DaoList *list = DaoProcess_PutList( _proc );
  daoint i, n = 64;
  for(i=0; i<n; i++){
    DaoCdata *it = DaoProcess_NewCdata( _proc, dao_type_gsl_complex, self->twiddle[i], 0 );
    DaoList_PushBack( list, (DaoValue*) it );
  }
}
static void dao_gsl_fft_complex_wavetable_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable *self = (gsl_fft_complex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable);
  DaoProcess_WrapCdata( _proc, (void*) self->trig, dao_type_gsl_complex );
}
static void dao_gsl_fft_complex_wavetable_gsl_fft_complex_wavetable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_complex_wavetable *self = Dao_gsl_fft_complex_wavetable_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_complex_wavetable );
}
/* /usr/local/include/gsl/gsl_fft_complex.h */


static DaoNumItem dao_gsl_fft_complex_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_complex_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_workspace_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_workspace_gsl_fft_complex_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_complex_workspace_Meths[] = 
{
  { dao_gsl_fft_complex_workspace_GETF_n, ".n( self :gsl_fft_complex_workspace )=>int" },
  { dao_gsl_fft_complex_workspace_SETF_n, ".n=( self :gsl_fft_complex_workspace, n :int )" },
  { dao_gsl_fft_complex_workspace_GETF_scratch, ".scratch( self :gsl_fft_complex_workspace )=>double" },
  { dao_gsl_fft_complex_workspace_gsl_fft_complex_workspace, "gsl_fft_complex_workspace(  )=>gsl_fft_complex_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_fft_complex_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_complex_workspace_Typer = 
{ "gsl_fft_complex_workspace", NULL,
  dao_gsl_fft_complex_workspace_Nums,
  dao_gsl_fft_complex_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_complex_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_complex_workspace_Typer = & gsl_fft_complex_workspace_Typer;
DaoType *dao_type_gsl_fft_complex_workspace = NULL;
static void dao_gsl_fft_complex_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_workspace *self = (gsl_fft_complex_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_complex_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_workspace *self = (gsl_fft_complex_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_workspace);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_complex_workspace_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_workspace *self = (gsl_fft_complex_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->scratch, 0 );
}
static void dao_gsl_fft_complex_workspace_gsl_fft_complex_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_complex_workspace *self = Dao_gsl_fft_complex_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_complex_workspace );
}
/* /usr/local/include/gsl/gsl_fft_complex_float.h */


static DaoNumItem dao_gsl_fft_complex_wavetable_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_complex_wavetable_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_float_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_float_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_float_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_float_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_float_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_float_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_wavetable_float_gsl_fft_complex_wavetable_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_complex_wavetable_float_Meths[] = 
{
  { dao_gsl_fft_complex_wavetable_float_GETF_n, ".n( self :gsl_fft_complex_wavetable_float )=>int" },
  { dao_gsl_fft_complex_wavetable_float_SETF_n, ".n=( self :gsl_fft_complex_wavetable_float, n :int )" },
  { dao_gsl_fft_complex_wavetable_float_GETF_nf, ".nf( self :gsl_fft_complex_wavetable_float )=>int" },
  { dao_gsl_fft_complex_wavetable_float_SETF_nf, ".nf=( self :gsl_fft_complex_wavetable_float, nf :int )" },
  { dao_gsl_fft_complex_wavetable_float_GETF_factor, ".factor( self :gsl_fft_complex_wavetable_float )=>array<int>" },
  { dao_gsl_fft_complex_wavetable_float_SETF_factor, ".factor=( self :gsl_fft_complex_wavetable_float, factor :array<int> )" },
  { dao_gsl_fft_complex_wavetable_float_GETF_twiddle, ".twiddle( self :gsl_fft_complex_wavetable_float )=>list<gsl_complex_float>" },
  { dao_gsl_fft_complex_wavetable_float_GETF_trig, ".trig( self :gsl_fft_complex_wavetable_float )=>gsl_complex_float" },
  { dao_gsl_fft_complex_wavetable_float_gsl_fft_complex_wavetable_float, "gsl_fft_complex_wavetable_float(  )=>gsl_fft_complex_wavetable_float" },
  { NULL, NULL }
};
static void Dao_gsl_fft_complex_wavetable_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_complex_wavetable_float_Typer = 
{ "gsl_fft_complex_wavetable_float", NULL,
  dao_gsl_fft_complex_wavetable_float_Nums,
  dao_gsl_fft_complex_wavetable_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_complex_wavetable_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_complex_wavetable_float_Typer = & gsl_fft_complex_wavetable_float_Typer;
DaoType *dao_type_gsl_fft_complex_wavetable_float = NULL;
static void dao_gsl_fft_complex_wavetable_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable_float *self = (gsl_fft_complex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable_float);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_complex_wavetable_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable_float *self = (gsl_fft_complex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable_float);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_complex_wavetable_float_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable_float *self = (gsl_fft_complex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable_float);
  DaoProcess_PutInteger( _proc, (daoint) self->nf );
}
static void dao_gsl_fft_complex_wavetable_float_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable_float *self = (gsl_fft_complex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable_float);
  self->nf = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_complex_wavetable_float_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable_float *self = (gsl_fft_complex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable_float);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->factor, 64 );
}
static void dao_gsl_fft_complex_wavetable_float_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable_float *self = (gsl_fft_complex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable_float);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 64 ) size = 64;
  memmove( self->factor, DaoArray_ToSInt( (DaoArray*)_p[1] ), size*sizeof(signed int) );
}
static void dao_gsl_fft_complex_wavetable_float_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable_float *self = (gsl_fft_complex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable_float);
  DaoList *list = DaoProcess_PutList( _proc );
  daoint i, n = 64;
  for(i=0; i<n; i++){
    DaoCdata *it = DaoProcess_NewCdata( _proc, dao_type_gsl_complex_float, self->twiddle[i], 0 );
    DaoList_PushBack( list, (DaoValue*) it );
  }
}
static void dao_gsl_fft_complex_wavetable_float_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_wavetable_float *self = (gsl_fft_complex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_wavetable_float);
  DaoProcess_WrapCdata( _proc, (void*) self->trig, dao_type_gsl_complex_float );
}
static void dao_gsl_fft_complex_wavetable_float_gsl_fft_complex_wavetable_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_complex_wavetable_float *self = Dao_gsl_fft_complex_wavetable_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_complex_wavetable_float );
}
/* /usr/local/include/gsl/gsl_fft_complex_float.h */


static DaoNumItem dao_gsl_fft_complex_workspace_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_complex_workspace_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_workspace_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_workspace_float_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_complex_workspace_float_gsl_fft_complex_workspace_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_complex_workspace_float_Meths[] = 
{
  { dao_gsl_fft_complex_workspace_float_GETF_n, ".n( self :gsl_fft_complex_workspace_float )=>int" },
  { dao_gsl_fft_complex_workspace_float_SETF_n, ".n=( self :gsl_fft_complex_workspace_float, n :int )" },
  { dao_gsl_fft_complex_workspace_float_GETF_scratch, ".scratch( self :gsl_fft_complex_workspace_float )=>float" },
  { dao_gsl_fft_complex_workspace_float_gsl_fft_complex_workspace_float, "gsl_fft_complex_workspace_float(  )=>gsl_fft_complex_workspace_float" },
  { NULL, NULL }
};
static void Dao_gsl_fft_complex_workspace_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_complex_workspace_float_Typer = 
{ "gsl_fft_complex_workspace_float", NULL,
  dao_gsl_fft_complex_workspace_float_Nums,
  dao_gsl_fft_complex_workspace_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_complex_workspace_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_complex_workspace_float_Typer = & gsl_fft_complex_workspace_float_Typer;
DaoType *dao_type_gsl_fft_complex_workspace_float = NULL;
static void dao_gsl_fft_complex_workspace_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_workspace_float *self = (gsl_fft_complex_workspace_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_workspace_float);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_complex_workspace_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_workspace_float *self = (gsl_fft_complex_workspace_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_workspace_float);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_complex_workspace_float_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_complex_workspace_float *self = (gsl_fft_complex_workspace_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_complex_workspace_float);
  DaoProcess_PutVectorF( _proc, (float*) self->scratch, 0 );
}
static void dao_gsl_fft_complex_workspace_float_gsl_fft_complex_workspace_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_complex_workspace_float *self = Dao_gsl_fft_complex_workspace_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_complex_workspace_float );
}
/* /usr/local/include/gsl/gsl_fft_real.h */


static DaoNumItem dao_gsl_fft_real_wavetable_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_real_wavetable_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_gsl_fft_real_wavetable( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_real_wavetable_Meths[] = 
{
  { dao_gsl_fft_real_wavetable_GETF_n, ".n( self :gsl_fft_real_wavetable )=>int" },
  { dao_gsl_fft_real_wavetable_SETF_n, ".n=( self :gsl_fft_real_wavetable, n :int )" },
  { dao_gsl_fft_real_wavetable_GETF_nf, ".nf( self :gsl_fft_real_wavetable )=>int" },
  { dao_gsl_fft_real_wavetable_SETF_nf, ".nf=( self :gsl_fft_real_wavetable, nf :int )" },
  { dao_gsl_fft_real_wavetable_GETF_factor, ".factor( self :gsl_fft_real_wavetable )=>array<int>" },
  { dao_gsl_fft_real_wavetable_SETF_factor, ".factor=( self :gsl_fft_real_wavetable, factor :array<int> )" },
  { dao_gsl_fft_real_wavetable_GETF_twiddle, ".twiddle( self :gsl_fft_real_wavetable )=>list<gsl_complex>" },
  { dao_gsl_fft_real_wavetable_GETF_trig, ".trig( self :gsl_fft_real_wavetable )=>gsl_complex" },
  { dao_gsl_fft_real_wavetable_gsl_fft_real_wavetable, "gsl_fft_real_wavetable(  )=>gsl_fft_real_wavetable" },
  { NULL, NULL }
};
static void Dao_gsl_fft_real_wavetable_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_real_wavetable_Typer = 
{ "gsl_fft_real_wavetable", NULL,
  dao_gsl_fft_real_wavetable_Nums,
  dao_gsl_fft_real_wavetable_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_real_wavetable_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_real_wavetable_Typer = & gsl_fft_real_wavetable_Typer;
DaoType *dao_type_gsl_fft_real_wavetable = NULL;
static void dao_gsl_fft_real_wavetable_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable *self = (gsl_fft_real_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_real_wavetable_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable *self = (gsl_fft_real_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_real_wavetable_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable *self = (gsl_fft_real_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable);
  DaoProcess_PutInteger( _proc, (daoint) self->nf );
}
static void dao_gsl_fft_real_wavetable_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable *self = (gsl_fft_real_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable);
  self->nf = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_real_wavetable_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable *self = (gsl_fft_real_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->factor, 64 );
}
static void dao_gsl_fft_real_wavetable_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable *self = (gsl_fft_real_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 64 ) size = 64;
  memmove( self->factor, DaoArray_ToSInt( (DaoArray*)_p[1] ), size*sizeof(signed int) );
}
static void dao_gsl_fft_real_wavetable_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable *self = (gsl_fft_real_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable);
  DaoList *list = DaoProcess_PutList( _proc );
  daoint i, n = 64;
  for(i=0; i<n; i++){
    DaoCdata *it = DaoProcess_NewCdata( _proc, dao_type_gsl_complex, self->twiddle[i], 0 );
    DaoList_PushBack( list, (DaoValue*) it );
  }
}
static void dao_gsl_fft_real_wavetable_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable *self = (gsl_fft_real_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable);
  DaoProcess_WrapCdata( _proc, (void*) self->trig, dao_type_gsl_complex );
}
static void dao_gsl_fft_real_wavetable_gsl_fft_real_wavetable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_real_wavetable *self = Dao_gsl_fft_real_wavetable_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_real_wavetable );
}
/* /usr/local/include/gsl/gsl_fft_real.h */


static DaoNumItem dao_gsl_fft_real_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_real_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_workspace_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_workspace_gsl_fft_real_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_real_workspace_Meths[] = 
{
  { dao_gsl_fft_real_workspace_GETF_n, ".n( self :gsl_fft_real_workspace )=>int" },
  { dao_gsl_fft_real_workspace_SETF_n, ".n=( self :gsl_fft_real_workspace, n :int )" },
  { dao_gsl_fft_real_workspace_GETF_scratch, ".scratch( self :gsl_fft_real_workspace )=>double" },
  { dao_gsl_fft_real_workspace_gsl_fft_real_workspace, "gsl_fft_real_workspace(  )=>gsl_fft_real_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_fft_real_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_real_workspace_Typer = 
{ "gsl_fft_real_workspace", NULL,
  dao_gsl_fft_real_workspace_Nums,
  dao_gsl_fft_real_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_real_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_real_workspace_Typer = & gsl_fft_real_workspace_Typer;
DaoType *dao_type_gsl_fft_real_workspace = NULL;
static void dao_gsl_fft_real_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_workspace *self = (gsl_fft_real_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_real_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_workspace *self = (gsl_fft_real_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_workspace);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_real_workspace_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_workspace *self = (gsl_fft_real_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->scratch, 0 );
}
static void dao_gsl_fft_real_workspace_gsl_fft_real_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_real_workspace *self = Dao_gsl_fft_real_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_real_workspace );
}
/* /usr/local/include/gsl/gsl_fft_halfcomplex.h */


static DaoNumItem dao_gsl_fft_halfcomplex_wavetable_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_halfcomplex_wavetable_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_gsl_fft_halfcomplex_wavetable( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_halfcomplex_wavetable_Meths[] = 
{
  { dao_gsl_fft_halfcomplex_wavetable_GETF_n, ".n( self :gsl_fft_halfcomplex_wavetable )=>int" },
  { dao_gsl_fft_halfcomplex_wavetable_SETF_n, ".n=( self :gsl_fft_halfcomplex_wavetable, n :int )" },
  { dao_gsl_fft_halfcomplex_wavetable_GETF_nf, ".nf( self :gsl_fft_halfcomplex_wavetable )=>int" },
  { dao_gsl_fft_halfcomplex_wavetable_SETF_nf, ".nf=( self :gsl_fft_halfcomplex_wavetable, nf :int )" },
  { dao_gsl_fft_halfcomplex_wavetable_GETF_factor, ".factor( self :gsl_fft_halfcomplex_wavetable )=>array<int>" },
  { dao_gsl_fft_halfcomplex_wavetable_SETF_factor, ".factor=( self :gsl_fft_halfcomplex_wavetable, factor :array<int> )" },
  { dao_gsl_fft_halfcomplex_wavetable_GETF_twiddle, ".twiddle( self :gsl_fft_halfcomplex_wavetable )=>list<gsl_complex>" },
  { dao_gsl_fft_halfcomplex_wavetable_GETF_trig, ".trig( self :gsl_fft_halfcomplex_wavetable )=>gsl_complex" },
  { dao_gsl_fft_halfcomplex_wavetable_gsl_fft_halfcomplex_wavetable, "gsl_fft_halfcomplex_wavetable(  )=>gsl_fft_halfcomplex_wavetable" },
  { NULL, NULL }
};
static void Dao_gsl_fft_halfcomplex_wavetable_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_halfcomplex_wavetable_Typer = 
{ "gsl_fft_halfcomplex_wavetable", NULL,
  dao_gsl_fft_halfcomplex_wavetable_Nums,
  dao_gsl_fft_halfcomplex_wavetable_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_halfcomplex_wavetable_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_halfcomplex_wavetable_Typer = & gsl_fft_halfcomplex_wavetable_Typer;
DaoType *dao_type_gsl_fft_halfcomplex_wavetable = NULL;
static void dao_gsl_fft_halfcomplex_wavetable_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable *self = (gsl_fft_halfcomplex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_halfcomplex_wavetable_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable *self = (gsl_fft_halfcomplex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_halfcomplex_wavetable_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable *self = (gsl_fft_halfcomplex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable);
  DaoProcess_PutInteger( _proc, (daoint) self->nf );
}
static void dao_gsl_fft_halfcomplex_wavetable_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable *self = (gsl_fft_halfcomplex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable);
  self->nf = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_halfcomplex_wavetable_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable *self = (gsl_fft_halfcomplex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->factor, 64 );
}
static void dao_gsl_fft_halfcomplex_wavetable_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable *self = (gsl_fft_halfcomplex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 64 ) size = 64;
  memmove( self->factor, DaoArray_ToSInt( (DaoArray*)_p[1] ), size*sizeof(signed int) );
}
static void dao_gsl_fft_halfcomplex_wavetable_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable *self = (gsl_fft_halfcomplex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable);
  DaoList *list = DaoProcess_PutList( _proc );
  daoint i, n = 64;
  for(i=0; i<n; i++){
    DaoCdata *it = DaoProcess_NewCdata( _proc, dao_type_gsl_complex, self->twiddle[i], 0 );
    DaoList_PushBack( list, (DaoValue*) it );
  }
}
static void dao_gsl_fft_halfcomplex_wavetable_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable *self = (gsl_fft_halfcomplex_wavetable*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable);
  DaoProcess_WrapCdata( _proc, (void*) self->trig, dao_type_gsl_complex );
}
static void dao_gsl_fft_halfcomplex_wavetable_gsl_fft_halfcomplex_wavetable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_halfcomplex_wavetable *self = Dao_gsl_fft_halfcomplex_wavetable_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_halfcomplex_wavetable );
}
/* /usr/local/include/gsl/gsl_fft_real_float.h */


static DaoNumItem dao_gsl_fft_real_wavetable_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_real_wavetable_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_float_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_float_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_float_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_float_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_float_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_float_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_wavetable_float_gsl_fft_real_wavetable_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_real_wavetable_float_Meths[] = 
{
  { dao_gsl_fft_real_wavetable_float_GETF_n, ".n( self :gsl_fft_real_wavetable_float )=>int" },
  { dao_gsl_fft_real_wavetable_float_SETF_n, ".n=( self :gsl_fft_real_wavetable_float, n :int )" },
  { dao_gsl_fft_real_wavetable_float_GETF_nf, ".nf( self :gsl_fft_real_wavetable_float )=>int" },
  { dao_gsl_fft_real_wavetable_float_SETF_nf, ".nf=( self :gsl_fft_real_wavetable_float, nf :int )" },
  { dao_gsl_fft_real_wavetable_float_GETF_factor, ".factor( self :gsl_fft_real_wavetable_float )=>array<int>" },
  { dao_gsl_fft_real_wavetable_float_SETF_factor, ".factor=( self :gsl_fft_real_wavetable_float, factor :array<int> )" },
  { dao_gsl_fft_real_wavetable_float_GETF_twiddle, ".twiddle( self :gsl_fft_real_wavetable_float )=>list<gsl_complex_float>" },
  { dao_gsl_fft_real_wavetable_float_GETF_trig, ".trig( self :gsl_fft_real_wavetable_float )=>gsl_complex_float" },
  { dao_gsl_fft_real_wavetable_float_gsl_fft_real_wavetable_float, "gsl_fft_real_wavetable_float(  )=>gsl_fft_real_wavetable_float" },
  { NULL, NULL }
};
static void Dao_gsl_fft_real_wavetable_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_real_wavetable_float_Typer = 
{ "gsl_fft_real_wavetable_float", NULL,
  dao_gsl_fft_real_wavetable_float_Nums,
  dao_gsl_fft_real_wavetable_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_real_wavetable_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_real_wavetable_float_Typer = & gsl_fft_real_wavetable_float_Typer;
DaoType *dao_type_gsl_fft_real_wavetable_float = NULL;
static void dao_gsl_fft_real_wavetable_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable_float *self = (gsl_fft_real_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable_float);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_real_wavetable_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable_float *self = (gsl_fft_real_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable_float);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_real_wavetable_float_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable_float *self = (gsl_fft_real_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable_float);
  DaoProcess_PutInteger( _proc, (daoint) self->nf );
}
static void dao_gsl_fft_real_wavetable_float_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable_float *self = (gsl_fft_real_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable_float);
  self->nf = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_real_wavetable_float_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable_float *self = (gsl_fft_real_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable_float);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->factor, 64 );
}
static void dao_gsl_fft_real_wavetable_float_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable_float *self = (gsl_fft_real_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable_float);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 64 ) size = 64;
  memmove( self->factor, DaoArray_ToSInt( (DaoArray*)_p[1] ), size*sizeof(signed int) );
}
static void dao_gsl_fft_real_wavetable_float_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable_float *self = (gsl_fft_real_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable_float);
  DaoList *list = DaoProcess_PutList( _proc );
  daoint i, n = 64;
  for(i=0; i<n; i++){
    DaoCdata *it = DaoProcess_NewCdata( _proc, dao_type_gsl_complex_float, self->twiddle[i], 0 );
    DaoList_PushBack( list, (DaoValue*) it );
  }
}
static void dao_gsl_fft_real_wavetable_float_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_wavetable_float *self = (gsl_fft_real_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_wavetable_float);
  DaoProcess_WrapCdata( _proc, (void*) self->trig, dao_type_gsl_complex_float );
}
static void dao_gsl_fft_real_wavetable_float_gsl_fft_real_wavetable_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_real_wavetable_float *self = Dao_gsl_fft_real_wavetable_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_real_wavetable_float );
}
/* /usr/local/include/gsl/gsl_fft_real_float.h */


static DaoNumItem dao_gsl_fft_real_workspace_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_real_workspace_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_workspace_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_workspace_float_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_real_workspace_float_gsl_fft_real_workspace_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_real_workspace_float_Meths[] = 
{
  { dao_gsl_fft_real_workspace_float_GETF_n, ".n( self :gsl_fft_real_workspace_float )=>int" },
  { dao_gsl_fft_real_workspace_float_SETF_n, ".n=( self :gsl_fft_real_workspace_float, n :int )" },
  { dao_gsl_fft_real_workspace_float_GETF_scratch, ".scratch( self :gsl_fft_real_workspace_float )=>float" },
  { dao_gsl_fft_real_workspace_float_gsl_fft_real_workspace_float, "gsl_fft_real_workspace_float(  )=>gsl_fft_real_workspace_float" },
  { NULL, NULL }
};
static void Dao_gsl_fft_real_workspace_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_real_workspace_float_Typer = 
{ "gsl_fft_real_workspace_float", NULL,
  dao_gsl_fft_real_workspace_float_Nums,
  dao_gsl_fft_real_workspace_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_real_workspace_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_real_workspace_float_Typer = & gsl_fft_real_workspace_float_Typer;
DaoType *dao_type_gsl_fft_real_workspace_float = NULL;
static void dao_gsl_fft_real_workspace_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_workspace_float *self = (gsl_fft_real_workspace_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_workspace_float);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_real_workspace_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_workspace_float *self = (gsl_fft_real_workspace_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_workspace_float);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_real_workspace_float_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_real_workspace_float *self = (gsl_fft_real_workspace_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_real_workspace_float);
  DaoProcess_PutVectorF( _proc, (float*) self->scratch, 0 );
}
static void dao_gsl_fft_real_workspace_float_gsl_fft_real_workspace_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_real_workspace_float *self = Dao_gsl_fft_real_workspace_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_real_workspace_float );
}
/* /usr/local/include/gsl/gsl_fft_halfcomplex_float.h */


static DaoNumItem dao_gsl_fft_halfcomplex_wavetable_float_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_float_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_float_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_fft_halfcomplex_wavetable_float_gsl_fft_halfcomplex_wavetable_float( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_fft_halfcomplex_wavetable_float_Meths[] = 
{
  { dao_gsl_fft_halfcomplex_wavetable_float_GETF_n, ".n( self :gsl_fft_halfcomplex_wavetable_float )=>int" },
  { dao_gsl_fft_halfcomplex_wavetable_float_SETF_n, ".n=( self :gsl_fft_halfcomplex_wavetable_float, n :int )" },
  { dao_gsl_fft_halfcomplex_wavetable_float_GETF_nf, ".nf( self :gsl_fft_halfcomplex_wavetable_float )=>int" },
  { dao_gsl_fft_halfcomplex_wavetable_float_SETF_nf, ".nf=( self :gsl_fft_halfcomplex_wavetable_float, nf :int )" },
  { dao_gsl_fft_halfcomplex_wavetable_float_GETF_factor, ".factor( self :gsl_fft_halfcomplex_wavetable_float )=>array<int>" },
  { dao_gsl_fft_halfcomplex_wavetable_float_SETF_factor, ".factor=( self :gsl_fft_halfcomplex_wavetable_float, factor :array<int> )" },
  { dao_gsl_fft_halfcomplex_wavetable_float_GETF_twiddle, ".twiddle( self :gsl_fft_halfcomplex_wavetable_float )=>list<gsl_complex_float>" },
  { dao_gsl_fft_halfcomplex_wavetable_float_GETF_trig, ".trig( self :gsl_fft_halfcomplex_wavetable_float )=>gsl_complex_float" },
  { dao_gsl_fft_halfcomplex_wavetable_float_gsl_fft_halfcomplex_wavetable_float, "gsl_fft_halfcomplex_wavetable_float(  )=>gsl_fft_halfcomplex_wavetable_float" },
  { NULL, NULL }
};
static void Dao_gsl_fft_halfcomplex_wavetable_float_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_fft_halfcomplex_wavetable_float_Typer = 
{ "gsl_fft_halfcomplex_wavetable_float", NULL,
  dao_gsl_fft_halfcomplex_wavetable_float_Nums,
  dao_gsl_fft_halfcomplex_wavetable_float_Meths,
  { NULL },
  { NULL },
  Dao_gsl_fft_halfcomplex_wavetable_float_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_fft_halfcomplex_wavetable_float_Typer = & gsl_fft_halfcomplex_wavetable_float_Typer;
DaoType *dao_type_gsl_fft_halfcomplex_wavetable_float = NULL;
static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable_float *self = (gsl_fft_halfcomplex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable_float);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_fft_halfcomplex_wavetable_float_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable_float *self = (gsl_fft_halfcomplex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable_float);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable_float *self = (gsl_fft_halfcomplex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable_float);
  DaoProcess_PutInteger( _proc, (daoint) self->nf );
}
static void dao_gsl_fft_halfcomplex_wavetable_float_SETF_nf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable_float *self = (gsl_fft_halfcomplex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable_float);
  self->nf = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable_float *self = (gsl_fft_halfcomplex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable_float);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->factor, 64 );
}
static void dao_gsl_fft_halfcomplex_wavetable_float_SETF_factor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable_float *self = (gsl_fft_halfcomplex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable_float);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 64 ) size = 64;
  memmove( self->factor, DaoArray_ToSInt( (DaoArray*)_p[1] ), size*sizeof(signed int) );
}
static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_twiddle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable_float *self = (gsl_fft_halfcomplex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable_float);
  DaoList *list = DaoProcess_PutList( _proc );
  daoint i, n = 64;
  for(i=0; i<n; i++){
    DaoCdata *it = DaoProcess_NewCdata( _proc, dao_type_gsl_complex_float, self->twiddle[i], 0 );
    DaoList_PushBack( list, (DaoValue*) it );
  }
}
static void dao_gsl_fft_halfcomplex_wavetable_float_GETF_trig( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_fft_halfcomplex_wavetable_float *self = (gsl_fft_halfcomplex_wavetable_float*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_fft_halfcomplex_wavetable_float);
  DaoProcess_WrapCdata( _proc, (void*) self->trig, dao_type_gsl_complex_float );
}
static void dao_gsl_fft_halfcomplex_wavetable_float_gsl_fft_halfcomplex_wavetable_float( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_fft_halfcomplex_wavetable_float *self = Dao_gsl_fft_halfcomplex_wavetable_float_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_fft_halfcomplex_wavetable_float );
}
/* /usr/local/include/gsl/gsl_permutation.h */


static DaoNumItem dao_gsl_permutation_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_permutation_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_permutation_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_permutation_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_permutation_struct_gsl_permutation_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_permutation_struct_Meths[] = 
{
  { dao_gsl_permutation_struct_GETF_size, ".size( self :gsl_permutation_struct )=>int" },
  { dao_gsl_permutation_struct_SETF_size, ".size=( self :gsl_permutation_struct, size :int )" },
  { dao_gsl_permutation_struct_GETF_data, ".data( self :gsl_permutation_struct )=>int" },
  { dao_gsl_permutation_struct_gsl_permutation_struct, "gsl_permutation_struct(  )=>gsl_permutation_struct" },
  { NULL, NULL }
};
static void Dao_gsl_permutation_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_permutation_struct_Typer = 
{ "gsl_permutation_struct", NULL,
  dao_gsl_permutation_struct_Nums,
  dao_gsl_permutation_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_permutation_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_permutation_struct_Typer = & gsl_permutation_struct_Typer;
DaoType *dao_type_gsl_permutation_struct = NULL;
static void dao_gsl_permutation_struct_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_permutation_struct *self = (struct gsl_permutation_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_permutation_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_permutation_struct_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_permutation_struct *self = (struct gsl_permutation_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_permutation_struct);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_permutation_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_permutation_struct *self = (struct gsl_permutation_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_permutation_struct);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_permutation_struct_gsl_permutation_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_permutation_struct *self = Dao_gsl_permutation_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_permutation_struct );
}
/* /usr/local/include/gsl/gsl_histogram.h */


static DaoNumItem dao_gsl_histogram_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_histogram_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram_GETF_range( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram_GETF_bin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram_gsl_histogram( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_histogram_Meths[] = 
{
  { dao_gsl_histogram_GETF_n, ".n( self :gsl_histogram )=>int" },
  { dao_gsl_histogram_SETF_n, ".n=( self :gsl_histogram, n :int )" },
  { dao_gsl_histogram_GETF_range, ".range( self :gsl_histogram )=>double" },
  { dao_gsl_histogram_GETF_bin, ".bin( self :gsl_histogram )=>double" },
  { dao_gsl_histogram_gsl_histogram, "gsl_histogram(  )=>gsl_histogram" },
  { NULL, NULL }
};
static void Dao_gsl_histogram_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_histogram_Typer = 
{ "gsl_histogram", NULL,
  dao_gsl_histogram_Nums,
  dao_gsl_histogram_Meths,
  { NULL },
  { NULL },
  Dao_gsl_histogram_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_histogram_Typer = & gsl_histogram_Typer;
DaoType *dao_type_gsl_histogram = NULL;
static void dao_gsl_histogram_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram *self = (gsl_histogram*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_histogram_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram *self = (gsl_histogram*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_histogram_GETF_range( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram *self = (gsl_histogram*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram);
  DaoProcess_PutVectorD( _proc, (double*) self->range, 0 );
}
static void dao_gsl_histogram_GETF_bin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram *self = (gsl_histogram*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram);
  DaoProcess_PutVectorD( _proc, (double*) self->bin, 0 );
}
static void dao_gsl_histogram_gsl_histogram( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_histogram *self = Dao_gsl_histogram_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_histogram );
}
/* /usr/local/include/gsl/gsl_histogram.h */


static DaoNumItem dao_gsl_histogram_pdf_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_histogram_pdf_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram_pdf_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram_pdf_GETF_range( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram_pdf_GETF_sum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram_pdf_gsl_histogram_pdf( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_histogram_pdf_Meths[] = 
{
  { dao_gsl_histogram_pdf_GETF_n, ".n( self :gsl_histogram_pdf )=>int" },
  { dao_gsl_histogram_pdf_SETF_n, ".n=( self :gsl_histogram_pdf, n :int )" },
  { dao_gsl_histogram_pdf_GETF_range, ".range( self :gsl_histogram_pdf )=>double" },
  { dao_gsl_histogram_pdf_GETF_sum, ".sum( self :gsl_histogram_pdf )=>double" },
  { dao_gsl_histogram_pdf_gsl_histogram_pdf, "gsl_histogram_pdf(  )=>gsl_histogram_pdf" },
  { NULL, NULL }
};
static void Dao_gsl_histogram_pdf_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_histogram_pdf_Typer = 
{ "gsl_histogram_pdf", NULL,
  dao_gsl_histogram_pdf_Nums,
  dao_gsl_histogram_pdf_Meths,
  { NULL },
  { NULL },
  Dao_gsl_histogram_pdf_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_histogram_pdf_Typer = & gsl_histogram_pdf_Typer;
DaoType *dao_type_gsl_histogram_pdf = NULL;
static void dao_gsl_histogram_pdf_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram_pdf *self = (gsl_histogram_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram_pdf);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_histogram_pdf_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram_pdf *self = (gsl_histogram_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram_pdf);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_histogram_pdf_GETF_range( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram_pdf *self = (gsl_histogram_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram_pdf);
  DaoProcess_PutVectorD( _proc, (double*) self->range, 0 );
}
static void dao_gsl_histogram_pdf_GETF_sum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram_pdf *self = (gsl_histogram_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram_pdf);
  DaoProcess_PutVectorD( _proc, (double*) self->sum, 0 );
}
static void dao_gsl_histogram_pdf_gsl_histogram_pdf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_histogram_pdf *self = Dao_gsl_histogram_pdf_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_histogram_pdf );
}
/* /usr/local/include/gsl/gsl_histogram2d.h */


static DaoNumItem dao_gsl_histogram2d_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_histogram2d_GETF_nx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_SETF_nx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_GETF_ny( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_SETF_ny( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_GETF_xrange( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_GETF_yrange( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_GETF_bin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_gsl_histogram2d( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_histogram2d_Meths[] = 
{
  { dao_gsl_histogram2d_GETF_nx, ".nx( self :gsl_histogram2d )=>int" },
  { dao_gsl_histogram2d_SETF_nx, ".nx=( self :gsl_histogram2d, nx :int )" },
  { dao_gsl_histogram2d_GETF_ny, ".ny( self :gsl_histogram2d )=>int" },
  { dao_gsl_histogram2d_SETF_ny, ".ny=( self :gsl_histogram2d, ny :int )" },
  { dao_gsl_histogram2d_GETF_xrange, ".xrange( self :gsl_histogram2d )=>double" },
  { dao_gsl_histogram2d_GETF_yrange, ".yrange( self :gsl_histogram2d )=>double" },
  { dao_gsl_histogram2d_GETF_bin, ".bin( self :gsl_histogram2d )=>double" },
  { dao_gsl_histogram2d_gsl_histogram2d, "gsl_histogram2d(  )=>gsl_histogram2d" },
  { NULL, NULL }
};
static void Dao_gsl_histogram2d_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_histogram2d_Typer = 
{ "gsl_histogram2d", NULL,
  dao_gsl_histogram2d_Nums,
  dao_gsl_histogram2d_Meths,
  { NULL },
  { NULL },
  Dao_gsl_histogram2d_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_histogram2d_Typer = & gsl_histogram2d_Typer;
DaoType *dao_type_gsl_histogram2d = NULL;
static void dao_gsl_histogram2d_GETF_nx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d *self = (gsl_histogram2d*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d);
  DaoProcess_PutInteger( _proc, (daoint) self->nx );
}
static void dao_gsl_histogram2d_SETF_nx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d *self = (gsl_histogram2d*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d);
  self->nx = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_histogram2d_GETF_ny( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d *self = (gsl_histogram2d*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d);
  DaoProcess_PutInteger( _proc, (daoint) self->ny );
}
static void dao_gsl_histogram2d_SETF_ny( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d *self = (gsl_histogram2d*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d);
  self->ny = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_histogram2d_GETF_xrange( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d *self = (gsl_histogram2d*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d);
  DaoProcess_PutVectorD( _proc, (double*) self->xrange, 0 );
}
static void dao_gsl_histogram2d_GETF_yrange( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d *self = (gsl_histogram2d*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d);
  DaoProcess_PutVectorD( _proc, (double*) self->yrange, 0 );
}
static void dao_gsl_histogram2d_GETF_bin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d *self = (gsl_histogram2d*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d);
  DaoProcess_PutVectorD( _proc, (double*) self->bin, 0 );
}
static void dao_gsl_histogram2d_gsl_histogram2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_histogram2d *self = Dao_gsl_histogram2d_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_histogram2d );
}
/* /usr/local/include/gsl/gsl_histogram2d.h */


static DaoNumItem dao_gsl_histogram2d_pdf_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_histogram2d_pdf_GETF_nx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_pdf_SETF_nx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_pdf_GETF_ny( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_pdf_SETF_ny( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_pdf_GETF_xrange( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_pdf_GETF_yrange( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_pdf_GETF_sum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_histogram2d_pdf_gsl_histogram2d_pdf( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_histogram2d_pdf_Meths[] = 
{
  { dao_gsl_histogram2d_pdf_GETF_nx, ".nx( self :gsl_histogram2d_pdf )=>int" },
  { dao_gsl_histogram2d_pdf_SETF_nx, ".nx=( self :gsl_histogram2d_pdf, nx :int )" },
  { dao_gsl_histogram2d_pdf_GETF_ny, ".ny( self :gsl_histogram2d_pdf )=>int" },
  { dao_gsl_histogram2d_pdf_SETF_ny, ".ny=( self :gsl_histogram2d_pdf, ny :int )" },
  { dao_gsl_histogram2d_pdf_GETF_xrange, ".xrange( self :gsl_histogram2d_pdf )=>double" },
  { dao_gsl_histogram2d_pdf_GETF_yrange, ".yrange( self :gsl_histogram2d_pdf )=>double" },
  { dao_gsl_histogram2d_pdf_GETF_sum, ".sum( self :gsl_histogram2d_pdf )=>double" },
  { dao_gsl_histogram2d_pdf_gsl_histogram2d_pdf, "gsl_histogram2d_pdf(  )=>gsl_histogram2d_pdf" },
  { NULL, NULL }
};
static void Dao_gsl_histogram2d_pdf_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_histogram2d_pdf_Typer = 
{ "gsl_histogram2d_pdf", NULL,
  dao_gsl_histogram2d_pdf_Nums,
  dao_gsl_histogram2d_pdf_Meths,
  { NULL },
  { NULL },
  Dao_gsl_histogram2d_pdf_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_histogram2d_pdf_Typer = & gsl_histogram2d_pdf_Typer;
DaoType *dao_type_gsl_histogram2d_pdf = NULL;
static void dao_gsl_histogram2d_pdf_GETF_nx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d_pdf *self = (gsl_histogram2d_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d_pdf);
  DaoProcess_PutInteger( _proc, (daoint) self->nx );
}
static void dao_gsl_histogram2d_pdf_SETF_nx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d_pdf *self = (gsl_histogram2d_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d_pdf);
  self->nx = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_histogram2d_pdf_GETF_ny( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d_pdf *self = (gsl_histogram2d_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d_pdf);
  DaoProcess_PutInteger( _proc, (daoint) self->ny );
}
static void dao_gsl_histogram2d_pdf_SETF_ny( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d_pdf *self = (gsl_histogram2d_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d_pdf);
  self->ny = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_histogram2d_pdf_GETF_xrange( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d_pdf *self = (gsl_histogram2d_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d_pdf);
  DaoProcess_PutVectorD( _proc, (double*) self->xrange, 0 );
}
static void dao_gsl_histogram2d_pdf_GETF_yrange( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d_pdf *self = (gsl_histogram2d_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d_pdf);
  DaoProcess_PutVectorD( _proc, (double*) self->yrange, 0 );
}
static void dao_gsl_histogram2d_pdf_GETF_sum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_histogram2d_pdf *self = (gsl_histogram2d_pdf*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_histogram2d_pdf);
  DaoProcess_PutVectorD( _proc, (double*) self->sum, 0 );
}
static void dao_gsl_histogram2d_pdf_gsl_histogram2d_pdf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_histogram2d_pdf *self = Dao_gsl_histogram2d_pdf_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_histogram2d_pdf );
}
/* /usr/local/include/gsl/gsl_ieee_utils.h */


static DaoNumItem dao_gsl_ieee_float_rep_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_ieee_float_rep_GETF_sign( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_float_rep_SETF_sign( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_float_rep_GETF_mantissa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_float_rep_SETF_mantissa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_float_rep_GETF_exponent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_float_rep_SETF_exponent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_float_rep_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_float_rep_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_float_rep_gsl_ieee_float_rep( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_ieee_float_rep_Meths[] = 
{
  { dao_gsl_ieee_float_rep_GETF_sign, ".sign( self :gsl_ieee_float_rep )=>int" },
  { dao_gsl_ieee_float_rep_SETF_sign, ".sign=( self :gsl_ieee_float_rep, sign :int )" },
  { dao_gsl_ieee_float_rep_GETF_mantissa, ".mantissa( self :gsl_ieee_float_rep )=>array<int>" },
  { dao_gsl_ieee_float_rep_SETF_mantissa, ".mantissa=( self :gsl_ieee_float_rep, mantissa :array<int> )" },
  { dao_gsl_ieee_float_rep_GETF_exponent, ".exponent( self :gsl_ieee_float_rep )=>int" },
  { dao_gsl_ieee_float_rep_SETF_exponent, ".exponent=( self :gsl_ieee_float_rep, exponent :int )" },
  { dao_gsl_ieee_float_rep_GETF_type, ".type( self :gsl_ieee_float_rep )=>int" },
  { dao_gsl_ieee_float_rep_SETF_type, ".type=( self :gsl_ieee_float_rep, type :int )" },
  { dao_gsl_ieee_float_rep_gsl_ieee_float_rep, "gsl_ieee_float_rep(  )=>gsl_ieee_float_rep" },
  { NULL, NULL }
};
static void Dao_gsl_ieee_float_rep_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_ieee_float_rep_Typer = 
{ "gsl_ieee_float_rep", NULL,
  dao_gsl_ieee_float_rep_Nums,
  dao_gsl_ieee_float_rep_Meths,
  { NULL },
  { NULL },
  Dao_gsl_ieee_float_rep_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_ieee_float_rep_Typer = & gsl_ieee_float_rep_Typer;
DaoType *dao_type_gsl_ieee_float_rep = NULL;
static void dao_gsl_ieee_float_rep_GETF_sign( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_float_rep *self = (gsl_ieee_float_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_float_rep);
  DaoProcess_PutInteger( _proc, (daoint) self->sign );
}
static void dao_gsl_ieee_float_rep_SETF_sign( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_float_rep *self = (gsl_ieee_float_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_float_rep);
  self->sign = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_ieee_float_rep_GETF_mantissa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_float_rep *self = (gsl_ieee_float_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_float_rep);
  DaoProcess_PutBytes( _proc, (char*) self->mantissa, 24 );
}
static void dao_gsl_ieee_float_rep_SETF_mantissa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_float_rep *self = (gsl_ieee_float_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_float_rep);
  int size = DaoString_Size( (DaoString*)_p[1] );
  if( size > 24 ) size = 24;
  memmove( self->mantissa, DaoValue_TryGetMBString( _p[1] ), size );
}
static void dao_gsl_ieee_float_rep_GETF_exponent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_float_rep *self = (gsl_ieee_float_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_float_rep);
  DaoProcess_PutInteger( _proc, (daoint) self->exponent );
}
static void dao_gsl_ieee_float_rep_SETF_exponent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_float_rep *self = (gsl_ieee_float_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_float_rep);
  self->exponent = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_ieee_float_rep_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_float_rep *self = (gsl_ieee_float_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_float_rep);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_gsl_ieee_float_rep_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_float_rep *self = (gsl_ieee_float_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_float_rep);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_ieee_float_rep_gsl_ieee_float_rep( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_ieee_float_rep *self = Dao_gsl_ieee_float_rep_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_ieee_float_rep );
}
/* /usr/local/include/gsl/gsl_ieee_utils.h */


static DaoNumItem dao_gsl_ieee_double_rep_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_ieee_double_rep_GETF_sign( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_double_rep_SETF_sign( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_double_rep_GETF_mantissa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_double_rep_SETF_mantissa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_double_rep_GETF_exponent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_double_rep_SETF_exponent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_double_rep_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_double_rep_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ieee_double_rep_gsl_ieee_double_rep( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_ieee_double_rep_Meths[] = 
{
  { dao_gsl_ieee_double_rep_GETF_sign, ".sign( self :gsl_ieee_double_rep )=>int" },
  { dao_gsl_ieee_double_rep_SETF_sign, ".sign=( self :gsl_ieee_double_rep, sign :int )" },
  { dao_gsl_ieee_double_rep_GETF_mantissa, ".mantissa( self :gsl_ieee_double_rep )=>array<int>" },
  { dao_gsl_ieee_double_rep_SETF_mantissa, ".mantissa=( self :gsl_ieee_double_rep, mantissa :array<int> )" },
  { dao_gsl_ieee_double_rep_GETF_exponent, ".exponent( self :gsl_ieee_double_rep )=>int" },
  { dao_gsl_ieee_double_rep_SETF_exponent, ".exponent=( self :gsl_ieee_double_rep, exponent :int )" },
  { dao_gsl_ieee_double_rep_GETF_type, ".type( self :gsl_ieee_double_rep )=>int" },
  { dao_gsl_ieee_double_rep_SETF_type, ".type=( self :gsl_ieee_double_rep, type :int )" },
  { dao_gsl_ieee_double_rep_gsl_ieee_double_rep, "gsl_ieee_double_rep(  )=>gsl_ieee_double_rep" },
  { NULL, NULL }
};
static void Dao_gsl_ieee_double_rep_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_ieee_double_rep_Typer = 
{ "gsl_ieee_double_rep", NULL,
  dao_gsl_ieee_double_rep_Nums,
  dao_gsl_ieee_double_rep_Meths,
  { NULL },
  { NULL },
  Dao_gsl_ieee_double_rep_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_ieee_double_rep_Typer = & gsl_ieee_double_rep_Typer;
DaoType *dao_type_gsl_ieee_double_rep = NULL;
static void dao_gsl_ieee_double_rep_GETF_sign( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_double_rep *self = (gsl_ieee_double_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_double_rep);
  DaoProcess_PutInteger( _proc, (daoint) self->sign );
}
static void dao_gsl_ieee_double_rep_SETF_sign( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_double_rep *self = (gsl_ieee_double_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_double_rep);
  self->sign = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_ieee_double_rep_GETF_mantissa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_double_rep *self = (gsl_ieee_double_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_double_rep);
  DaoProcess_PutBytes( _proc, (char*) self->mantissa, 53 );
}
static void dao_gsl_ieee_double_rep_SETF_mantissa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_double_rep *self = (gsl_ieee_double_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_double_rep);
  int size = DaoString_Size( (DaoString*)_p[1] );
  if( size > 53 ) size = 53;
  memmove( self->mantissa, DaoValue_TryGetMBString( _p[1] ), size );
}
static void dao_gsl_ieee_double_rep_GETF_exponent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_double_rep *self = (gsl_ieee_double_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_double_rep);
  DaoProcess_PutInteger( _proc, (daoint) self->exponent );
}
static void dao_gsl_ieee_double_rep_SETF_exponent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_double_rep *self = (gsl_ieee_double_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_double_rep);
  self->exponent = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_ieee_double_rep_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_double_rep *self = (gsl_ieee_double_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_double_rep);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_gsl_ieee_double_rep_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ieee_double_rep *self = (gsl_ieee_double_rep*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ieee_double_rep);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_ieee_double_rep_gsl_ieee_double_rep( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_ieee_double_rep *self = Dao_gsl_ieee_double_rep_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_ieee_double_rep );
}
/* /usr/local/include/gsl/gsl_integration.h */


static DaoNumItem dao_gsl_integration_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_integration_workspace_GETF_limit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_SETF_limit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_nrmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_SETF_nrmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_SETF_i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_maximum_level( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_SETF_maximum_level( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_alist( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_blist( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_rlist( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_elist( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_order( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_GETF_level( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_workspace_gsl_integration_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_integration_workspace_Meths[] = 
{
  { dao_gsl_integration_workspace_GETF_limit, ".limit( self :gsl_integration_workspace )=>int" },
  { dao_gsl_integration_workspace_SETF_limit, ".limit=( self :gsl_integration_workspace, limit :int )" },
  { dao_gsl_integration_workspace_GETF_size, ".size( self :gsl_integration_workspace )=>int" },
  { dao_gsl_integration_workspace_SETF_size, ".size=( self :gsl_integration_workspace, size :int )" },
  { dao_gsl_integration_workspace_GETF_nrmax, ".nrmax( self :gsl_integration_workspace )=>int" },
  { dao_gsl_integration_workspace_SETF_nrmax, ".nrmax=( self :gsl_integration_workspace, nrmax :int )" },
  { dao_gsl_integration_workspace_GETF_i, ".i( self :gsl_integration_workspace )=>int" },
  { dao_gsl_integration_workspace_SETF_i, ".i=( self :gsl_integration_workspace, i :int )" },
  { dao_gsl_integration_workspace_GETF_maximum_level, ".maximum_level( self :gsl_integration_workspace )=>int" },
  { dao_gsl_integration_workspace_SETF_maximum_level, ".maximum_level=( self :gsl_integration_workspace, maximum_level :int )" },
  { dao_gsl_integration_workspace_GETF_alist, ".alist( self :gsl_integration_workspace )=>double" },
  { dao_gsl_integration_workspace_GETF_blist, ".blist( self :gsl_integration_workspace )=>double" },
  { dao_gsl_integration_workspace_GETF_rlist, ".rlist( self :gsl_integration_workspace )=>double" },
  { dao_gsl_integration_workspace_GETF_elist, ".elist( self :gsl_integration_workspace )=>double" },
  { dao_gsl_integration_workspace_GETF_order, ".order( self :gsl_integration_workspace )=>int" },
  { dao_gsl_integration_workspace_GETF_level, ".level( self :gsl_integration_workspace )=>int" },
  { dao_gsl_integration_workspace_gsl_integration_workspace, "gsl_integration_workspace(  )=>gsl_integration_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_integration_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_integration_workspace_Typer = 
{ "gsl_integration_workspace", NULL,
  dao_gsl_integration_workspace_Nums,
  dao_gsl_integration_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_integration_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_integration_workspace_Typer = & gsl_integration_workspace_Typer;
DaoType *dao_type_gsl_integration_workspace = NULL;
static void dao_gsl_integration_workspace_GETF_limit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->limit );
}
static void dao_gsl_integration_workspace_SETF_limit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  self->limit = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_integration_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_workspace_GETF_nrmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->nrmax );
}
static void dao_gsl_integration_workspace_SETF_nrmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  self->nrmax = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_workspace_GETF_i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->i );
}
static void dao_gsl_integration_workspace_SETF_i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  self->i = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_workspace_GETF_maximum_level( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->maximum_level );
}
static void dao_gsl_integration_workspace_SETF_maximum_level( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  self->maximum_level = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_workspace_GETF_alist( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->alist, 0 );
}
static void dao_gsl_integration_workspace_GETF_blist( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->blist, 0 );
}
static void dao_gsl_integration_workspace_GETF_rlist( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->rlist, 0 );
}
static void dao_gsl_integration_workspace_GETF_elist( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->elist, 0 );
}
static void dao_gsl_integration_workspace_GETF_order( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->order, 0 );
}
static void dao_gsl_integration_workspace_GETF_level( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_workspace *self = (gsl_integration_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_workspace);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->level, 0 );
}
static void dao_gsl_integration_workspace_gsl_integration_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_integration_workspace *self = Dao_gsl_integration_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_integration_workspace );
}
/* /usr/local/include/gsl/gsl_integration.h */


static DaoNumItem dao_gsl_integration_qaws_table_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_integration_qaws_table_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_GETF_beta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_SETF_beta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_GETF_mu( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_SETF_mu( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_GETF_nu( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_SETF_nu( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_GETF_ri( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_SETF_ri( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_GETF_rj( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_SETF_rj( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_GETF_rg( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_SETF_rg( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_GETF_rh( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_SETF_rh( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qaws_table_gsl_integration_qaws_table( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_integration_qaws_table_Meths[] = 
{
  { dao_gsl_integration_qaws_table_GETF_alpha, ".alpha( self :gsl_integration_qaws_table )=>double" },
  { dao_gsl_integration_qaws_table_SETF_alpha, ".alpha=( self :gsl_integration_qaws_table, alpha :double )" },
  { dao_gsl_integration_qaws_table_GETF_beta, ".beta( self :gsl_integration_qaws_table )=>double" },
  { dao_gsl_integration_qaws_table_SETF_beta, ".beta=( self :gsl_integration_qaws_table, beta :double )" },
  { dao_gsl_integration_qaws_table_GETF_mu, ".mu( self :gsl_integration_qaws_table )=>int" },
  { dao_gsl_integration_qaws_table_SETF_mu, ".mu=( self :gsl_integration_qaws_table, mu :int )" },
  { dao_gsl_integration_qaws_table_GETF_nu, ".nu( self :gsl_integration_qaws_table )=>int" },
  { dao_gsl_integration_qaws_table_SETF_nu, ".nu=( self :gsl_integration_qaws_table, nu :int )" },
  { dao_gsl_integration_qaws_table_GETF_ri, ".ri( self :gsl_integration_qaws_table )=>array<double>" },
  { dao_gsl_integration_qaws_table_SETF_ri, ".ri=( self :gsl_integration_qaws_table, ri :array<double> )" },
  { dao_gsl_integration_qaws_table_GETF_rj, ".rj( self :gsl_integration_qaws_table )=>array<double>" },
  { dao_gsl_integration_qaws_table_SETF_rj, ".rj=( self :gsl_integration_qaws_table, rj :array<double> )" },
  { dao_gsl_integration_qaws_table_GETF_rg, ".rg( self :gsl_integration_qaws_table )=>array<double>" },
  { dao_gsl_integration_qaws_table_SETF_rg, ".rg=( self :gsl_integration_qaws_table, rg :array<double> )" },
  { dao_gsl_integration_qaws_table_GETF_rh, ".rh( self :gsl_integration_qaws_table )=>array<double>" },
  { dao_gsl_integration_qaws_table_SETF_rh, ".rh=( self :gsl_integration_qaws_table, rh :array<double> )" },
  { dao_gsl_integration_qaws_table_gsl_integration_qaws_table, "gsl_integration_qaws_table(  )=>gsl_integration_qaws_table" },
  { NULL, NULL }
};
static void Dao_gsl_integration_qaws_table_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_integration_qaws_table_Typer = 
{ "gsl_integration_qaws_table", NULL,
  dao_gsl_integration_qaws_table_Nums,
  dao_gsl_integration_qaws_table_Meths,
  { NULL },
  { NULL },
  Dao_gsl_integration_qaws_table_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_integration_qaws_table_Typer = & gsl_integration_qaws_table_Typer;
DaoType *dao_type_gsl_integration_qaws_table = NULL;
static void dao_gsl_integration_qaws_table_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  DaoProcess_PutDouble( _proc, (double) self->alpha );
}
static void dao_gsl_integration_qaws_table_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  self->alpha = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_integration_qaws_table_GETF_beta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  DaoProcess_PutDouble( _proc, (double) self->beta );
}
static void dao_gsl_integration_qaws_table_SETF_beta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  self->beta = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_integration_qaws_table_GETF_mu( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  DaoProcess_PutInteger( _proc, (daoint) self->mu );
}
static void dao_gsl_integration_qaws_table_SETF_mu( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  self->mu = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_qaws_table_GETF_nu( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  DaoProcess_PutInteger( _proc, (daoint) self->nu );
}
static void dao_gsl_integration_qaws_table_SETF_nu( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  self->nu = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_qaws_table_GETF_ri( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  DaoProcess_PutVectorD( _proc, (double*) self->ri, 25 );
}
static void dao_gsl_integration_qaws_table_SETF_ri( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 25 ) size = 25;
  memmove( self->ri, DaoArray_ToDouble( (DaoArray*)_p[1] ), size*sizeof(double) );
}
static void dao_gsl_integration_qaws_table_GETF_rj( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  DaoProcess_PutVectorD( _proc, (double*) self->rj, 25 );
}
static void dao_gsl_integration_qaws_table_SETF_rj( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 25 ) size = 25;
  memmove( self->rj, DaoArray_ToDouble( (DaoArray*)_p[1] ), size*sizeof(double) );
}
static void dao_gsl_integration_qaws_table_GETF_rg( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  DaoProcess_PutVectorD( _proc, (double*) self->rg, 25 );
}
static void dao_gsl_integration_qaws_table_SETF_rg( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 25 ) size = 25;
  memmove( self->rg, DaoArray_ToDouble( (DaoArray*)_p[1] ), size*sizeof(double) );
}
static void dao_gsl_integration_qaws_table_GETF_rh( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  DaoProcess_PutVectorD( _proc, (double*) self->rh, 25 );
}
static void dao_gsl_integration_qaws_table_SETF_rh( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qaws_table *self = (gsl_integration_qaws_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qaws_table);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 25 ) size = 25;
  memmove( self->rh, DaoArray_ToDouble( (DaoArray*)_p[1] ), size*sizeof(double) );
}
static void dao_gsl_integration_qaws_table_gsl_integration_qaws_table( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_integration_qaws_table *self = Dao_gsl_integration_qaws_table_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_integration_qaws_table );
}
/* /usr/local/include/gsl/gsl_integration.h */


static DaoNumItem dao_gsl_integration_qawo_table_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_integration_qawo_table_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_GETF_omega( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_SETF_omega( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_GETF_L( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_SETF_L( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_GETF_par( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_SETF_par( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_GETF_sine( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_SETF_sine( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_GETF_chebmo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_qawo_table_gsl_integration_qawo_table( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_integration_qawo_table_Meths[] = 
{
  { dao_gsl_integration_qawo_table_GETF_n, ".n( self :gsl_integration_qawo_table )=>int" },
  { dao_gsl_integration_qawo_table_SETF_n, ".n=( self :gsl_integration_qawo_table, n :int )" },
  { dao_gsl_integration_qawo_table_GETF_omega, ".omega( self :gsl_integration_qawo_table )=>double" },
  { dao_gsl_integration_qawo_table_SETF_omega, ".omega=( self :gsl_integration_qawo_table, omega :double )" },
  { dao_gsl_integration_qawo_table_GETF_L, ".L( self :gsl_integration_qawo_table )=>double" },
  { dao_gsl_integration_qawo_table_SETF_L, ".L=( self :gsl_integration_qawo_table, L :double )" },
  { dao_gsl_integration_qawo_table_GETF_par, ".par( self :gsl_integration_qawo_table )=>double" },
  { dao_gsl_integration_qawo_table_SETF_par, ".par=( self :gsl_integration_qawo_table, par :double )" },
  { dao_gsl_integration_qawo_table_GETF_sine, ".sine( self :gsl_integration_qawo_table )=>int" },
  { dao_gsl_integration_qawo_table_SETF_sine, ".sine=( self :gsl_integration_qawo_table, sine :int )" },
  { dao_gsl_integration_qawo_table_GETF_chebmo, ".chebmo( self :gsl_integration_qawo_table )=>double" },
  { dao_gsl_integration_qawo_table_gsl_integration_qawo_table, "gsl_integration_qawo_table(  )=>gsl_integration_qawo_table" },
  { NULL, NULL }
};
static void Dao_gsl_integration_qawo_table_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_integration_qawo_table_Typer = 
{ "gsl_integration_qawo_table", NULL,
  dao_gsl_integration_qawo_table_Nums,
  dao_gsl_integration_qawo_table_Meths,
  { NULL },
  { NULL },
  Dao_gsl_integration_qawo_table_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_integration_qawo_table_Typer = & gsl_integration_qawo_table_Typer;
DaoType *dao_type_gsl_integration_qawo_table = NULL;
static void dao_gsl_integration_qawo_table_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_integration_qawo_table_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_qawo_table_GETF_omega( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  DaoProcess_PutDouble( _proc, (double) self->omega );
}
static void dao_gsl_integration_qawo_table_SETF_omega( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  self->omega = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_integration_qawo_table_GETF_L( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  DaoProcess_PutDouble( _proc, (double) self->L );
}
static void dao_gsl_integration_qawo_table_SETF_L( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  self->L = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_integration_qawo_table_GETF_par( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  DaoProcess_PutDouble( _proc, (double) self->par );
}
static void dao_gsl_integration_qawo_table_SETF_par( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  self->par = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_integration_qawo_table_GETF_sine( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  DaoProcess_PutInteger( _proc, (daoint) self->sine );
}
static void dao_gsl_integration_qawo_table_SETF_sine( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  self->sine = (enum gsl_integration_qawo_enum) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_qawo_table_GETF_chebmo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_qawo_table *self = (gsl_integration_qawo_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_qawo_table);
  DaoProcess_PutVectorD( _proc, (double*) self->chebmo, 0 );
}
static void dao_gsl_integration_qawo_table_gsl_integration_qawo_table( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_integration_qawo_table *self = Dao_gsl_integration_qawo_table_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_integration_qawo_table );
}
/* /usr/local/include/gsl/gsl_integration.h */


static DaoNumItem dao_gsl_integration_glfixed_table_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_integration_glfixed_table_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_glfixed_table_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_glfixed_table_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_glfixed_table_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_glfixed_table_GETF_precomputed( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_glfixed_table_SETF_precomputed( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_glfixed_table_gsl_integration_glfixed_table( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_integration_glfixed_table_Meths[] = 
{
  { dao_gsl_integration_glfixed_table_GETF_n, ".n( self :gsl_integration_glfixed_table )=>int" },
  { dao_gsl_integration_glfixed_table_SETF_n, ".n=( self :gsl_integration_glfixed_table, n :int )" },
  { dao_gsl_integration_glfixed_table_GETF_x, ".x( self :gsl_integration_glfixed_table )=>double" },
  { dao_gsl_integration_glfixed_table_GETF_w, ".w( self :gsl_integration_glfixed_table )=>double" },
  { dao_gsl_integration_glfixed_table_GETF_precomputed, ".precomputed( self :gsl_integration_glfixed_table )=>int" },
  { dao_gsl_integration_glfixed_table_SETF_precomputed, ".precomputed=( self :gsl_integration_glfixed_table, precomputed :int )" },
  { dao_gsl_integration_glfixed_table_gsl_integration_glfixed_table, "gsl_integration_glfixed_table(  )=>gsl_integration_glfixed_table" },
  { NULL, NULL }
};
static void Dao_gsl_integration_glfixed_table_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_integration_glfixed_table_Typer = 
{ "gsl_integration_glfixed_table", NULL,
  dao_gsl_integration_glfixed_table_Nums,
  dao_gsl_integration_glfixed_table_Meths,
  { NULL },
  { NULL },
  Dao_gsl_integration_glfixed_table_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_integration_glfixed_table_Typer = & gsl_integration_glfixed_table_Typer;
DaoType *dao_type_gsl_integration_glfixed_table = NULL;
static void dao_gsl_integration_glfixed_table_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_glfixed_table *self = (gsl_integration_glfixed_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_glfixed_table);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_integration_glfixed_table_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_glfixed_table *self = (gsl_integration_glfixed_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_glfixed_table);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_glfixed_table_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_glfixed_table *self = (gsl_integration_glfixed_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_glfixed_table);
  DaoProcess_PutVectorD( _proc, (double*) self->x, 0 );
}
static void dao_gsl_integration_glfixed_table_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_glfixed_table *self = (gsl_integration_glfixed_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_glfixed_table);
  DaoProcess_PutVectorD( _proc, (double*) self->w, 0 );
}
static void dao_gsl_integration_glfixed_table_GETF_precomputed( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_glfixed_table *self = (gsl_integration_glfixed_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_glfixed_table);
  DaoProcess_PutInteger( _proc, (daoint) self->precomputed );
}
static void dao_gsl_integration_glfixed_table_SETF_precomputed( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_glfixed_table *self = (gsl_integration_glfixed_table*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_glfixed_table);
  self->precomputed = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_glfixed_table_gsl_integration_glfixed_table( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_integration_glfixed_table *self = Dao_gsl_integration_glfixed_table_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_integration_glfixed_table );
}
/* /usr/local/include/gsl/gsl_integration.h */


static DaoNumItem dao_gsl_integration_cquad_ival_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_integration_cquad_ival_GETF_a( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_SETF_a( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_GETF_c( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_SETF_c( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_GETF_fx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_SETF_fx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_GETF_igral( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_SETF_igral( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_GETF_err( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_SETF_err( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_GETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_SETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_GETF_rdepth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_SETF_rdepth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_GETF_ndiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_SETF_ndiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_ival_gsl_integration_cquad_ival( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_integration_cquad_ival_Meths[] = 
{
  { dao_gsl_integration_cquad_ival_GETF_a, ".a( self :gsl_integration_cquad_ival )=>double" },
  { dao_gsl_integration_cquad_ival_SETF_a, ".a=( self :gsl_integration_cquad_ival, a :double )" },
  { dao_gsl_integration_cquad_ival_GETF_b, ".b( self :gsl_integration_cquad_ival )=>double" },
  { dao_gsl_integration_cquad_ival_SETF_b, ".b=( self :gsl_integration_cquad_ival, b :double )" },
  { dao_gsl_integration_cquad_ival_GETF_c, ".c( self :gsl_integration_cquad_ival )=>array<double>" },
  { dao_gsl_integration_cquad_ival_SETF_c, ".c=( self :gsl_integration_cquad_ival, c :array<double> )" },
  { dao_gsl_integration_cquad_ival_GETF_fx, ".fx( self :gsl_integration_cquad_ival )=>array<double>" },
  { dao_gsl_integration_cquad_ival_SETF_fx, ".fx=( self :gsl_integration_cquad_ival, fx :array<double> )" },
  { dao_gsl_integration_cquad_ival_GETF_igral, ".igral( self :gsl_integration_cquad_ival )=>double" },
  { dao_gsl_integration_cquad_ival_SETF_igral, ".igral=( self :gsl_integration_cquad_ival, igral :double )" },
  { dao_gsl_integration_cquad_ival_GETF_err, ".err( self :gsl_integration_cquad_ival )=>double" },
  { dao_gsl_integration_cquad_ival_SETF_err, ".err=( self :gsl_integration_cquad_ival, err :double )" },
  { dao_gsl_integration_cquad_ival_GETF_depth, ".depth( self :gsl_integration_cquad_ival )=>int" },
  { dao_gsl_integration_cquad_ival_SETF_depth, ".depth=( self :gsl_integration_cquad_ival, depth :int )" },
  { dao_gsl_integration_cquad_ival_GETF_rdepth, ".rdepth( self :gsl_integration_cquad_ival )=>int" },
  { dao_gsl_integration_cquad_ival_SETF_rdepth, ".rdepth=( self :gsl_integration_cquad_ival, rdepth :int )" },
  { dao_gsl_integration_cquad_ival_GETF_ndiv, ".ndiv( self :gsl_integration_cquad_ival )=>int" },
  { dao_gsl_integration_cquad_ival_SETF_ndiv, ".ndiv=( self :gsl_integration_cquad_ival, ndiv :int )" },
  { dao_gsl_integration_cquad_ival_gsl_integration_cquad_ival, "gsl_integration_cquad_ival(  )=>gsl_integration_cquad_ival" },
  { NULL, NULL }
};
static void Dao_gsl_integration_cquad_ival_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_integration_cquad_ival_Typer = 
{ "gsl_integration_cquad_ival", NULL,
  dao_gsl_integration_cquad_ival_Nums,
  dao_gsl_integration_cquad_ival_Meths,
  { NULL },
  { NULL },
  Dao_gsl_integration_cquad_ival_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_integration_cquad_ival_Typer = & gsl_integration_cquad_ival_Typer;
DaoType *dao_type_gsl_integration_cquad_ival = NULL;
static void dao_gsl_integration_cquad_ival_GETF_a( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  DaoProcess_PutDouble( _proc, (double) self->a );
}
static void dao_gsl_integration_cquad_ival_SETF_a( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  self->a = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_integration_cquad_ival_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  DaoProcess_PutDouble( _proc, (double) self->b );
}
static void dao_gsl_integration_cquad_ival_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  self->b = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_integration_cquad_ival_GETF_c( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  DaoProcess_PutVectorD( _proc, (double*) self->c, 64 );
}
static void dao_gsl_integration_cquad_ival_SETF_c( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 64 ) size = 64;
  memmove( self->c, DaoArray_ToDouble( (DaoArray*)_p[1] ), size*sizeof(double) );
}
static void dao_gsl_integration_cquad_ival_GETF_fx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  DaoProcess_PutVectorD( _proc, (double*) self->fx, 33 );
}
static void dao_gsl_integration_cquad_ival_SETF_fx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 33 ) size = 33;
  memmove( self->fx, DaoArray_ToDouble( (DaoArray*)_p[1] ), size*sizeof(double) );
}
static void dao_gsl_integration_cquad_ival_GETF_igral( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  DaoProcess_PutDouble( _proc, (double) self->igral );
}
static void dao_gsl_integration_cquad_ival_SETF_igral( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  self->igral = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_integration_cquad_ival_GETF_err( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  DaoProcess_PutDouble( _proc, (double) self->err );
}
static void dao_gsl_integration_cquad_ival_SETF_err( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  self->err = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_integration_cquad_ival_GETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  DaoProcess_PutInteger( _proc, (daoint) self->depth );
}
static void dao_gsl_integration_cquad_ival_SETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  self->depth = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_cquad_ival_GETF_rdepth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  DaoProcess_PutInteger( _proc, (daoint) self->rdepth );
}
static void dao_gsl_integration_cquad_ival_SETF_rdepth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  self->rdepth = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_cquad_ival_GETF_ndiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  DaoProcess_PutInteger( _proc, (daoint) self->ndiv );
}
static void dao_gsl_integration_cquad_ival_SETF_ndiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_ival *self = (gsl_integration_cquad_ival*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_ival);
  self->ndiv = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_cquad_ival_gsl_integration_cquad_ival( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_integration_cquad_ival *self = Dao_gsl_integration_cquad_ival_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_integration_cquad_ival );
}
/* /usr/local/include/gsl/gsl_integration.h */


static DaoNumItem dao_gsl_integration_cquad_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_integration_cquad_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_workspace_GETF_ivals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_workspace_GETF_heap( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_integration_cquad_workspace_gsl_integration_cquad_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_integration_cquad_workspace_Meths[] = 
{
  { dao_gsl_integration_cquad_workspace_GETF_size, ".size( self :gsl_integration_cquad_workspace )=>int" },
  { dao_gsl_integration_cquad_workspace_SETF_size, ".size=( self :gsl_integration_cquad_workspace, size :int )" },
  { dao_gsl_integration_cquad_workspace_GETF_ivals, ".ivals( self :gsl_integration_cquad_workspace )=>gsl_integration_cquad_ival" },
  { dao_gsl_integration_cquad_workspace_GETF_heap, ".heap( self :gsl_integration_cquad_workspace )=>int" },
  { dao_gsl_integration_cquad_workspace_gsl_integration_cquad_workspace, "gsl_integration_cquad_workspace(  )=>gsl_integration_cquad_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_integration_cquad_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_integration_cquad_workspace_Typer = 
{ "gsl_integration_cquad_workspace", NULL,
  dao_gsl_integration_cquad_workspace_Nums,
  dao_gsl_integration_cquad_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_integration_cquad_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_integration_cquad_workspace_Typer = & gsl_integration_cquad_workspace_Typer;
DaoType *dao_type_gsl_integration_cquad_workspace = NULL;
static void dao_gsl_integration_cquad_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_workspace *self = (gsl_integration_cquad_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_integration_cquad_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_workspace *self = (gsl_integration_cquad_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_integration_cquad_workspace_GETF_ivals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_workspace *self = (gsl_integration_cquad_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->ivals, dao_type_gsl_integration_cquad_ival );
}
static void dao_gsl_integration_cquad_workspace_GETF_heap( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_integration_cquad_workspace *self = (gsl_integration_cquad_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_integration_cquad_workspace);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->heap, 0 );
}
static void dao_gsl_integration_cquad_workspace_gsl_integration_cquad_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_integration_cquad_workspace *self = Dao_gsl_integration_cquad_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_integration_cquad_workspace );
}
/* /usr/local/include/gsl/gsl_interp.h */


static DaoNumItem dao_gsl_interp_accel_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_interp_accel_GETF_cache( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_accel_SETF_cache( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_accel_GETF_miss_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_accel_SETF_miss_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_accel_GETF_hit_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_accel_SETF_hit_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_accel_gsl_interp_accel( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_interp_accel_Meths[] = 
{
  { dao_gsl_interp_accel_GETF_cache, ".cache( self :gsl_interp_accel )=>int" },
  { dao_gsl_interp_accel_SETF_cache, ".cache=( self :gsl_interp_accel, cache :int )" },
  { dao_gsl_interp_accel_GETF_miss_count, ".miss_count( self :gsl_interp_accel )=>int" },
  { dao_gsl_interp_accel_SETF_miss_count, ".miss_count=( self :gsl_interp_accel, miss_count :int )" },
  { dao_gsl_interp_accel_GETF_hit_count, ".hit_count( self :gsl_interp_accel )=>int" },
  { dao_gsl_interp_accel_SETF_hit_count, ".hit_count=( self :gsl_interp_accel, hit_count :int )" },
  { dao_gsl_interp_accel_gsl_interp_accel, "gsl_interp_accel(  )=>gsl_interp_accel" },
  { NULL, NULL }
};
static void Dao_gsl_interp_accel_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_interp_accel_Typer = 
{ "gsl_interp_accel", NULL,
  dao_gsl_interp_accel_Nums,
  dao_gsl_interp_accel_Meths,
  { NULL },
  { NULL },
  Dao_gsl_interp_accel_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_interp_accel_Typer = & gsl_interp_accel_Typer;
DaoType *dao_type_gsl_interp_accel = NULL;
static void dao_gsl_interp_accel_GETF_cache( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp_accel *self = (gsl_interp_accel*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp_accel);
  DaoProcess_PutInteger( _proc, (daoint) self->cache );
}
static void dao_gsl_interp_accel_SETF_cache( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp_accel *self = (gsl_interp_accel*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp_accel);
  self->cache = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_interp_accel_GETF_miss_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp_accel *self = (gsl_interp_accel*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp_accel);
  DaoProcess_PutInteger( _proc, (daoint) self->miss_count );
}
static void dao_gsl_interp_accel_SETF_miss_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp_accel *self = (gsl_interp_accel*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp_accel);
  self->miss_count = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_interp_accel_GETF_hit_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp_accel *self = (gsl_interp_accel*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp_accel);
  DaoProcess_PutInteger( _proc, (daoint) self->hit_count );
}
static void dao_gsl_interp_accel_SETF_hit_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp_accel *self = (gsl_interp_accel*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp_accel);
  self->hit_count = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_interp_accel_gsl_interp_accel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_interp_accel *self = Dao_gsl_interp_accel_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_interp_accel );
}
/* /usr/local/include/gsl/gsl_interp.h */


static DaoNumItem dao_gsl_interp_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_interp_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_type_GETF_min_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_type_SETF_min_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_type_gsl_interp_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_interp_type_Meths[] = 
{
  { dao_gsl_interp_type_GETF_name, ".name( self :gsl_interp_type )=>string" },
  { dao_gsl_interp_type_GETF_min_size, ".min_size( self :gsl_interp_type )=>int" },
  { dao_gsl_interp_type_SETF_min_size, ".min_size=( self :gsl_interp_type, min_size :int )" },
  { dao_gsl_interp_type_gsl_interp_type, "gsl_interp_type(  )=>gsl_interp_type" },
  { NULL, NULL }
};
static void Dao_gsl_interp_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_interp_type_Typer = 
{ "gsl_interp_type", NULL,
  dao_gsl_interp_type_Nums,
  dao_gsl_interp_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_interp_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_interp_type_Typer = & gsl_interp_type_Typer;
DaoType *dao_type_gsl_interp_type = NULL;
static void dao_gsl_interp_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp_type *self = (gsl_interp_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_interp_type_GETF_min_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp_type *self = (gsl_interp_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp_type);
  DaoProcess_PutInteger( _proc, (daoint) self->min_size );
}
static void dao_gsl_interp_type_SETF_min_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp_type *self = (gsl_interp_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp_type);
  self->min_size = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_interp_type_gsl_interp_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_interp_type *self = Dao_gsl_interp_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_interp.h */


static DaoNumItem dao_gsl_interp_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_interp_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_GETF_xmin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_SETF_xmin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_GETF_xmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_SETF_xmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_interp_gsl_interp( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_interp_Meths[] = 
{
  { dao_gsl_interp_GETF_type, ".type( self :gsl_interp )=>gsl_interp_type" },
  { dao_gsl_interp_GETF_xmin, ".xmin( self :gsl_interp )=>double" },
  { dao_gsl_interp_SETF_xmin, ".xmin=( self :gsl_interp, xmin :double )" },
  { dao_gsl_interp_GETF_xmax, ".xmax( self :gsl_interp )=>double" },
  { dao_gsl_interp_SETF_xmax, ".xmax=( self :gsl_interp, xmax :double )" },
  { dao_gsl_interp_GETF_size, ".size( self :gsl_interp )=>int" },
  { dao_gsl_interp_SETF_size, ".size=( self :gsl_interp, size :int )" },
  { dao_gsl_interp_GETF_state, ".state( self :gsl_interp )=>cdata" },
  { dao_gsl_interp_gsl_interp, "gsl_interp(  )=>gsl_interp" },
  { NULL, NULL }
};
static void Dao_gsl_interp_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_interp_Typer = 
{ "gsl_interp", NULL,
  dao_gsl_interp_Nums,
  dao_gsl_interp_Meths,
  { NULL },
  { NULL },
  Dao_gsl_interp_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_interp_Typer = & gsl_interp_Typer;
DaoType *dao_type_gsl_interp = NULL;
static void dao_gsl_interp_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp *self = (gsl_interp*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_interp_type );
}
static void dao_gsl_interp_GETF_xmin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp *self = (gsl_interp*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp);
  DaoProcess_PutDouble( _proc, (double) self->xmin );
}
static void dao_gsl_interp_SETF_xmin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp *self = (gsl_interp*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp);
  self->xmin = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_interp_GETF_xmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp *self = (gsl_interp*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp);
  DaoProcess_PutDouble( _proc, (double) self->xmax );
}
static void dao_gsl_interp_SETF_xmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp *self = (gsl_interp*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp);
  self->xmax = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_interp_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp *self = (gsl_interp*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_interp_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp *self = (gsl_interp*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_interp_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_interp *self = (gsl_interp*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_interp);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_interp_gsl_interp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_interp *self = Dao_gsl_interp_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_interp );
}
/* /usr/local/include/gsl/gsl_min.h */


static DaoNumItem dao_gsl_min_fminimizer_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_min_fminimizer_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_type_gsl_min_fminimizer_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_min_fminimizer_type_Meths[] = 
{
  { dao_gsl_min_fminimizer_type_GETF_name, ".name( self :gsl_min_fminimizer_type )=>string" },
  { dao_gsl_min_fminimizer_type_GETF_size, ".size( self :gsl_min_fminimizer_type )=>int" },
  { dao_gsl_min_fminimizer_type_SETF_size, ".size=( self :gsl_min_fminimizer_type, size :int )" },
  { dao_gsl_min_fminimizer_type_gsl_min_fminimizer_type, "gsl_min_fminimizer_type(  )=>gsl_min_fminimizer_type" },
  { NULL, NULL }
};
static void Dao_gsl_min_fminimizer_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_min_fminimizer_type_Typer = 
{ "gsl_min_fminimizer_type", NULL,
  dao_gsl_min_fminimizer_type_Nums,
  dao_gsl_min_fminimizer_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_min_fminimizer_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_min_fminimizer_type_Typer = & gsl_min_fminimizer_type_Typer;
DaoType *dao_type_gsl_min_fminimizer_type = NULL;
static void dao_gsl_min_fminimizer_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer_type *self = (gsl_min_fminimizer_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_min_fminimizer_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer_type *self = (gsl_min_fminimizer_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_min_fminimizer_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer_type *self = (gsl_min_fminimizer_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_min_fminimizer_type_gsl_min_fminimizer_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_min_fminimizer_type *self = Dao_gsl_min_fminimizer_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_min.h */


static DaoNumItem dao_gsl_min_fminimizer_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_min_fminimizer_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_GETF_x_minimum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_SETF_x_minimum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_GETF_x_lower( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_SETF_x_lower( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_GETF_x_upper( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_SETF_x_upper( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_GETF_f_minimum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_SETF_f_minimum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_GETF_f_lower( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_SETF_f_lower( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_GETF_f_upper( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_SETF_f_upper( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_min_fminimizer_gsl_min_fminimizer( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_min_fminimizer_Meths[] = 
{
  { dao_gsl_min_fminimizer_GETF_type, ".type( self :gsl_min_fminimizer )=>gsl_min_fminimizer_type" },
  { dao_gsl_min_fminimizer_GETF_function, ".function( self :gsl_min_fminimizer )=>gsl_function_struct" },
  { dao_gsl_min_fminimizer_GETF_x_minimum, ".x_minimum( self :gsl_min_fminimizer )=>double" },
  { dao_gsl_min_fminimizer_SETF_x_minimum, ".x_minimum=( self :gsl_min_fminimizer, x_minimum :double )" },
  { dao_gsl_min_fminimizer_GETF_x_lower, ".x_lower( self :gsl_min_fminimizer )=>double" },
  { dao_gsl_min_fminimizer_SETF_x_lower, ".x_lower=( self :gsl_min_fminimizer, x_lower :double )" },
  { dao_gsl_min_fminimizer_GETF_x_upper, ".x_upper( self :gsl_min_fminimizer )=>double" },
  { dao_gsl_min_fminimizer_SETF_x_upper, ".x_upper=( self :gsl_min_fminimizer, x_upper :double )" },
  { dao_gsl_min_fminimizer_GETF_f_minimum, ".f_minimum( self :gsl_min_fminimizer )=>double" },
  { dao_gsl_min_fminimizer_SETF_f_minimum, ".f_minimum=( self :gsl_min_fminimizer, f_minimum :double )" },
  { dao_gsl_min_fminimizer_GETF_f_lower, ".f_lower( self :gsl_min_fminimizer )=>double" },
  { dao_gsl_min_fminimizer_SETF_f_lower, ".f_lower=( self :gsl_min_fminimizer, f_lower :double )" },
  { dao_gsl_min_fminimizer_GETF_f_upper, ".f_upper( self :gsl_min_fminimizer )=>double" },
  { dao_gsl_min_fminimizer_SETF_f_upper, ".f_upper=( self :gsl_min_fminimizer, f_upper :double )" },
  { dao_gsl_min_fminimizer_GETF_state, ".state( self :gsl_min_fminimizer )=>cdata" },
  { dao_gsl_min_fminimizer_gsl_min_fminimizer, "gsl_min_fminimizer(  )=>gsl_min_fminimizer" },
  { NULL, NULL }
};
static void Dao_gsl_min_fminimizer_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_min_fminimizer_Typer = 
{ "gsl_min_fminimizer", NULL,
  dao_gsl_min_fminimizer_Nums,
  dao_gsl_min_fminimizer_Meths,
  { NULL },
  { NULL },
  Dao_gsl_min_fminimizer_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_min_fminimizer_Typer = & gsl_min_fminimizer_Typer;
DaoType *dao_type_gsl_min_fminimizer = NULL;
static void dao_gsl_min_fminimizer_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_min_fminimizer_type );
}
static void dao_gsl_min_fminimizer_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->function, dao_type_gsl_function_struct );
}
static void dao_gsl_min_fminimizer_GETF_x_minimum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  DaoProcess_PutDouble( _proc, (double) self->x_minimum );
}
static void dao_gsl_min_fminimizer_SETF_x_minimum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  self->x_minimum = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_min_fminimizer_GETF_x_lower( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  DaoProcess_PutDouble( _proc, (double) self->x_lower );
}
static void dao_gsl_min_fminimizer_SETF_x_lower( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  self->x_lower = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_min_fminimizer_GETF_x_upper( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  DaoProcess_PutDouble( _proc, (double) self->x_upper );
}
static void dao_gsl_min_fminimizer_SETF_x_upper( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  self->x_upper = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_min_fminimizer_GETF_f_minimum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  DaoProcess_PutDouble( _proc, (double) self->f_minimum );
}
static void dao_gsl_min_fminimizer_SETF_f_minimum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  self->f_minimum = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_min_fminimizer_GETF_f_lower( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  DaoProcess_PutDouble( _proc, (double) self->f_lower );
}
static void dao_gsl_min_fminimizer_SETF_f_lower( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  self->f_lower = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_min_fminimizer_GETF_f_upper( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  DaoProcess_PutDouble( _proc, (double) self->f_upper );
}
static void dao_gsl_min_fminimizer_SETF_f_upper( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  self->f_upper = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_min_fminimizer_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_min_fminimizer *self = (gsl_min_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_min_fminimizer);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_min_fminimizer_gsl_min_fminimizer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_min_fminimizer *self = Dao_gsl_min_fminimizer_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_min_fminimizer );
}
/* /usr/local/include/gsl/gsl_monte.h */


static DaoNumItem dao_gsl_monte_function_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_monte_function_struct_GETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_function_struct_SETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_function_struct_gsl_monte_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_monte_function_struct_Meths[] = 
{
  { dao_gsl_monte_function_struct_GETF_dim, ".dim( self :gsl_monte_function_struct )=>int" },
  { dao_gsl_monte_function_struct_SETF_dim, ".dim=( self :gsl_monte_function_struct, dim :int )" },
  { dao_gsl_monte_function_struct_GETF_params, ".params( self :gsl_monte_function_struct )=>cdata" },
  { dao_gsl_monte_function_struct_gsl_monte_function_struct, "gsl_monte_function_struct(  )=>gsl_monte_function_struct" },
  { NULL, NULL }
};
static void Dao_gsl_monte_function_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_monte_function_struct_Typer = 
{ "gsl_monte_function_struct", NULL,
  dao_gsl_monte_function_struct_Nums,
  dao_gsl_monte_function_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_monte_function_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_monte_function_struct_Typer = & gsl_monte_function_struct_Typer;
DaoType *dao_type_gsl_monte_function_struct = NULL;
static void dao_gsl_monte_function_struct_GETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_monte_function_struct *self = (struct gsl_monte_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_function_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->dim );
}
static void dao_gsl_monte_function_struct_SETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_monte_function_struct *self = (struct gsl_monte_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_function_struct);
  self->dim = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_monte_function_struct *self = (struct gsl_monte_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_function_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_monte_function_struct_gsl_monte_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_monte_function_struct *self = Dao_gsl_monte_function_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_rng.h */


static DaoNumItem dao_gsl_rng_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_rng_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_rng_type_GETF_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_rng_type_SETF_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_rng_type_GETF_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_rng_type_SETF_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_rng_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_rng_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_rng_type_gsl_rng_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_rng_type_Meths[] = 
{
  { dao_gsl_rng_type_GETF_name, ".name( self :gsl_rng_type )=>string" },
  { dao_gsl_rng_type_GETF_max, ".max( self :gsl_rng_type )=>int" },
  { dao_gsl_rng_type_SETF_max, ".max=( self :gsl_rng_type, max :int )" },
  { dao_gsl_rng_type_GETF_min, ".min( self :gsl_rng_type )=>int" },
  { dao_gsl_rng_type_SETF_min, ".min=( self :gsl_rng_type, min :int )" },
  { dao_gsl_rng_type_GETF_size, ".size( self :gsl_rng_type )=>int" },
  { dao_gsl_rng_type_SETF_size, ".size=( self :gsl_rng_type, size :int )" },
  { dao_gsl_rng_type_gsl_rng_type, "gsl_rng_type(  )=>gsl_rng_type" },
  { NULL, NULL }
};
static void Dao_gsl_rng_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_rng_type_Typer = 
{ "gsl_rng_type", NULL,
  dao_gsl_rng_type_Nums,
  dao_gsl_rng_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_rng_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_rng_type_Typer = & gsl_rng_type_Typer;
DaoType *dao_type_gsl_rng_type = NULL;
static void dao_gsl_rng_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_rng_type *self = (gsl_rng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_rng_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_rng_type_GETF_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_rng_type *self = (gsl_rng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_rng_type);
  DaoProcess_PutInteger( _proc, (daoint) self->max );
}
static void dao_gsl_rng_type_SETF_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_rng_type *self = (gsl_rng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_rng_type);
  self->max = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_rng_type_GETF_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_rng_type *self = (gsl_rng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_rng_type);
  DaoProcess_PutInteger( _proc, (daoint) self->min );
}
static void dao_gsl_rng_type_SETF_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_rng_type *self = (gsl_rng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_rng_type);
  self->min = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_rng_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_rng_type *self = (gsl_rng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_rng_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_rng_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_rng_type *self = (gsl_rng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_rng_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_rng_type_gsl_rng_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_rng_type *self = Dao_gsl_rng_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_rng.h */


static DaoNumItem dao_gsl_rng_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_rng_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_rng_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_rng_gsl_rng( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_rng_Meths[] = 
{
  { dao_gsl_rng_GETF_type, ".type( self :gsl_rng )=>gsl_rng_type" },
  { dao_gsl_rng_GETF_state, ".state( self :gsl_rng )=>cdata" },
  { dao_gsl_rng_gsl_rng, "gsl_rng(  )=>gsl_rng" },
  { NULL, NULL }
};
static void Dao_gsl_rng_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_rng_Typer = 
{ "gsl_rng", NULL,
  dao_gsl_rng_Nums,
  dao_gsl_rng_Meths,
  { NULL },
  { NULL },
  Dao_gsl_rng_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_rng_Typer = & gsl_rng_Typer;
DaoType *dao_type_gsl_rng = NULL;
static void dao_gsl_rng_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_rng *self = (gsl_rng*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_rng);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_rng_type );
}
static void dao_gsl_rng_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_rng *self = (gsl_rng*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_rng);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_rng_gsl_rng( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_rng *self = Dao_gsl_rng_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_rng );
}
/* /usr/local/include/gsl/gsl_monte_plain.h */


static DaoNumItem dao_gsl_monte_plain_state_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_monte_plain_state_GETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_plain_state_SETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_plain_state_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_plain_state_gsl_monte_plain_state( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_monte_plain_state_Meths[] = 
{
  { dao_gsl_monte_plain_state_GETF_dim, ".dim( self :gsl_monte_plain_state )=>int" },
  { dao_gsl_monte_plain_state_SETF_dim, ".dim=( self :gsl_monte_plain_state, dim :int )" },
  { dao_gsl_monte_plain_state_GETF_x, ".x( self :gsl_monte_plain_state )=>double" },
  { dao_gsl_monte_plain_state_gsl_monte_plain_state, "gsl_monte_plain_state(  )=>gsl_monte_plain_state" },
  { NULL, NULL }
};
static void Dao_gsl_monte_plain_state_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_monte_plain_state_Typer = 
{ "gsl_monte_plain_state", NULL,
  dao_gsl_monte_plain_state_Nums,
  dao_gsl_monte_plain_state_Meths,
  { NULL },
  { NULL },
  Dao_gsl_monte_plain_state_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_monte_plain_state_Typer = & gsl_monte_plain_state_Typer;
DaoType *dao_type_gsl_monte_plain_state = NULL;
static void dao_gsl_monte_plain_state_GETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_plain_state *self = (gsl_monte_plain_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_plain_state);
  DaoProcess_PutInteger( _proc, (daoint) self->dim );
}
static void dao_gsl_monte_plain_state_SETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_plain_state *self = (gsl_monte_plain_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_plain_state);
  self->dim = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_plain_state_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_plain_state *self = (gsl_monte_plain_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_plain_state);
  DaoProcess_PutVectorD( _proc, (double*) self->x, 0 );
}
static void dao_gsl_monte_plain_state_gsl_monte_plain_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_monte_plain_state *self = Dao_gsl_monte_plain_state_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_monte_plain_state );
}
/* /usr/local/include/gsl/gsl_monte_miser.h */


static DaoNumItem dao_gsl_monte_miser_state_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_monte_miser_state_GETF_min_calls( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_SETF_min_calls( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_min_calls_per_bisection( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_SETF_min_calls_per_bisection( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_dither( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_SETF_dither( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_estimate_frac( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_SETF_estimate_frac( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_SETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_estimate_style( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_SETF_estimate_style( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_SETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_SETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_xmid( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_sigma_l( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_sigma_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_fmax_l( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_fmax_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_fmin_l( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_fmin_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_fsum_l( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_fsum_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_fsum2_l( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_fsum2_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_hits_l( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_GETF_hits_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_state_gsl_monte_miser_state( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_monte_miser_state_Meths[] = 
{
  { dao_gsl_monte_miser_state_GETF_min_calls, ".min_calls( self :gsl_monte_miser_state )=>int" },
  { dao_gsl_monte_miser_state_SETF_min_calls, ".min_calls=( self :gsl_monte_miser_state, min_calls :int )" },
  { dao_gsl_monte_miser_state_GETF_min_calls_per_bisection, ".min_calls_per_bisection( self :gsl_monte_miser_state )=>int" },
  { dao_gsl_monte_miser_state_SETF_min_calls_per_bisection, ".min_calls_per_bisection=( self :gsl_monte_miser_state, min_calls_per_bisection :int )" },
  { dao_gsl_monte_miser_state_GETF_dither, ".dither( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_SETF_dither, ".dither=( self :gsl_monte_miser_state, dither :double )" },
  { dao_gsl_monte_miser_state_GETF_estimate_frac, ".estimate_frac( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_SETF_estimate_frac, ".estimate_frac=( self :gsl_monte_miser_state, estimate_frac :double )" },
  { dao_gsl_monte_miser_state_GETF_alpha, ".alpha( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_SETF_alpha, ".alpha=( self :gsl_monte_miser_state, alpha :double )" },
  { dao_gsl_monte_miser_state_GETF_dim, ".dim( self :gsl_monte_miser_state )=>int" },
  { dao_gsl_monte_miser_state_SETF_dim, ".dim=( self :gsl_monte_miser_state, dim :int )" },
  { dao_gsl_monte_miser_state_GETF_estimate_style, ".estimate_style( self :gsl_monte_miser_state )=>int" },
  { dao_gsl_monte_miser_state_SETF_estimate_style, ".estimate_style=( self :gsl_monte_miser_state, estimate_style :int )" },
  { dao_gsl_monte_miser_state_GETF_depth, ".depth( self :gsl_monte_miser_state )=>int" },
  { dao_gsl_monte_miser_state_SETF_depth, ".depth=( self :gsl_monte_miser_state, depth :int )" },
  { dao_gsl_monte_miser_state_GETF_verbose, ".verbose( self :gsl_monte_miser_state )=>int" },
  { dao_gsl_monte_miser_state_SETF_verbose, ".verbose=( self :gsl_monte_miser_state, verbose :int )" },
  { dao_gsl_monte_miser_state_GETF_x, ".x( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_xmid, ".xmid( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_sigma_l, ".sigma_l( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_sigma_r, ".sigma_r( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_fmax_l, ".fmax_l( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_fmax_r, ".fmax_r( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_fmin_l, ".fmin_l( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_fmin_r, ".fmin_r( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_fsum_l, ".fsum_l( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_fsum_r, ".fsum_r( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_fsum2_l, ".fsum2_l( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_fsum2_r, ".fsum2_r( self :gsl_monte_miser_state )=>double" },
  { dao_gsl_monte_miser_state_GETF_hits_l, ".hits_l( self :gsl_monte_miser_state )=>int" },
  { dao_gsl_monte_miser_state_GETF_hits_r, ".hits_r( self :gsl_monte_miser_state )=>int" },
  { dao_gsl_monte_miser_state_gsl_monte_miser_state, "gsl_monte_miser_state(  )=>gsl_monte_miser_state" },
  { NULL, NULL }
};
static void Dao_gsl_monte_miser_state_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_monte_miser_state_Typer = 
{ "gsl_monte_miser_state", NULL,
  dao_gsl_monte_miser_state_Nums,
  dao_gsl_monte_miser_state_Meths,
  { NULL },
  { NULL },
  Dao_gsl_monte_miser_state_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_monte_miser_state_Typer = & gsl_monte_miser_state_Typer;
DaoType *dao_type_gsl_monte_miser_state = NULL;
static void dao_gsl_monte_miser_state_GETF_min_calls( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutInteger( _proc, (daoint) self->min_calls );
}
static void dao_gsl_monte_miser_state_SETF_min_calls( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  self->min_calls = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_miser_state_GETF_min_calls_per_bisection( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutInteger( _proc, (daoint) self->min_calls_per_bisection );
}
static void dao_gsl_monte_miser_state_SETF_min_calls_per_bisection( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  self->min_calls_per_bisection = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_miser_state_GETF_dither( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutDouble( _proc, (double) self->dither );
}
static void dao_gsl_monte_miser_state_SETF_dither( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  self->dither = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_miser_state_GETF_estimate_frac( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutDouble( _proc, (double) self->estimate_frac );
}
static void dao_gsl_monte_miser_state_SETF_estimate_frac( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  self->estimate_frac = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_miser_state_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutDouble( _proc, (double) self->alpha );
}
static void dao_gsl_monte_miser_state_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  self->alpha = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_miser_state_GETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutInteger( _proc, (daoint) self->dim );
}
static void dao_gsl_monte_miser_state_SETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  self->dim = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_miser_state_GETF_estimate_style( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutInteger( _proc, (daoint) self->estimate_style );
}
static void dao_gsl_monte_miser_state_SETF_estimate_style( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  self->estimate_style = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_miser_state_GETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutInteger( _proc, (daoint) self->depth );
}
static void dao_gsl_monte_miser_state_SETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  self->depth = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_miser_state_GETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutInteger( _proc, (daoint) self->verbose );
}
static void dao_gsl_monte_miser_state_SETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  self->verbose = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_miser_state_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->x, 0 );
}
static void dao_gsl_monte_miser_state_GETF_xmid( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->xmid, 0 );
}
static void dao_gsl_monte_miser_state_GETF_sigma_l( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->sigma_l, 0 );
}
static void dao_gsl_monte_miser_state_GETF_sigma_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->sigma_r, 0 );
}
static void dao_gsl_monte_miser_state_GETF_fmax_l( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->fmax_l, 0 );
}
static void dao_gsl_monte_miser_state_GETF_fmax_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->fmax_r, 0 );
}
static void dao_gsl_monte_miser_state_GETF_fmin_l( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->fmin_l, 0 );
}
static void dao_gsl_monte_miser_state_GETF_fmin_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->fmin_r, 0 );
}
static void dao_gsl_monte_miser_state_GETF_fsum_l( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->fsum_l, 0 );
}
static void dao_gsl_monte_miser_state_GETF_fsum_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->fsum_r, 0 );
}
static void dao_gsl_monte_miser_state_GETF_fsum2_l( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->fsum2_l, 0 );
}
static void dao_gsl_monte_miser_state_GETF_fsum2_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorD( _proc, (double*) self->fsum2_r, 0 );
}
static void dao_gsl_monte_miser_state_GETF_hits_l( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->hits_l, 0 );
}
static void dao_gsl_monte_miser_state_GETF_hits_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_state *self = (gsl_monte_miser_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_state);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->hits_r, 0 );
}
static void dao_gsl_monte_miser_state_gsl_monte_miser_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_monte_miser_state *self = Dao_gsl_monte_miser_state_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_monte_miser_state );
}
/* /usr/local/include/gsl/gsl_monte_miser.h */


static DaoNumItem dao_gsl_monte_miser_params_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_monte_miser_params_GETF_estimate_frac( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_SETF_estimate_frac( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_GETF_min_calls( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_SETF_min_calls( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_GETF_min_calls_per_bisection( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_SETF_min_calls_per_bisection( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_GETF_dither( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_SETF_dither( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_miser_params_gsl_monte_miser_params( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_monte_miser_params_Meths[] = 
{
  { dao_gsl_monte_miser_params_GETF_estimate_frac, ".estimate_frac( self :gsl_monte_miser_params )=>double" },
  { dao_gsl_monte_miser_params_SETF_estimate_frac, ".estimate_frac=( self :gsl_monte_miser_params, estimate_frac :double )" },
  { dao_gsl_monte_miser_params_GETF_min_calls, ".min_calls( self :gsl_monte_miser_params )=>int" },
  { dao_gsl_monte_miser_params_SETF_min_calls, ".min_calls=( self :gsl_monte_miser_params, min_calls :int )" },
  { dao_gsl_monte_miser_params_GETF_min_calls_per_bisection, ".min_calls_per_bisection( self :gsl_monte_miser_params )=>int" },
  { dao_gsl_monte_miser_params_SETF_min_calls_per_bisection, ".min_calls_per_bisection=( self :gsl_monte_miser_params, min_calls_per_bisection :int )" },
  { dao_gsl_monte_miser_params_GETF_alpha, ".alpha( self :gsl_monte_miser_params )=>double" },
  { dao_gsl_monte_miser_params_SETF_alpha, ".alpha=( self :gsl_monte_miser_params, alpha :double )" },
  { dao_gsl_monte_miser_params_GETF_dither, ".dither( self :gsl_monte_miser_params )=>double" },
  { dao_gsl_monte_miser_params_SETF_dither, ".dither=( self :gsl_monte_miser_params, dither :double )" },
  { dao_gsl_monte_miser_params_gsl_monte_miser_params, "gsl_monte_miser_params(  )=>gsl_monte_miser_params" },
  { NULL, NULL }
};
static void Dao_gsl_monte_miser_params_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_monte_miser_params_Typer = 
{ "gsl_monte_miser_params", NULL,
  dao_gsl_monte_miser_params_Nums,
  dao_gsl_monte_miser_params_Meths,
  { NULL },
  { NULL },
  Dao_gsl_monte_miser_params_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_monte_miser_params_Typer = & gsl_monte_miser_params_Typer;
DaoType *dao_type_gsl_monte_miser_params = NULL;
static void dao_gsl_monte_miser_params_GETF_estimate_frac( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  DaoProcess_PutDouble( _proc, (double) self->estimate_frac );
}
static void dao_gsl_monte_miser_params_SETF_estimate_frac( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  self->estimate_frac = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_miser_params_GETF_min_calls( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  DaoProcess_PutInteger( _proc, (daoint) self->min_calls );
}
static void dao_gsl_monte_miser_params_SETF_min_calls( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  self->min_calls = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_miser_params_GETF_min_calls_per_bisection( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  DaoProcess_PutInteger( _proc, (daoint) self->min_calls_per_bisection );
}
static void dao_gsl_monte_miser_params_SETF_min_calls_per_bisection( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  self->min_calls_per_bisection = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_miser_params_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  DaoProcess_PutDouble( _proc, (double) self->alpha );
}
static void dao_gsl_monte_miser_params_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  self->alpha = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_miser_params_GETF_dither( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  DaoProcess_PutDouble( _proc, (double) self->dither );
}
static void dao_gsl_monte_miser_params_SETF_dither( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_miser_params *self = (gsl_monte_miser_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_miser_params);
  self->dither = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_miser_params_gsl_monte_miser_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_monte_miser_params *self = Dao_gsl_monte_miser_params_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_monte_miser_params );
}
/* /usr/local/include/gsl/gsl_monte_vegas.h */


static DaoNumItem dao_gsl_monte_vegas_state_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_monte_vegas_state_GETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_bins_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_bins_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_bins( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_bins( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_boxes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_boxes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_xi( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_xin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_delx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_weight( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_vol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_vol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_bin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_box( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_iterations( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_iterations( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_stage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_stage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_jac( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_jac( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_wtd_int_sum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_wtd_int_sum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_sum_wgts( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_sum_wgts( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_chi_sum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_chi_sum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_chisq( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_chisq( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_result( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_result( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_sigma( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_sigma( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_it_start( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_it_start( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_it_num( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_it_num( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_calls_per_box( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_SETF_calls_per_box( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_GETF_ostream( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_state_gsl_monte_vegas_state( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_monte_vegas_state_Meths[] = 
{
  { dao_gsl_monte_vegas_state_GETF_dim, ".dim( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_dim, ".dim=( self :gsl_monte_vegas_state, dim :int )" },
  { dao_gsl_monte_vegas_state_GETF_bins_max, ".bins_max( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_bins_max, ".bins_max=( self :gsl_monte_vegas_state, bins_max :int )" },
  { dao_gsl_monte_vegas_state_GETF_bins, ".bins( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_bins, ".bins=( self :gsl_monte_vegas_state, bins :int )" },
  { dao_gsl_monte_vegas_state_GETF_boxes, ".boxes( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_boxes, ".boxes=( self :gsl_monte_vegas_state, boxes :int )" },
  { dao_gsl_monte_vegas_state_GETF_xi, ".xi( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_GETF_xin, ".xin( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_GETF_delx, ".delx( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_GETF_weight, ".weight( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_GETF_vol, ".vol( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_SETF_vol, ".vol=( self :gsl_monte_vegas_state, vol :double )" },
  { dao_gsl_monte_vegas_state_GETF_x, ".x( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_GETF_bin, ".bin( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_GETF_box, ".box( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_GETF_d, ".d( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_GETF_alpha, ".alpha( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_SETF_alpha, ".alpha=( self :gsl_monte_vegas_state, alpha :double )" },
  { dao_gsl_monte_vegas_state_GETF_mode, ".mode( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_mode, ".mode=( self :gsl_monte_vegas_state, mode :int )" },
  { dao_gsl_monte_vegas_state_GETF_verbose, ".verbose( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_verbose, ".verbose=( self :gsl_monte_vegas_state, verbose :int )" },
  { dao_gsl_monte_vegas_state_GETF_iterations, ".iterations( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_iterations, ".iterations=( self :gsl_monte_vegas_state, iterations :int )" },
  { dao_gsl_monte_vegas_state_GETF_stage, ".stage( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_stage, ".stage=( self :gsl_monte_vegas_state, stage :int )" },
  { dao_gsl_monte_vegas_state_GETF_jac, ".jac( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_SETF_jac, ".jac=( self :gsl_monte_vegas_state, jac :double )" },
  { dao_gsl_monte_vegas_state_GETF_wtd_int_sum, ".wtd_int_sum( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_SETF_wtd_int_sum, ".wtd_int_sum=( self :gsl_monte_vegas_state, wtd_int_sum :double )" },
  { dao_gsl_monte_vegas_state_GETF_sum_wgts, ".sum_wgts( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_SETF_sum_wgts, ".sum_wgts=( self :gsl_monte_vegas_state, sum_wgts :double )" },
  { dao_gsl_monte_vegas_state_GETF_chi_sum, ".chi_sum( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_SETF_chi_sum, ".chi_sum=( self :gsl_monte_vegas_state, chi_sum :double )" },
  { dao_gsl_monte_vegas_state_GETF_chisq, ".chisq( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_SETF_chisq, ".chisq=( self :gsl_monte_vegas_state, chisq :double )" },
  { dao_gsl_monte_vegas_state_GETF_result, ".result( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_SETF_result, ".result=( self :gsl_monte_vegas_state, result :double )" },
  { dao_gsl_monte_vegas_state_GETF_sigma, ".sigma( self :gsl_monte_vegas_state )=>double" },
  { dao_gsl_monte_vegas_state_SETF_sigma, ".sigma=( self :gsl_monte_vegas_state, sigma :double )" },
  { dao_gsl_monte_vegas_state_GETF_it_start, ".it_start( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_it_start, ".it_start=( self :gsl_monte_vegas_state, it_start :int )" },
  { dao_gsl_monte_vegas_state_GETF_it_num, ".it_num( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_it_num, ".it_num=( self :gsl_monte_vegas_state, it_num :int )" },
  { dao_gsl_monte_vegas_state_GETF_samples, ".samples( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_samples, ".samples=( self :gsl_monte_vegas_state, samples :int )" },
  { dao_gsl_monte_vegas_state_GETF_calls_per_box, ".calls_per_box( self :gsl_monte_vegas_state )=>int" },
  { dao_gsl_monte_vegas_state_SETF_calls_per_box, ".calls_per_box=( self :gsl_monte_vegas_state, calls_per_box :int )" },
  { dao_gsl_monte_vegas_state_GETF_ostream, ".ostream( self :gsl_monte_vegas_state )=>io::stream" },
  { dao_gsl_monte_vegas_state_gsl_monte_vegas_state, "gsl_monte_vegas_state(  )=>gsl_monte_vegas_state" },
  { NULL, NULL }
};
static void Dao_gsl_monte_vegas_state_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_monte_vegas_state_Typer = 
{ "gsl_monte_vegas_state", NULL,
  dao_gsl_monte_vegas_state_Nums,
  dao_gsl_monte_vegas_state_Meths,
  { NULL },
  { NULL },
  Dao_gsl_monte_vegas_state_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_monte_vegas_state_Typer = & gsl_monte_vegas_state_Typer;
DaoType *dao_type_gsl_monte_vegas_state = NULL;
static void dao_gsl_monte_vegas_state_GETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->dim );
}
static void dao_gsl_monte_vegas_state_SETF_dim( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->dim = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_bins_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->bins_max );
}
static void dao_gsl_monte_vegas_state_SETF_bins_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->bins_max = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_bins( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->bins );
}
static void dao_gsl_monte_vegas_state_SETF_bins( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->bins = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_boxes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->boxes );
}
static void dao_gsl_monte_vegas_state_SETF_boxes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->boxes = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_xi( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutVectorD( _proc, (double*) self->xi, 0 );
}
static void dao_gsl_monte_vegas_state_GETF_xin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutVectorD( _proc, (double*) self->xin, 0 );
}
static void dao_gsl_monte_vegas_state_GETF_delx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutVectorD( _proc, (double*) self->delx, 0 );
}
static void dao_gsl_monte_vegas_state_GETF_weight( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutVectorD( _proc, (double*) self->weight, 0 );
}
static void dao_gsl_monte_vegas_state_GETF_vol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutDouble( _proc, (double) self->vol );
}
static void dao_gsl_monte_vegas_state_SETF_vol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->vol = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutVectorD( _proc, (double*) self->x, 0 );
}
static void dao_gsl_monte_vegas_state_GETF_bin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->bin, 0 );
}
static void dao_gsl_monte_vegas_state_GETF_box( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->box, 0 );
}
static void dao_gsl_monte_vegas_state_GETF_d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutVectorD( _proc, (double*) self->d, 0 );
}
static void dao_gsl_monte_vegas_state_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutDouble( _proc, (double) self->alpha );
}
static void dao_gsl_monte_vegas_state_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->alpha = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->mode );
}
static void dao_gsl_monte_vegas_state_SETF_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->mode = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->verbose );
}
static void dao_gsl_monte_vegas_state_SETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->verbose = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_iterations( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->iterations );
}
static void dao_gsl_monte_vegas_state_SETF_iterations( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->iterations = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_stage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->stage );
}
static void dao_gsl_monte_vegas_state_SETF_stage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->stage = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_jac( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutDouble( _proc, (double) self->jac );
}
static void dao_gsl_monte_vegas_state_SETF_jac( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->jac = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_wtd_int_sum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutDouble( _proc, (double) self->wtd_int_sum );
}
static void dao_gsl_monte_vegas_state_SETF_wtd_int_sum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->wtd_int_sum = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_sum_wgts( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutDouble( _proc, (double) self->sum_wgts );
}
static void dao_gsl_monte_vegas_state_SETF_sum_wgts( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->sum_wgts = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_chi_sum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutDouble( _proc, (double) self->chi_sum );
}
static void dao_gsl_monte_vegas_state_SETF_chi_sum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->chi_sum = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_chisq( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutDouble( _proc, (double) self->chisq );
}
static void dao_gsl_monte_vegas_state_SETF_chisq( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->chisq = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_result( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutDouble( _proc, (double) self->result );
}
static void dao_gsl_monte_vegas_state_SETF_result( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->result = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_sigma( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutDouble( _proc, (double) self->sigma );
}
static void dao_gsl_monte_vegas_state_SETF_sigma( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->sigma = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_it_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->it_start );
}
static void dao_gsl_monte_vegas_state_SETF_it_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->it_start = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_it_num( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->it_num );
}
static void dao_gsl_monte_vegas_state_SETF_it_num( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->it_num = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->samples );
}
static void dao_gsl_monte_vegas_state_SETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->samples = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_calls_per_box( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutInteger( _proc, (daoint) self->calls_per_box );
}
static void dao_gsl_monte_vegas_state_SETF_calls_per_box( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  self->calls_per_box = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_state_GETF_ostream( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_state *self = (gsl_monte_vegas_state*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_state);
  DaoProcess_PutFile( _proc, (FILE*) self->ostream );
}
static void dao_gsl_monte_vegas_state_gsl_monte_vegas_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_monte_vegas_state *self = Dao_gsl_monte_vegas_state_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_monte_vegas_state );
}
/* /usr/local/include/gsl/gsl_monte_vegas.h */


static DaoNumItem dao_gsl_monte_vegas_params_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_monte_vegas_params_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_GETF_iterations( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_SETF_iterations( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_GETF_stage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_SETF_stage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_GETF_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_SETF_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_GETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_SETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_GETF_ostream( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_monte_vegas_params_gsl_monte_vegas_params( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_monte_vegas_params_Meths[] = 
{
  { dao_gsl_monte_vegas_params_GETF_alpha, ".alpha( self :gsl_monte_vegas_params )=>double" },
  { dao_gsl_monte_vegas_params_SETF_alpha, ".alpha=( self :gsl_monte_vegas_params, alpha :double )" },
  { dao_gsl_monte_vegas_params_GETF_iterations, ".iterations( self :gsl_monte_vegas_params )=>int" },
  { dao_gsl_monte_vegas_params_SETF_iterations, ".iterations=( self :gsl_monte_vegas_params, iterations :int )" },
  { dao_gsl_monte_vegas_params_GETF_stage, ".stage( self :gsl_monte_vegas_params )=>int" },
  { dao_gsl_monte_vegas_params_SETF_stage, ".stage=( self :gsl_monte_vegas_params, stage :int )" },
  { dao_gsl_monte_vegas_params_GETF_mode, ".mode( self :gsl_monte_vegas_params )=>int" },
  { dao_gsl_monte_vegas_params_SETF_mode, ".mode=( self :gsl_monte_vegas_params, mode :int )" },
  { dao_gsl_monte_vegas_params_GETF_verbose, ".verbose( self :gsl_monte_vegas_params )=>int" },
  { dao_gsl_monte_vegas_params_SETF_verbose, ".verbose=( self :gsl_monte_vegas_params, verbose :int )" },
  { dao_gsl_monte_vegas_params_GETF_ostream, ".ostream( self :gsl_monte_vegas_params )=>io::stream" },
  { dao_gsl_monte_vegas_params_gsl_monte_vegas_params, "gsl_monte_vegas_params(  )=>gsl_monte_vegas_params" },
  { NULL, NULL }
};
static void Dao_gsl_monte_vegas_params_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_monte_vegas_params_Typer = 
{ "gsl_monte_vegas_params", NULL,
  dao_gsl_monte_vegas_params_Nums,
  dao_gsl_monte_vegas_params_Meths,
  { NULL },
  { NULL },
  Dao_gsl_monte_vegas_params_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_monte_vegas_params_Typer = & gsl_monte_vegas_params_Typer;
DaoType *dao_type_gsl_monte_vegas_params = NULL;
static void dao_gsl_monte_vegas_params_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  DaoProcess_PutDouble( _proc, (double) self->alpha );
}
static void dao_gsl_monte_vegas_params_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  self->alpha = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_monte_vegas_params_GETF_iterations( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  DaoProcess_PutInteger( _proc, (daoint) self->iterations );
}
static void dao_gsl_monte_vegas_params_SETF_iterations( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  self->iterations = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_params_GETF_stage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  DaoProcess_PutInteger( _proc, (daoint) self->stage );
}
static void dao_gsl_monte_vegas_params_SETF_stage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  self->stage = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_params_GETF_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  DaoProcess_PutInteger( _proc, (daoint) self->mode );
}
static void dao_gsl_monte_vegas_params_SETF_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  self->mode = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_params_GETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  DaoProcess_PutInteger( _proc, (daoint) self->verbose );
}
static void dao_gsl_monte_vegas_params_SETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  self->verbose = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_monte_vegas_params_GETF_ostream( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_monte_vegas_params *self = (gsl_monte_vegas_params*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_monte_vegas_params);
  DaoProcess_PutFile( _proc, (FILE*) self->ostream );
}
static void dao_gsl_monte_vegas_params_gsl_monte_vegas_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_monte_vegas_params *self = Dao_gsl_monte_vegas_params_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_monte_vegas_params );
}
/* /usr/local/include/gsl/gsl_multifit.h */


static DaoNumItem dao_gsl_multifit_linear_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multifit_linear_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_GETF_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_SETF_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_GETF_A( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_GETF_Q( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_GETF_QSI( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_GETF_S( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_GETF_t( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_GETF_xt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_GETF_D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_linear_workspace_gsl_multifit_linear_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multifit_linear_workspace_Meths[] = 
{
  { dao_gsl_multifit_linear_workspace_GETF_n, ".n( self :gsl_multifit_linear_workspace )=>int" },
  { dao_gsl_multifit_linear_workspace_SETF_n, ".n=( self :gsl_multifit_linear_workspace, n :int )" },
  { dao_gsl_multifit_linear_workspace_GETF_p, ".p( self :gsl_multifit_linear_workspace )=>int" },
  { dao_gsl_multifit_linear_workspace_SETF_p, ".p=( self :gsl_multifit_linear_workspace, p :int )" },
  { dao_gsl_multifit_linear_workspace_GETF_A, ".A( self :gsl_multifit_linear_workspace )=>gsl_matrix" },
  { dao_gsl_multifit_linear_workspace_GETF_Q, ".Q( self :gsl_multifit_linear_workspace )=>gsl_matrix" },
  { dao_gsl_multifit_linear_workspace_GETF_QSI, ".QSI( self :gsl_multifit_linear_workspace )=>gsl_matrix" },
  { dao_gsl_multifit_linear_workspace_GETF_S, ".S( self :gsl_multifit_linear_workspace )=>gsl_vector" },
  { dao_gsl_multifit_linear_workspace_GETF_t, ".t( self :gsl_multifit_linear_workspace )=>gsl_vector" },
  { dao_gsl_multifit_linear_workspace_GETF_xt, ".xt( self :gsl_multifit_linear_workspace )=>gsl_vector" },
  { dao_gsl_multifit_linear_workspace_GETF_D, ".D( self :gsl_multifit_linear_workspace )=>gsl_vector" },
  { dao_gsl_multifit_linear_workspace_gsl_multifit_linear_workspace, "gsl_multifit_linear_workspace(  )=>gsl_multifit_linear_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_multifit_linear_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multifit_linear_workspace_Typer = 
{ "gsl_multifit_linear_workspace", NULL,
  dao_gsl_multifit_linear_workspace_Nums,
  dao_gsl_multifit_linear_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multifit_linear_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multifit_linear_workspace_Typer = & gsl_multifit_linear_workspace_Typer;
DaoType *dao_type_gsl_multifit_linear_workspace = NULL;
static void dao_gsl_multifit_linear_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_multifit_linear_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multifit_linear_workspace_GETF_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->p );
}
static void dao_gsl_multifit_linear_workspace_SETF_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  self->p = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multifit_linear_workspace_GETF_A( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->A, dao_type_gsl_matrix );
}
static void dao_gsl_multifit_linear_workspace_GETF_Q( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->Q, dao_type_gsl_matrix );
}
static void dao_gsl_multifit_linear_workspace_GETF_QSI( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->QSI, dao_type_gsl_matrix );
}
static void dao_gsl_multifit_linear_workspace_GETF_S( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->S, dao_type_gsl_vector );
}
static void dao_gsl_multifit_linear_workspace_GETF_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->t, dao_type_gsl_vector );
}
static void dao_gsl_multifit_linear_workspace_GETF_xt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->xt, dao_type_gsl_vector );
}
static void dao_gsl_multifit_linear_workspace_GETF_D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_linear_workspace *self = (gsl_multifit_linear_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_linear_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->D, dao_type_gsl_vector );
}
static void dao_gsl_multifit_linear_workspace_gsl_multifit_linear_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_multifit_linear_workspace *self = Dao_gsl_multifit_linear_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_multifit_linear_workspace );
}
/* /usr/local/include/gsl/gsl_multifit_nlin.h */


static DaoNumItem dao_gsl_multifit_function_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multifit_function_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_struct_GETF_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_struct_SETF_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_struct_gsl_multifit_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multifit_function_struct_Meths[] = 
{
  { dao_gsl_multifit_function_struct_GETF_n, ".n( self :gsl_multifit_function_struct )=>int" },
  { dao_gsl_multifit_function_struct_SETF_n, ".n=( self :gsl_multifit_function_struct, n :int )" },
  { dao_gsl_multifit_function_struct_GETF_p, ".p( self :gsl_multifit_function_struct )=>int" },
  { dao_gsl_multifit_function_struct_SETF_p, ".p=( self :gsl_multifit_function_struct, p :int )" },
  { dao_gsl_multifit_function_struct_GETF_params, ".params( self :gsl_multifit_function_struct )=>cdata" },
  { dao_gsl_multifit_function_struct_gsl_multifit_function_struct, "gsl_multifit_function_struct(  )=>gsl_multifit_function_struct" },
  { NULL, NULL }
};
static void Dao_gsl_multifit_function_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multifit_function_struct_Typer = 
{ "gsl_multifit_function_struct", NULL,
  dao_gsl_multifit_function_struct_Nums,
  dao_gsl_multifit_function_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multifit_function_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multifit_function_struct_Typer = & gsl_multifit_function_struct_Typer;
DaoType *dao_type_gsl_multifit_function_struct = NULL;
static void dao_gsl_multifit_function_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_struct *self = (struct gsl_multifit_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_multifit_function_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_struct *self = (struct gsl_multifit_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_struct);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multifit_function_struct_GETF_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_struct *self = (struct gsl_multifit_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->p );
}
static void dao_gsl_multifit_function_struct_SETF_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_struct *self = (struct gsl_multifit_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_struct);
  self->p = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multifit_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_struct *self = (struct gsl_multifit_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_multifit_function_struct_gsl_multifit_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multifit_function_struct *self = Dao_gsl_multifit_function_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multifit_nlin.h */


static DaoNumItem dao_gsl_multifit_fsolver_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multifit_fsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fsolver_type_gsl_multifit_fsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multifit_fsolver_type_Meths[] = 
{
  { dao_gsl_multifit_fsolver_type_GETF_name, ".name( self :gsl_multifit_fsolver_type )=>string" },
  { dao_gsl_multifit_fsolver_type_GETF_size, ".size( self :gsl_multifit_fsolver_type )=>int" },
  { dao_gsl_multifit_fsolver_type_SETF_size, ".size=( self :gsl_multifit_fsolver_type, size :int )" },
  { dao_gsl_multifit_fsolver_type_gsl_multifit_fsolver_type, "gsl_multifit_fsolver_type(  )=>gsl_multifit_fsolver_type" },
  { NULL, NULL }
};
static void Dao_gsl_multifit_fsolver_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multifit_fsolver_type_Typer = 
{ "gsl_multifit_fsolver_type", NULL,
  dao_gsl_multifit_fsolver_type_Nums,
  dao_gsl_multifit_fsolver_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multifit_fsolver_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multifit_fsolver_type_Typer = & gsl_multifit_fsolver_type_Typer;
DaoType *dao_type_gsl_multifit_fsolver_type = NULL;
static void dao_gsl_multifit_fsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fsolver_type *self = (gsl_multifit_fsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fsolver_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_multifit_fsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fsolver_type *self = (gsl_multifit_fsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fsolver_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_multifit_fsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fsolver_type *self = (gsl_multifit_fsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fsolver_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multifit_fsolver_type_gsl_multifit_fsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multifit_fsolver_type *self = Dao_gsl_multifit_fsolver_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multifit_nlin.h */


static DaoNumItem dao_gsl_multifit_fsolver_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multifit_fsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fsolver_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fsolver_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fsolver_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fsolver_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fsolver_gsl_multifit_fsolver( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multifit_fsolver_Meths[] = 
{
  { dao_gsl_multifit_fsolver_GETF_type, ".type( self :gsl_multifit_fsolver )=>gsl_multifit_fsolver_type" },
  { dao_gsl_multifit_fsolver_GETF_function, ".function( self :gsl_multifit_fsolver )=>gsl_multifit_function_struct" },
  { dao_gsl_multifit_fsolver_GETF_x, ".x( self :gsl_multifit_fsolver )=>gsl_vector" },
  { dao_gsl_multifit_fsolver_GETF_f, ".f( self :gsl_multifit_fsolver )=>gsl_vector" },
  { dao_gsl_multifit_fsolver_GETF_dx, ".dx( self :gsl_multifit_fsolver )=>gsl_vector" },
  { dao_gsl_multifit_fsolver_GETF_state, ".state( self :gsl_multifit_fsolver )=>cdata" },
  { dao_gsl_multifit_fsolver_gsl_multifit_fsolver, "gsl_multifit_fsolver(  )=>gsl_multifit_fsolver" },
  { NULL, NULL }
};
static void Dao_gsl_multifit_fsolver_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multifit_fsolver_Typer = 
{ "gsl_multifit_fsolver", NULL,
  dao_gsl_multifit_fsolver_Nums,
  dao_gsl_multifit_fsolver_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multifit_fsolver_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multifit_fsolver_Typer = & gsl_multifit_fsolver_Typer;
DaoType *dao_type_gsl_multifit_fsolver = NULL;
static void dao_gsl_multifit_fsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fsolver *self = (gsl_multifit_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_multifit_fsolver_type );
}
static void dao_gsl_multifit_fsolver_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fsolver *self = (gsl_multifit_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->function, dao_type_gsl_multifit_function_struct );
}
static void dao_gsl_multifit_fsolver_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fsolver *self = (gsl_multifit_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->x, dao_type_gsl_vector );
}
static void dao_gsl_multifit_fsolver_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fsolver *self = (gsl_multifit_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->f, dao_type_gsl_vector );
}
static void dao_gsl_multifit_fsolver_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fsolver *self = (gsl_multifit_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->dx, dao_type_gsl_vector );
}
static void dao_gsl_multifit_fsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fsolver *self = (gsl_multifit_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fsolver);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_multifit_fsolver_gsl_multifit_fsolver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_multifit_fsolver *self = Dao_gsl_multifit_fsolver_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_multifit_fsolver );
}
/* /usr/local/include/gsl/gsl_multifit_nlin.h */


static DaoNumItem dao_gsl_multifit_function_fdf_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multifit_function_fdf_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_fdf_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_fdf_struct_GETF_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_fdf_struct_SETF_p( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_fdf_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_function_fdf_struct_gsl_multifit_function_fdf_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multifit_function_fdf_struct_Meths[] = 
{
  { dao_gsl_multifit_function_fdf_struct_GETF_n, ".n( self :gsl_multifit_function_fdf_struct )=>int" },
  { dao_gsl_multifit_function_fdf_struct_SETF_n, ".n=( self :gsl_multifit_function_fdf_struct, n :int )" },
  { dao_gsl_multifit_function_fdf_struct_GETF_p, ".p( self :gsl_multifit_function_fdf_struct )=>int" },
  { dao_gsl_multifit_function_fdf_struct_SETF_p, ".p=( self :gsl_multifit_function_fdf_struct, p :int )" },
  { dao_gsl_multifit_function_fdf_struct_GETF_params, ".params( self :gsl_multifit_function_fdf_struct )=>cdata" },
  { dao_gsl_multifit_function_fdf_struct_gsl_multifit_function_fdf_struct, "gsl_multifit_function_fdf_struct(  )=>gsl_multifit_function_fdf_struct" },
  { NULL, NULL }
};
static void Dao_gsl_multifit_function_fdf_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multifit_function_fdf_struct_Typer = 
{ "gsl_multifit_function_fdf_struct", NULL,
  dao_gsl_multifit_function_fdf_struct_Nums,
  dao_gsl_multifit_function_fdf_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multifit_function_fdf_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multifit_function_fdf_struct_Typer = & gsl_multifit_function_fdf_struct_Typer;
DaoType *dao_type_gsl_multifit_function_fdf_struct = NULL;
static void dao_gsl_multifit_function_fdf_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_fdf_struct *self = (struct gsl_multifit_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_fdf_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_multifit_function_fdf_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_fdf_struct *self = (struct gsl_multifit_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_fdf_struct);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multifit_function_fdf_struct_GETF_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_fdf_struct *self = (struct gsl_multifit_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_fdf_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->p );
}
static void dao_gsl_multifit_function_fdf_struct_SETF_p( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_fdf_struct *self = (struct gsl_multifit_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_fdf_struct);
  self->p = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multifit_function_fdf_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multifit_function_fdf_struct *self = (struct gsl_multifit_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_function_fdf_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_multifit_function_fdf_struct_gsl_multifit_function_fdf_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multifit_function_fdf_struct *self = Dao_gsl_multifit_function_fdf_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multifit_nlin.h */


static DaoNumItem dao_gsl_multifit_fdfsolver_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multifit_fdfsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_type_gsl_multifit_fdfsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multifit_fdfsolver_type_Meths[] = 
{
  { dao_gsl_multifit_fdfsolver_type_GETF_name, ".name( self :gsl_multifit_fdfsolver_type )=>string" },
  { dao_gsl_multifit_fdfsolver_type_GETF_size, ".size( self :gsl_multifit_fdfsolver_type )=>int" },
  { dao_gsl_multifit_fdfsolver_type_SETF_size, ".size=( self :gsl_multifit_fdfsolver_type, size :int )" },
  { dao_gsl_multifit_fdfsolver_type_gsl_multifit_fdfsolver_type, "gsl_multifit_fdfsolver_type(  )=>gsl_multifit_fdfsolver_type" },
  { NULL, NULL }
};
static void Dao_gsl_multifit_fdfsolver_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multifit_fdfsolver_type_Typer = 
{ "gsl_multifit_fdfsolver_type", NULL,
  dao_gsl_multifit_fdfsolver_type_Nums,
  dao_gsl_multifit_fdfsolver_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multifit_fdfsolver_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multifit_fdfsolver_type_Typer = & gsl_multifit_fdfsolver_type_Typer;
DaoType *dao_type_gsl_multifit_fdfsolver_type = NULL;
static void dao_gsl_multifit_fdfsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver_type *self = (gsl_multifit_fdfsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_multifit_fdfsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver_type *self = (gsl_multifit_fdfsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_multifit_fdfsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver_type *self = (gsl_multifit_fdfsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multifit_fdfsolver_type_gsl_multifit_fdfsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multifit_fdfsolver_type *self = Dao_gsl_multifit_fdfsolver_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multifit_nlin.h */


static DaoNumItem dao_gsl_multifit_fdfsolver_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multifit_fdfsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_GETF_fdf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_GETF_J( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multifit_fdfsolver_gsl_multifit_fdfsolver( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multifit_fdfsolver_Meths[] = 
{
  { dao_gsl_multifit_fdfsolver_GETF_type, ".type( self :gsl_multifit_fdfsolver )=>gsl_multifit_fdfsolver_type" },
  { dao_gsl_multifit_fdfsolver_GETF_fdf, ".fdf( self :gsl_multifit_fdfsolver )=>gsl_multifit_function_fdf_struct" },
  { dao_gsl_multifit_fdfsolver_GETF_x, ".x( self :gsl_multifit_fdfsolver )=>gsl_vector" },
  { dao_gsl_multifit_fdfsolver_GETF_f, ".f( self :gsl_multifit_fdfsolver )=>gsl_vector" },
  { dao_gsl_multifit_fdfsolver_GETF_J, ".J( self :gsl_multifit_fdfsolver )=>gsl_matrix" },
  { dao_gsl_multifit_fdfsolver_GETF_dx, ".dx( self :gsl_multifit_fdfsolver )=>gsl_vector" },
  { dao_gsl_multifit_fdfsolver_GETF_state, ".state( self :gsl_multifit_fdfsolver )=>cdata" },
  { dao_gsl_multifit_fdfsolver_gsl_multifit_fdfsolver, "gsl_multifit_fdfsolver(  )=>gsl_multifit_fdfsolver" },
  { NULL, NULL }
};
static void Dao_gsl_multifit_fdfsolver_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multifit_fdfsolver_Typer = 
{ "gsl_multifit_fdfsolver", NULL,
  dao_gsl_multifit_fdfsolver_Nums,
  dao_gsl_multifit_fdfsolver_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multifit_fdfsolver_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multifit_fdfsolver_Typer = & gsl_multifit_fdfsolver_Typer;
DaoType *dao_type_gsl_multifit_fdfsolver = NULL;
static void dao_gsl_multifit_fdfsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver *self = (gsl_multifit_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_multifit_fdfsolver_type );
}
static void dao_gsl_multifit_fdfsolver_GETF_fdf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver *self = (gsl_multifit_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->fdf, dao_type_gsl_multifit_function_fdf_struct );
}
static void dao_gsl_multifit_fdfsolver_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver *self = (gsl_multifit_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->x, dao_type_gsl_vector );
}
static void dao_gsl_multifit_fdfsolver_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver *self = (gsl_multifit_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->f, dao_type_gsl_vector );
}
static void dao_gsl_multifit_fdfsolver_GETF_J( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver *self = (gsl_multifit_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->J, dao_type_gsl_matrix );
}
static void dao_gsl_multifit_fdfsolver_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver *self = (gsl_multifit_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->dx, dao_type_gsl_vector );
}
static void dao_gsl_multifit_fdfsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multifit_fdfsolver *self = (gsl_multifit_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multifit_fdfsolver);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_multifit_fdfsolver_gsl_multifit_fdfsolver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_multifit_fdfsolver *self = Dao_gsl_multifit_fdfsolver_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_multifit_fdfsolver );
}
/* /usr/local/include/gsl/gsl_multimin.h */


static DaoNumItem dao_gsl_multimin_function_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multimin_function_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_function_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_function_struct_gsl_multimin_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multimin_function_struct_Meths[] = 
{
  { dao_gsl_multimin_function_struct_GETF_n, ".n( self :gsl_multimin_function_struct )=>int" },
  { dao_gsl_multimin_function_struct_SETF_n, ".n=( self :gsl_multimin_function_struct, n :int )" },
  { dao_gsl_multimin_function_struct_GETF_params, ".params( self :gsl_multimin_function_struct )=>cdata" },
  { dao_gsl_multimin_function_struct_gsl_multimin_function_struct, "gsl_multimin_function_struct(  )=>gsl_multimin_function_struct" },
  { NULL, NULL }
};
static void Dao_gsl_multimin_function_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multimin_function_struct_Typer = 
{ "gsl_multimin_function_struct", NULL,
  dao_gsl_multimin_function_struct_Nums,
  dao_gsl_multimin_function_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multimin_function_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multimin_function_struct_Typer = & gsl_multimin_function_struct_Typer;
DaoType *dao_type_gsl_multimin_function_struct = NULL;
static void dao_gsl_multimin_function_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multimin_function_struct *self = (struct gsl_multimin_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_function_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_multimin_function_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multimin_function_struct *self = (struct gsl_multimin_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_function_struct);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multimin_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multimin_function_struct *self = (struct gsl_multimin_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_function_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_multimin_function_struct_gsl_multimin_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multimin_function_struct *self = Dao_gsl_multimin_function_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multimin.h */


static DaoNumItem dao_gsl_multimin_function_fdf_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multimin_function_fdf_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_function_fdf_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_function_fdf_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_function_fdf_struct_gsl_multimin_function_fdf_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multimin_function_fdf_struct_Meths[] = 
{
  { dao_gsl_multimin_function_fdf_struct_GETF_n, ".n( self :gsl_multimin_function_fdf_struct )=>int" },
  { dao_gsl_multimin_function_fdf_struct_SETF_n, ".n=( self :gsl_multimin_function_fdf_struct, n :int )" },
  { dao_gsl_multimin_function_fdf_struct_GETF_params, ".params( self :gsl_multimin_function_fdf_struct )=>cdata" },
  { dao_gsl_multimin_function_fdf_struct_gsl_multimin_function_fdf_struct, "gsl_multimin_function_fdf_struct(  )=>gsl_multimin_function_fdf_struct" },
  { NULL, NULL }
};
static void Dao_gsl_multimin_function_fdf_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multimin_function_fdf_struct_Typer = 
{ "gsl_multimin_function_fdf_struct", NULL,
  dao_gsl_multimin_function_fdf_struct_Nums,
  dao_gsl_multimin_function_fdf_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multimin_function_fdf_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multimin_function_fdf_struct_Typer = & gsl_multimin_function_fdf_struct_Typer;
DaoType *dao_type_gsl_multimin_function_fdf_struct = NULL;
static void dao_gsl_multimin_function_fdf_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multimin_function_fdf_struct *self = (struct gsl_multimin_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_function_fdf_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_multimin_function_fdf_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multimin_function_fdf_struct *self = (struct gsl_multimin_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_function_fdf_struct);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multimin_function_fdf_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multimin_function_fdf_struct *self = (struct gsl_multimin_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_function_fdf_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_multimin_function_fdf_struct_gsl_multimin_function_fdf_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multimin_function_fdf_struct *self = Dao_gsl_multimin_function_fdf_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multimin.h */


static DaoNumItem dao_gsl_multimin_fminimizer_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multimin_fminimizer_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_type_gsl_multimin_fminimizer_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multimin_fminimizer_type_Meths[] = 
{
  { dao_gsl_multimin_fminimizer_type_GETF_name, ".name( self :gsl_multimin_fminimizer_type )=>string" },
  { dao_gsl_multimin_fminimizer_type_GETF_size, ".size( self :gsl_multimin_fminimizer_type )=>int" },
  { dao_gsl_multimin_fminimizer_type_SETF_size, ".size=( self :gsl_multimin_fminimizer_type, size :int )" },
  { dao_gsl_multimin_fminimizer_type_gsl_multimin_fminimizer_type, "gsl_multimin_fminimizer_type(  )=>gsl_multimin_fminimizer_type" },
  { NULL, NULL }
};
static void Dao_gsl_multimin_fminimizer_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multimin_fminimizer_type_Typer = 
{ "gsl_multimin_fminimizer_type", NULL,
  dao_gsl_multimin_fminimizer_type_Nums,
  dao_gsl_multimin_fminimizer_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multimin_fminimizer_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multimin_fminimizer_type_Typer = & gsl_multimin_fminimizer_type_Typer;
DaoType *dao_type_gsl_multimin_fminimizer_type = NULL;
static void dao_gsl_multimin_fminimizer_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer_type *self = (gsl_multimin_fminimizer_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_multimin_fminimizer_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer_type *self = (gsl_multimin_fminimizer_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_multimin_fminimizer_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer_type *self = (gsl_multimin_fminimizer_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multimin_fminimizer_type_gsl_multimin_fminimizer_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multimin_fminimizer_type *self = Dao_gsl_multimin_fminimizer_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multimin.h */


static DaoNumItem dao_gsl_multimin_fminimizer_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multimin_fminimizer_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_GETF_fval( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_SETF_fval( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fminimizer_gsl_multimin_fminimizer( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multimin_fminimizer_Meths[] = 
{
  { dao_gsl_multimin_fminimizer_GETF_type, ".type( self :gsl_multimin_fminimizer )=>gsl_multimin_fminimizer_type" },
  { dao_gsl_multimin_fminimizer_GETF_f, ".f( self :gsl_multimin_fminimizer )=>gsl_multimin_function_struct" },
  { dao_gsl_multimin_fminimizer_GETF_fval, ".fval( self :gsl_multimin_fminimizer )=>double" },
  { dao_gsl_multimin_fminimizer_SETF_fval, ".fval=( self :gsl_multimin_fminimizer, fval :double )" },
  { dao_gsl_multimin_fminimizer_GETF_x, ".x( self :gsl_multimin_fminimizer )=>gsl_vector" },
  { dao_gsl_multimin_fminimizer_GETF_size, ".size( self :gsl_multimin_fminimizer )=>double" },
  { dao_gsl_multimin_fminimizer_SETF_size, ".size=( self :gsl_multimin_fminimizer, size :double )" },
  { dao_gsl_multimin_fminimizer_GETF_state, ".state( self :gsl_multimin_fminimizer )=>cdata" },
  { dao_gsl_multimin_fminimizer_gsl_multimin_fminimizer, "gsl_multimin_fminimizer(  )=>gsl_multimin_fminimizer" },
  { NULL, NULL }
};
static void Dao_gsl_multimin_fminimizer_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multimin_fminimizer_Typer = 
{ "gsl_multimin_fminimizer", NULL,
  dao_gsl_multimin_fminimizer_Nums,
  dao_gsl_multimin_fminimizer_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multimin_fminimizer_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multimin_fminimizer_Typer = & gsl_multimin_fminimizer_Typer;
DaoType *dao_type_gsl_multimin_fminimizer = NULL;
static void dao_gsl_multimin_fminimizer_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer *self = (gsl_multimin_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_multimin_fminimizer_type );
}
static void dao_gsl_multimin_fminimizer_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer *self = (gsl_multimin_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->f, dao_type_gsl_multimin_function_struct );
}
static void dao_gsl_multimin_fminimizer_GETF_fval( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer *self = (gsl_multimin_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer);
  DaoProcess_PutDouble( _proc, (double) self->fval );
}
static void dao_gsl_multimin_fminimizer_SETF_fval( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer *self = (gsl_multimin_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer);
  self->fval = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_multimin_fminimizer_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer *self = (gsl_multimin_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->x, dao_type_gsl_vector );
}
static void dao_gsl_multimin_fminimizer_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer *self = (gsl_multimin_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer);
  DaoProcess_PutDouble( _proc, (double) self->size );
}
static void dao_gsl_multimin_fminimizer_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer *self = (gsl_multimin_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer);
  self->size = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_multimin_fminimizer_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fminimizer *self = (gsl_multimin_fminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fminimizer);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_multimin_fminimizer_gsl_multimin_fminimizer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_multimin_fminimizer *self = Dao_gsl_multimin_fminimizer_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_multimin_fminimizer );
}
/* /usr/local/include/gsl/gsl_multimin.h */


static DaoNumItem dao_gsl_multimin_fdfminimizer_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multimin_fdfminimizer_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_type_gsl_multimin_fdfminimizer_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multimin_fdfminimizer_type_Meths[] = 
{
  { dao_gsl_multimin_fdfminimizer_type_GETF_name, ".name( self :gsl_multimin_fdfminimizer_type )=>string" },
  { dao_gsl_multimin_fdfminimizer_type_GETF_size, ".size( self :gsl_multimin_fdfminimizer_type )=>int" },
  { dao_gsl_multimin_fdfminimizer_type_SETF_size, ".size=( self :gsl_multimin_fdfminimizer_type, size :int )" },
  { dao_gsl_multimin_fdfminimizer_type_gsl_multimin_fdfminimizer_type, "gsl_multimin_fdfminimizer_type(  )=>gsl_multimin_fdfminimizer_type" },
  { NULL, NULL }
};
static void Dao_gsl_multimin_fdfminimizer_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multimin_fdfminimizer_type_Typer = 
{ "gsl_multimin_fdfminimizer_type", NULL,
  dao_gsl_multimin_fdfminimizer_type_Nums,
  dao_gsl_multimin_fdfminimizer_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multimin_fdfminimizer_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multimin_fdfminimizer_type_Typer = & gsl_multimin_fdfminimizer_type_Typer;
DaoType *dao_type_gsl_multimin_fdfminimizer_type = NULL;
static void dao_gsl_multimin_fdfminimizer_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer_type *self = (gsl_multimin_fdfminimizer_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_multimin_fdfminimizer_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer_type *self = (gsl_multimin_fdfminimizer_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_multimin_fdfminimizer_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer_type *self = (gsl_multimin_fdfminimizer_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multimin_fdfminimizer_type_gsl_multimin_fdfminimizer_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multimin_fdfminimizer_type *self = Dao_gsl_multimin_fdfminimizer_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multimin.h */


static DaoNumItem dao_gsl_multimin_fdfminimizer_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multimin_fdfminimizer_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_GETF_fdf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_SETF_f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_GETF_gradient( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multimin_fdfminimizer_gsl_multimin_fdfminimizer( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multimin_fdfminimizer_Meths[] = 
{
  { dao_gsl_multimin_fdfminimizer_GETF_type, ".type( self :gsl_multimin_fdfminimizer )=>gsl_multimin_fdfminimizer_type" },
  { dao_gsl_multimin_fdfminimizer_GETF_fdf, ".fdf( self :gsl_multimin_fdfminimizer )=>gsl_multimin_function_fdf_struct" },
  { dao_gsl_multimin_fdfminimizer_GETF_f, ".f( self :gsl_multimin_fdfminimizer )=>double" },
  { dao_gsl_multimin_fdfminimizer_SETF_f, ".f=( self :gsl_multimin_fdfminimizer, f :double )" },
  { dao_gsl_multimin_fdfminimizer_GETF_x, ".x( self :gsl_multimin_fdfminimizer )=>gsl_vector" },
  { dao_gsl_multimin_fdfminimizer_GETF_gradient, ".gradient( self :gsl_multimin_fdfminimizer )=>gsl_vector" },
  { dao_gsl_multimin_fdfminimizer_GETF_dx, ".dx( self :gsl_multimin_fdfminimizer )=>gsl_vector" },
  { dao_gsl_multimin_fdfminimizer_GETF_state, ".state( self :gsl_multimin_fdfminimizer )=>cdata" },
  { dao_gsl_multimin_fdfminimizer_gsl_multimin_fdfminimizer, "gsl_multimin_fdfminimizer(  )=>gsl_multimin_fdfminimizer" },
  { NULL, NULL }
};
static void Dao_gsl_multimin_fdfminimizer_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multimin_fdfminimizer_Typer = 
{ "gsl_multimin_fdfminimizer", NULL,
  dao_gsl_multimin_fdfminimizer_Nums,
  dao_gsl_multimin_fdfminimizer_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multimin_fdfminimizer_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multimin_fdfminimizer_Typer = & gsl_multimin_fdfminimizer_Typer;
DaoType *dao_type_gsl_multimin_fdfminimizer = NULL;
static void dao_gsl_multimin_fdfminimizer_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer *self = (gsl_multimin_fdfminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_multimin_fdfminimizer_type );
}
static void dao_gsl_multimin_fdfminimizer_GETF_fdf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer *self = (gsl_multimin_fdfminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->fdf, dao_type_gsl_multimin_function_fdf_struct );
}
static void dao_gsl_multimin_fdfminimizer_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer *self = (gsl_multimin_fdfminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer);
  DaoProcess_PutDouble( _proc, (double) self->f );
}
static void dao_gsl_multimin_fdfminimizer_SETF_f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer *self = (gsl_multimin_fdfminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer);
  self->f = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_multimin_fdfminimizer_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer *self = (gsl_multimin_fdfminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->x, dao_type_gsl_vector );
}
static void dao_gsl_multimin_fdfminimizer_GETF_gradient( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer *self = (gsl_multimin_fdfminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->gradient, dao_type_gsl_vector );
}
static void dao_gsl_multimin_fdfminimizer_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer *self = (gsl_multimin_fdfminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer);
  DaoProcess_WrapCdata( _proc, (void*) self->dx, dao_type_gsl_vector );
}
static void dao_gsl_multimin_fdfminimizer_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multimin_fdfminimizer *self = (gsl_multimin_fdfminimizer*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multimin_fdfminimizer);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_multimin_fdfminimizer_gsl_multimin_fdfminimizer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_multimin_fdfminimizer *self = Dao_gsl_multimin_fdfminimizer_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_multimin_fdfminimizer );
}
/* /usr/local/include/gsl/gsl_multiroots.h */


static DaoNumItem dao_gsl_multiroot_function_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multiroot_function_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_function_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_function_struct_gsl_multiroot_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multiroot_function_struct_Meths[] = 
{
  { dao_gsl_multiroot_function_struct_GETF_n, ".n( self :gsl_multiroot_function_struct )=>int" },
  { dao_gsl_multiroot_function_struct_SETF_n, ".n=( self :gsl_multiroot_function_struct, n :int )" },
  { dao_gsl_multiroot_function_struct_GETF_params, ".params( self :gsl_multiroot_function_struct )=>cdata" },
  { dao_gsl_multiroot_function_struct_gsl_multiroot_function_struct, "gsl_multiroot_function_struct(  )=>gsl_multiroot_function_struct" },
  { NULL, NULL }
};
static void Dao_gsl_multiroot_function_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multiroot_function_struct_Typer = 
{ "gsl_multiroot_function_struct", NULL,
  dao_gsl_multiroot_function_struct_Nums,
  dao_gsl_multiroot_function_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multiroot_function_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multiroot_function_struct_Typer = & gsl_multiroot_function_struct_Typer;
DaoType *dao_type_gsl_multiroot_function_struct = NULL;
static void dao_gsl_multiroot_function_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiroot_function_struct *self = (struct gsl_multiroot_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_function_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_multiroot_function_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiroot_function_struct *self = (struct gsl_multiroot_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_function_struct);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multiroot_function_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiroot_function_struct *self = (struct gsl_multiroot_function_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_function_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_multiroot_function_struct_gsl_multiroot_function_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multiroot_function_struct *self = Dao_gsl_multiroot_function_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multiroots.h */


static DaoNumItem dao_gsl_multiroot_fsolver_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multiroot_fsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fsolver_type_gsl_multiroot_fsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multiroot_fsolver_type_Meths[] = 
{
  { dao_gsl_multiroot_fsolver_type_GETF_name, ".name( self :gsl_multiroot_fsolver_type )=>string" },
  { dao_gsl_multiroot_fsolver_type_GETF_size, ".size( self :gsl_multiroot_fsolver_type )=>int" },
  { dao_gsl_multiroot_fsolver_type_SETF_size, ".size=( self :gsl_multiroot_fsolver_type, size :int )" },
  { dao_gsl_multiroot_fsolver_type_gsl_multiroot_fsolver_type, "gsl_multiroot_fsolver_type(  )=>gsl_multiroot_fsolver_type" },
  { NULL, NULL }
};
static void Dao_gsl_multiroot_fsolver_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multiroot_fsolver_type_Typer = 
{ "gsl_multiroot_fsolver_type", NULL,
  dao_gsl_multiroot_fsolver_type_Nums,
  dao_gsl_multiroot_fsolver_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multiroot_fsolver_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multiroot_fsolver_type_Typer = & gsl_multiroot_fsolver_type_Typer;
DaoType *dao_type_gsl_multiroot_fsolver_type = NULL;
static void dao_gsl_multiroot_fsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fsolver_type *self = (gsl_multiroot_fsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fsolver_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_multiroot_fsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fsolver_type *self = (gsl_multiroot_fsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fsolver_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_multiroot_fsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fsolver_type *self = (gsl_multiroot_fsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fsolver_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multiroot_fsolver_type_gsl_multiroot_fsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multiroot_fsolver_type *self = Dao_gsl_multiroot_fsolver_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multiroots.h */


static DaoNumItem dao_gsl_multiroot_fsolver_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multiroot_fsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fsolver_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fsolver_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fsolver_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fsolver_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fsolver_gsl_multiroot_fsolver( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multiroot_fsolver_Meths[] = 
{
  { dao_gsl_multiroot_fsolver_GETF_type, ".type( self :gsl_multiroot_fsolver )=>gsl_multiroot_fsolver_type" },
  { dao_gsl_multiroot_fsolver_GETF_function, ".function( self :gsl_multiroot_fsolver )=>gsl_multiroot_function_struct" },
  { dao_gsl_multiroot_fsolver_GETF_x, ".x( self :gsl_multiroot_fsolver )=>gsl_vector" },
  { dao_gsl_multiroot_fsolver_GETF_f, ".f( self :gsl_multiroot_fsolver )=>gsl_vector" },
  { dao_gsl_multiroot_fsolver_GETF_dx, ".dx( self :gsl_multiroot_fsolver )=>gsl_vector" },
  { dao_gsl_multiroot_fsolver_GETF_state, ".state( self :gsl_multiroot_fsolver )=>cdata" },
  { dao_gsl_multiroot_fsolver_gsl_multiroot_fsolver, "gsl_multiroot_fsolver(  )=>gsl_multiroot_fsolver" },
  { NULL, NULL }
};
static void Dao_gsl_multiroot_fsolver_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multiroot_fsolver_Typer = 
{ "gsl_multiroot_fsolver", NULL,
  dao_gsl_multiroot_fsolver_Nums,
  dao_gsl_multiroot_fsolver_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multiroot_fsolver_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multiroot_fsolver_Typer = & gsl_multiroot_fsolver_Typer;
DaoType *dao_type_gsl_multiroot_fsolver = NULL;
static void dao_gsl_multiroot_fsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fsolver *self = (gsl_multiroot_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_multiroot_fsolver_type );
}
static void dao_gsl_multiroot_fsolver_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fsolver *self = (gsl_multiroot_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->function, dao_type_gsl_multiroot_function_struct );
}
static void dao_gsl_multiroot_fsolver_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fsolver *self = (gsl_multiroot_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->x, dao_type_gsl_vector );
}
static void dao_gsl_multiroot_fsolver_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fsolver *self = (gsl_multiroot_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->f, dao_type_gsl_vector );
}
static void dao_gsl_multiroot_fsolver_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fsolver *self = (gsl_multiroot_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->dx, dao_type_gsl_vector );
}
static void dao_gsl_multiroot_fsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fsolver *self = (gsl_multiroot_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fsolver);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_multiroot_fsolver_gsl_multiroot_fsolver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_multiroot_fsolver *self = Dao_gsl_multiroot_fsolver_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_multiroot_fsolver );
}
/* /usr/local/include/gsl/gsl_multiroots.h */


static DaoNumItem dao_gsl_multiroot_function_fdf_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multiroot_function_fdf_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_function_fdf_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_function_fdf_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_function_fdf_struct_gsl_multiroot_function_fdf_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multiroot_function_fdf_struct_Meths[] = 
{
  { dao_gsl_multiroot_function_fdf_struct_GETF_n, ".n( self :gsl_multiroot_function_fdf_struct )=>int" },
  { dao_gsl_multiroot_function_fdf_struct_SETF_n, ".n=( self :gsl_multiroot_function_fdf_struct, n :int )" },
  { dao_gsl_multiroot_function_fdf_struct_GETF_params, ".params( self :gsl_multiroot_function_fdf_struct )=>cdata" },
  { dao_gsl_multiroot_function_fdf_struct_gsl_multiroot_function_fdf_struct, "gsl_multiroot_function_fdf_struct(  )=>gsl_multiroot_function_fdf_struct" },
  { NULL, NULL }
};
static void Dao_gsl_multiroot_function_fdf_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multiroot_function_fdf_struct_Typer = 
{ "gsl_multiroot_function_fdf_struct", NULL,
  dao_gsl_multiroot_function_fdf_struct_Nums,
  dao_gsl_multiroot_function_fdf_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multiroot_function_fdf_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multiroot_function_fdf_struct_Typer = & gsl_multiroot_function_fdf_struct_Typer;
DaoType *dao_type_gsl_multiroot_function_fdf_struct = NULL;
static void dao_gsl_multiroot_function_fdf_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiroot_function_fdf_struct *self = (struct gsl_multiroot_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_function_fdf_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_multiroot_function_fdf_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiroot_function_fdf_struct *self = (struct gsl_multiroot_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_function_fdf_struct);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multiroot_function_fdf_struct_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiroot_function_fdf_struct *self = (struct gsl_multiroot_function_fdf_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_function_fdf_struct);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_multiroot_function_fdf_struct_gsl_multiroot_function_fdf_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multiroot_function_fdf_struct *self = Dao_gsl_multiroot_function_fdf_struct_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multiroots.h */


static DaoNumItem dao_gsl_multiroot_fdfsolver_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multiroot_fdfsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_type_gsl_multiroot_fdfsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multiroot_fdfsolver_type_Meths[] = 
{
  { dao_gsl_multiroot_fdfsolver_type_GETF_name, ".name( self :gsl_multiroot_fdfsolver_type )=>string" },
  { dao_gsl_multiroot_fdfsolver_type_GETF_size, ".size( self :gsl_multiroot_fdfsolver_type )=>int" },
  { dao_gsl_multiroot_fdfsolver_type_SETF_size, ".size=( self :gsl_multiroot_fdfsolver_type, size :int )" },
  { dao_gsl_multiroot_fdfsolver_type_gsl_multiroot_fdfsolver_type, "gsl_multiroot_fdfsolver_type(  )=>gsl_multiroot_fdfsolver_type" },
  { NULL, NULL }
};
static void Dao_gsl_multiroot_fdfsolver_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multiroot_fdfsolver_type_Typer = 
{ "gsl_multiroot_fdfsolver_type", NULL,
  dao_gsl_multiroot_fdfsolver_type_Nums,
  dao_gsl_multiroot_fdfsolver_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multiroot_fdfsolver_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multiroot_fdfsolver_type_Typer = & gsl_multiroot_fdfsolver_type_Typer;
DaoType *dao_type_gsl_multiroot_fdfsolver_type = NULL;
static void dao_gsl_multiroot_fdfsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver_type *self = (gsl_multiroot_fdfsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_multiroot_fdfsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver_type *self = (gsl_multiroot_fdfsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_multiroot_fdfsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver_type *self = (gsl_multiroot_fdfsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multiroot_fdfsolver_type_gsl_multiroot_fdfsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_multiroot_fdfsolver_type *self = Dao_gsl_multiroot_fdfsolver_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_multiroots.h */


static DaoNumItem dao_gsl_multiroot_fdfsolver_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multiroot_fdfsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_GETF_fdf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_GETF_J( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiroot_fdfsolver_gsl_multiroot_fdfsolver( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multiroot_fdfsolver_Meths[] = 
{
  { dao_gsl_multiroot_fdfsolver_GETF_type, ".type( self :gsl_multiroot_fdfsolver )=>gsl_multiroot_fdfsolver_type" },
  { dao_gsl_multiroot_fdfsolver_GETF_fdf, ".fdf( self :gsl_multiroot_fdfsolver )=>gsl_multiroot_function_fdf_struct" },
  { dao_gsl_multiroot_fdfsolver_GETF_x, ".x( self :gsl_multiroot_fdfsolver )=>gsl_vector" },
  { dao_gsl_multiroot_fdfsolver_GETF_f, ".f( self :gsl_multiroot_fdfsolver )=>gsl_vector" },
  { dao_gsl_multiroot_fdfsolver_GETF_J, ".J( self :gsl_multiroot_fdfsolver )=>gsl_matrix" },
  { dao_gsl_multiroot_fdfsolver_GETF_dx, ".dx( self :gsl_multiroot_fdfsolver )=>gsl_vector" },
  { dao_gsl_multiroot_fdfsolver_GETF_state, ".state( self :gsl_multiroot_fdfsolver )=>cdata" },
  { dao_gsl_multiroot_fdfsolver_gsl_multiroot_fdfsolver, "gsl_multiroot_fdfsolver(  )=>gsl_multiroot_fdfsolver" },
  { NULL, NULL }
};
static void Dao_gsl_multiroot_fdfsolver_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multiroot_fdfsolver_Typer = 
{ "gsl_multiroot_fdfsolver", NULL,
  dao_gsl_multiroot_fdfsolver_Nums,
  dao_gsl_multiroot_fdfsolver_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multiroot_fdfsolver_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multiroot_fdfsolver_Typer = & gsl_multiroot_fdfsolver_Typer;
DaoType *dao_type_gsl_multiroot_fdfsolver = NULL;
static void dao_gsl_multiroot_fdfsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver *self = (gsl_multiroot_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_multiroot_fdfsolver_type );
}
static void dao_gsl_multiroot_fdfsolver_GETF_fdf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver *self = (gsl_multiroot_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->fdf, dao_type_gsl_multiroot_function_fdf_struct );
}
static void dao_gsl_multiroot_fdfsolver_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver *self = (gsl_multiroot_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->x, dao_type_gsl_vector );
}
static void dao_gsl_multiroot_fdfsolver_GETF_f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver *self = (gsl_multiroot_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->f, dao_type_gsl_vector );
}
static void dao_gsl_multiroot_fdfsolver_GETF_J( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver *self = (gsl_multiroot_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->J, dao_type_gsl_matrix );
}
static void dao_gsl_multiroot_fdfsolver_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver *self = (gsl_multiroot_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->dx, dao_type_gsl_vector );
}
static void dao_gsl_multiroot_fdfsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_multiroot_fdfsolver *self = (gsl_multiroot_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiroot_fdfsolver);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_multiroot_fdfsolver_gsl_multiroot_fdfsolver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_multiroot_fdfsolver *self = Dao_gsl_multiroot_fdfsolver_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_multiroot_fdfsolver );
}
/* /usr/local/include/gsl/gsl_multiset.h */


static DaoNumItem dao_gsl_multiset_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_multiset_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiset_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiset_struct_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiset_struct_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiset_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_multiset_struct_gsl_multiset_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_multiset_struct_Meths[] = 
{
  { dao_gsl_multiset_struct_GETF_n, ".n( self :gsl_multiset_struct )=>int" },
  { dao_gsl_multiset_struct_SETF_n, ".n=( self :gsl_multiset_struct, n :int )" },
  { dao_gsl_multiset_struct_GETF_k, ".k( self :gsl_multiset_struct )=>int" },
  { dao_gsl_multiset_struct_SETF_k, ".k=( self :gsl_multiset_struct, k :int )" },
  { dao_gsl_multiset_struct_GETF_data, ".data( self :gsl_multiset_struct )=>int" },
  { dao_gsl_multiset_struct_gsl_multiset_struct, "gsl_multiset_struct(  )=>gsl_multiset_struct" },
  { NULL, NULL }
};
static void Dao_gsl_multiset_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_multiset_struct_Typer = 
{ "gsl_multiset_struct", NULL,
  dao_gsl_multiset_struct_Nums,
  dao_gsl_multiset_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_multiset_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_multiset_struct_Typer = & gsl_multiset_struct_Typer;
DaoType *dao_type_gsl_multiset_struct = NULL;
static void dao_gsl_multiset_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiset_struct *self = (struct gsl_multiset_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiset_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_multiset_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiset_struct *self = (struct gsl_multiset_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiset_struct);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multiset_struct_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiset_struct *self = (struct gsl_multiset_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiset_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->k );
}
static void dao_gsl_multiset_struct_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiset_struct *self = (struct gsl_multiset_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiset_struct);
  self->k = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_multiset_struct_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_multiset_struct *self = (struct gsl_multiset_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_multiset_struct);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->data, 0 );
}
static void dao_gsl_multiset_struct_gsl_multiset_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_multiset_struct *self = Dao_gsl_multiset_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_multiset_struct );
}
/* /usr/local/include/gsl/gsl_ntuple.h */


static DaoNumItem dao_gsl_ntuple_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_ntuple_GETF_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ntuple_GETF_ntuple_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ntuple_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ntuple_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ntuple_gsl_ntuple( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_ntuple_Meths[] = 
{
  { dao_gsl_ntuple_GETF_file, ".file( self :gsl_ntuple )=>io::stream" },
  { dao_gsl_ntuple_GETF_ntuple_data, ".ntuple_data( self :gsl_ntuple )=>cdata" },
  { dao_gsl_ntuple_GETF_size, ".size( self :gsl_ntuple )=>int" },
  { dao_gsl_ntuple_SETF_size, ".size=( self :gsl_ntuple, size :int )" },
  { dao_gsl_ntuple_gsl_ntuple, "gsl_ntuple(  )=>gsl_ntuple" },
  { NULL, NULL }
};
static void Dao_gsl_ntuple_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_ntuple_Typer = 
{ "gsl_ntuple", NULL,
  dao_gsl_ntuple_Nums,
  dao_gsl_ntuple_Meths,
  { NULL },
  { NULL },
  Dao_gsl_ntuple_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_ntuple_Typer = & gsl_ntuple_Typer;
DaoType *dao_type_gsl_ntuple = NULL;
static void dao_gsl_ntuple_GETF_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ntuple *self = (gsl_ntuple*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ntuple);
  DaoProcess_PutFile( _proc, (FILE*) self->file );
}
static void dao_gsl_ntuple_GETF_ntuple_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ntuple *self = (gsl_ntuple*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ntuple);
  DaoProcess_PutCdata( _proc, (void*) self->ntuple_data, NULL );
}
static void dao_gsl_ntuple_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ntuple *self = (gsl_ntuple*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ntuple);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_ntuple_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ntuple *self = (gsl_ntuple*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ntuple);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_ntuple_gsl_ntuple( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_ntuple *self = Dao_gsl_ntuple_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_ntuple );
}
/* /usr/local/include/gsl/gsl_ntuple.h */


static DaoNumItem dao_gsl_ntuple_select_fn_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_ntuple_select_fn_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ntuple_select_fn_gsl_ntuple_select_fn( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_ntuple_select_fn_Meths[] = 
{
  { dao_gsl_ntuple_select_fn_GETF_params, ".params( self :gsl_ntuple_select_fn )=>cdata" },
  { dao_gsl_ntuple_select_fn_gsl_ntuple_select_fn, "gsl_ntuple_select_fn(  )=>gsl_ntuple_select_fn" },
  { NULL, NULL }
};
static void Dao_gsl_ntuple_select_fn_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_ntuple_select_fn_Typer = 
{ "gsl_ntuple_select_fn", NULL,
  dao_gsl_ntuple_select_fn_Nums,
  dao_gsl_ntuple_select_fn_Meths,
  { NULL },
  { NULL },
  Dao_gsl_ntuple_select_fn_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_ntuple_select_fn_Typer = & gsl_ntuple_select_fn_Typer;
DaoType *dao_type_gsl_ntuple_select_fn = NULL;
static void dao_gsl_ntuple_select_fn_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ntuple_select_fn *self = (gsl_ntuple_select_fn*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ntuple_select_fn);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_ntuple_select_fn_gsl_ntuple_select_fn( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_ntuple_select_fn *self = Dao_gsl_ntuple_select_fn_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_ntuple.h */


static DaoNumItem dao_gsl_ntuple_value_fn_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_ntuple_value_fn_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ntuple_value_fn_gsl_ntuple_value_fn( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_ntuple_value_fn_Meths[] = 
{
  { dao_gsl_ntuple_value_fn_GETF_params, ".params( self :gsl_ntuple_value_fn )=>cdata" },
  { dao_gsl_ntuple_value_fn_gsl_ntuple_value_fn, "gsl_ntuple_value_fn(  )=>gsl_ntuple_value_fn" },
  { NULL, NULL }
};
static void Dao_gsl_ntuple_value_fn_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_ntuple_value_fn_Typer = 
{ "gsl_ntuple_value_fn", NULL,
  dao_gsl_ntuple_value_fn_Nums,
  dao_gsl_ntuple_value_fn_Meths,
  { NULL },
  { NULL },
  Dao_gsl_ntuple_value_fn_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_ntuple_value_fn_Typer = & gsl_ntuple_value_fn_Typer;
DaoType *dao_type_gsl_ntuple_value_fn = NULL;
static void dao_gsl_ntuple_value_fn_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ntuple_value_fn *self = (gsl_ntuple_value_fn*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ntuple_value_fn);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_ntuple_value_fn_gsl_ntuple_value_fn( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_ntuple_value_fn *self = Dao_gsl_ntuple_value_fn_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_odeiv.h */


static DaoNumItem dao_gsl_odeiv_system_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv_system_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_system_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_system_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_system_gsl_odeiv_system( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv_system_Meths[] = 
{
  { dao_gsl_odeiv_system_GETF_dimension, ".dimension( self :gsl_odeiv_system )=>int" },
  { dao_gsl_odeiv_system_SETF_dimension, ".dimension=( self :gsl_odeiv_system, dimension :int )" },
  { dao_gsl_odeiv_system_GETF_params, ".params( self :gsl_odeiv_system )=>any" },
  { dao_gsl_odeiv_system_gsl_odeiv_system, "gsl_odeiv_system(  )=>gsl_odeiv_system" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv_system_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv_system_Typer = 
{ "gsl_odeiv_system", NULL,
  dao_gsl_odeiv_system_Nums,
  dao_gsl_odeiv_system_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv_system_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv_system_Typer = & gsl_odeiv_system_Typer;
DaoType *dao_type_gsl_odeiv_system = NULL;
static void dao_gsl_odeiv_system_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_system *self = (gsl_odeiv_system*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_system);
  DaoProcess_PutInteger( _proc, (daoint) self->dimension );
}
static void dao_gsl_odeiv_system_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_system *self = (gsl_odeiv_system*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_system);
  self->dimension = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv_system_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_system *self = (gsl_odeiv_system*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_system);
}
static void dao_gsl_odeiv_system_gsl_odeiv_system( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_odeiv_system *self = Dao_gsl_odeiv_system_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_odeiv.h */


static DaoNumItem dao_gsl_odeiv_step_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv_step_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_step_type_GETF_can_use_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_step_type_SETF_can_use_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_step_type_GETF_gives_exact_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_step_type_SETF_gives_exact_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_step_type_gsl_odeiv_step_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv_step_type_Meths[] = 
{
  { dao_gsl_odeiv_step_type_GETF_name, ".name( self :gsl_odeiv_step_type )=>string" },
  { dao_gsl_odeiv_step_type_GETF_can_use_dydt_in, ".can_use_dydt_in( self :gsl_odeiv_step_type )=>int" },
  { dao_gsl_odeiv_step_type_SETF_can_use_dydt_in, ".can_use_dydt_in=( self :gsl_odeiv_step_type, can_use_dydt_in :int )" },
  { dao_gsl_odeiv_step_type_GETF_gives_exact_dydt_out, ".gives_exact_dydt_out( self :gsl_odeiv_step_type )=>int" },
  { dao_gsl_odeiv_step_type_SETF_gives_exact_dydt_out, ".gives_exact_dydt_out=( self :gsl_odeiv_step_type, gives_exact_dydt_out :int )" },
  { dao_gsl_odeiv_step_type_gsl_odeiv_step_type, "gsl_odeiv_step_type(  )=>gsl_odeiv_step_type" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv_step_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv_step_type_Typer = 
{ "gsl_odeiv_step_type", NULL,
  dao_gsl_odeiv_step_type_Nums,
  dao_gsl_odeiv_step_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv_step_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv_step_type_Typer = & gsl_odeiv_step_type_Typer;
DaoType *dao_type_gsl_odeiv_step_type = NULL;
static void dao_gsl_odeiv_step_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_step_type *self = (gsl_odeiv_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_step_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_odeiv_step_type_GETF_can_use_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_step_type *self = (gsl_odeiv_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_step_type);
  DaoProcess_PutInteger( _proc, (daoint) self->can_use_dydt_in );
}
static void dao_gsl_odeiv_step_type_SETF_can_use_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_step_type *self = (gsl_odeiv_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_step_type);
  self->can_use_dydt_in = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv_step_type_GETF_gives_exact_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_step_type *self = (gsl_odeiv_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_step_type);
  DaoProcess_PutInteger( _proc, (daoint) self->gives_exact_dydt_out );
}
static void dao_gsl_odeiv_step_type_SETF_gives_exact_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_step_type *self = (gsl_odeiv_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_step_type);
  self->gives_exact_dydt_out = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv_step_type_gsl_odeiv_step_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_odeiv_step_type *self = Dao_gsl_odeiv_step_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_odeiv.h */


static DaoNumItem dao_gsl_odeiv_step_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv_step_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_step_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_step_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_step_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_step_gsl_odeiv_step( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv_step_Meths[] = 
{
  { dao_gsl_odeiv_step_GETF_type, ".type( self :gsl_odeiv_step )=>gsl_odeiv_step_type" },
  { dao_gsl_odeiv_step_GETF_dimension, ".dimension( self :gsl_odeiv_step )=>int" },
  { dao_gsl_odeiv_step_SETF_dimension, ".dimension=( self :gsl_odeiv_step, dimension :int )" },
  { dao_gsl_odeiv_step_GETF_state, ".state( self :gsl_odeiv_step )=>cdata" },
  { dao_gsl_odeiv_step_gsl_odeiv_step, "gsl_odeiv_step(  )=>gsl_odeiv_step" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv_step_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv_step_Typer = 
{ "gsl_odeiv_step", NULL,
  dao_gsl_odeiv_step_Nums,
  dao_gsl_odeiv_step_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv_step_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv_step_Typer = & gsl_odeiv_step_Typer;
DaoType *dao_type_gsl_odeiv_step = NULL;
static void dao_gsl_odeiv_step_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_step *self = (gsl_odeiv_step*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_step);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_odeiv_step_type );
}
static void dao_gsl_odeiv_step_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_step *self = (gsl_odeiv_step*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_step);
  DaoProcess_PutInteger( _proc, (daoint) self->dimension );
}
static void dao_gsl_odeiv_step_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_step *self = (gsl_odeiv_step*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_step);
  self->dimension = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv_step_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_step *self = (gsl_odeiv_step*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_step);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_odeiv_step_gsl_odeiv_step( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_odeiv_step *self = Dao_gsl_odeiv_step_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_odeiv_step );
}
/* /usr/local/include/gsl/gsl_odeiv.h */


static DaoNumItem dao_gsl_odeiv_control_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv_control_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_control_type_gsl_odeiv_control_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv_control_type_Meths[] = 
{
  { dao_gsl_odeiv_control_type_GETF_name, ".name( self :gsl_odeiv_control_type )=>string" },
  { dao_gsl_odeiv_control_type_gsl_odeiv_control_type, "gsl_odeiv_control_type(  )=>gsl_odeiv_control_type" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv_control_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv_control_type_Typer = 
{ "gsl_odeiv_control_type", NULL,
  dao_gsl_odeiv_control_type_Nums,
  dao_gsl_odeiv_control_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv_control_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv_control_type_Typer = & gsl_odeiv_control_type_Typer;
DaoType *dao_type_gsl_odeiv_control_type = NULL;
static void dao_gsl_odeiv_control_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_control_type *self = (gsl_odeiv_control_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_control_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_odeiv_control_type_gsl_odeiv_control_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_odeiv_control_type *self = Dao_gsl_odeiv_control_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_odeiv.h */


static DaoNumItem dao_gsl_odeiv_control_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv_control_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_control_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_control_gsl_odeiv_control( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv_control_Meths[] = 
{
  { dao_gsl_odeiv_control_GETF_type, ".type( self :gsl_odeiv_control )=>gsl_odeiv_control_type" },
  { dao_gsl_odeiv_control_GETF_state, ".state( self :gsl_odeiv_control )=>cdata" },
  { dao_gsl_odeiv_control_gsl_odeiv_control, "gsl_odeiv_control(  )=>gsl_odeiv_control" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv_control_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv_control_Typer = 
{ "gsl_odeiv_control", NULL,
  dao_gsl_odeiv_control_Nums,
  dao_gsl_odeiv_control_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv_control_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv_control_Typer = & gsl_odeiv_control_Typer;
DaoType *dao_type_gsl_odeiv_control = NULL;
static void dao_gsl_odeiv_control_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_control *self = (gsl_odeiv_control*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_control);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_odeiv_control_type );
}
static void dao_gsl_odeiv_control_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_control *self = (gsl_odeiv_control*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_control);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_odeiv_control_gsl_odeiv_control( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_odeiv_control *self = Dao_gsl_odeiv_control_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_odeiv_control );
}
/* /usr/local/include/gsl/gsl_odeiv.h */


static DaoNumItem dao_gsl_odeiv_evolve_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv_evolve_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_GETF_y0( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_GETF_yerr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_GETF_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_GETF_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_GETF_last_step( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_SETF_last_step( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_GETF_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_SETF_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_GETF_failed_steps( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_SETF_failed_steps( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv_evolve_gsl_odeiv_evolve( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv_evolve_Meths[] = 
{
  { dao_gsl_odeiv_evolve_GETF_dimension, ".dimension( self :gsl_odeiv_evolve )=>int" },
  { dao_gsl_odeiv_evolve_SETF_dimension, ".dimension=( self :gsl_odeiv_evolve, dimension :int )" },
  { dao_gsl_odeiv_evolve_GETF_y0, ".y0( self :gsl_odeiv_evolve )=>double" },
  { dao_gsl_odeiv_evolve_GETF_yerr, ".yerr( self :gsl_odeiv_evolve )=>double" },
  { dao_gsl_odeiv_evolve_GETF_dydt_in, ".dydt_in( self :gsl_odeiv_evolve )=>double" },
  { dao_gsl_odeiv_evolve_GETF_dydt_out, ".dydt_out( self :gsl_odeiv_evolve )=>double" },
  { dao_gsl_odeiv_evolve_GETF_last_step, ".last_step( self :gsl_odeiv_evolve )=>double" },
  { dao_gsl_odeiv_evolve_SETF_last_step, ".last_step=( self :gsl_odeiv_evolve, last_step :double )" },
  { dao_gsl_odeiv_evolve_GETF_count, ".count( self :gsl_odeiv_evolve )=>int" },
  { dao_gsl_odeiv_evolve_SETF_count, ".count=( self :gsl_odeiv_evolve, count :int )" },
  { dao_gsl_odeiv_evolve_GETF_failed_steps, ".failed_steps( self :gsl_odeiv_evolve )=>int" },
  { dao_gsl_odeiv_evolve_SETF_failed_steps, ".failed_steps=( self :gsl_odeiv_evolve, failed_steps :int )" },
  { dao_gsl_odeiv_evolve_gsl_odeiv_evolve, "gsl_odeiv_evolve(  )=>gsl_odeiv_evolve" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv_evolve_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv_evolve_Typer = 
{ "gsl_odeiv_evolve", NULL,
  dao_gsl_odeiv_evolve_Nums,
  dao_gsl_odeiv_evolve_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv_evolve_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv_evolve_Typer = & gsl_odeiv_evolve_Typer;
DaoType *dao_type_gsl_odeiv_evolve = NULL;
static void dao_gsl_odeiv_evolve_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  DaoProcess_PutInteger( _proc, (daoint) self->dimension );
}
static void dao_gsl_odeiv_evolve_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  self->dimension = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv_evolve_GETF_y0( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  DaoProcess_PutVectorD( _proc, (double*) self->y0, 0 );
}
static void dao_gsl_odeiv_evolve_GETF_yerr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  DaoProcess_PutVectorD( _proc, (double*) self->yerr, 0 );
}
static void dao_gsl_odeiv_evolve_GETF_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  DaoProcess_PutVectorD( _proc, (double*) self->dydt_in, 0 );
}
static void dao_gsl_odeiv_evolve_GETF_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  DaoProcess_PutVectorD( _proc, (double*) self->dydt_out, 0 );
}
static void dao_gsl_odeiv_evolve_GETF_last_step( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  DaoProcess_PutDouble( _proc, (double) self->last_step );
}
static void dao_gsl_odeiv_evolve_SETF_last_step( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  self->last_step = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_odeiv_evolve_GETF_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  DaoProcess_PutInteger( _proc, (daoint) self->count );
}
static void dao_gsl_odeiv_evolve_SETF_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  self->count = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv_evolve_GETF_failed_steps( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  DaoProcess_PutInteger( _proc, (daoint) self->failed_steps );
}
static void dao_gsl_odeiv_evolve_SETF_failed_steps( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv_evolve *self = (gsl_odeiv_evolve*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv_evolve);
  self->failed_steps = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv_evolve_gsl_odeiv_evolve( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_odeiv_evolve *self = Dao_gsl_odeiv_evolve_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_odeiv_evolve );
}
/* /usr/local/include/gsl/gsl_odeiv2.h */


static DaoNumItem dao_gsl_odeiv2_system_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv2_system_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_system_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_system_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_system_gsl_odeiv2_system( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv2_system_Meths[] = 
{
  { dao_gsl_odeiv2_system_GETF_dimension, ".dimension( self :gsl_odeiv2_system )=>int" },
  { dao_gsl_odeiv2_system_SETF_dimension, ".dimension=( self :gsl_odeiv2_system, dimension :int )" },
  { dao_gsl_odeiv2_system_GETF_params, ".params( self :gsl_odeiv2_system )=>cdata" },
  { dao_gsl_odeiv2_system_gsl_odeiv2_system, "gsl_odeiv2_system(  )=>gsl_odeiv2_system" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv2_system_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv2_system_Typer = 
{ "gsl_odeiv2_system", NULL,
  dao_gsl_odeiv2_system_Nums,
  dao_gsl_odeiv2_system_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv2_system_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv2_system_Typer = & gsl_odeiv2_system_Typer;
DaoType *dao_type_gsl_odeiv2_system = NULL;
static void dao_gsl_odeiv2_system_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv2_system *self = (gsl_odeiv2_system*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_system);
  DaoProcess_PutInteger( _proc, (daoint) self->dimension );
}
static void dao_gsl_odeiv2_system_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv2_system *self = (gsl_odeiv2_system*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_system);
  self->dimension = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv2_system_GETF_params( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv2_system *self = (gsl_odeiv2_system*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_system);
  DaoProcess_PutCdata( _proc, (void*) self->params, NULL );
}
static void dao_gsl_odeiv2_system_gsl_odeiv2_system( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_odeiv2_system *self = Dao_gsl_odeiv2_system_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_odeiv2.h */


static DaoNumItem dao_gsl_odeiv2_step_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv2_step_struct_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_step_struct_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_step_struct_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_step_struct_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_step_struct_gsl_odeiv2_step_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv2_step_struct_Meths[] = 
{
  { dao_gsl_odeiv2_step_struct_GETF_type, ".type( self :gsl_odeiv2_step_struct )=>gsl_odeiv2_step_type" },
  { dao_gsl_odeiv2_step_struct_GETF_dimension, ".dimension( self :gsl_odeiv2_step_struct )=>int" },
  { dao_gsl_odeiv2_step_struct_SETF_dimension, ".dimension=( self :gsl_odeiv2_step_struct, dimension :int )" },
  { dao_gsl_odeiv2_step_struct_GETF_state, ".state( self :gsl_odeiv2_step_struct )=>cdata" },
  { dao_gsl_odeiv2_step_struct_gsl_odeiv2_step_struct, "gsl_odeiv2_step_struct(  )=>gsl_odeiv2_step_struct" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv2_step_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv2_step_struct_Typer = 
{ "gsl_odeiv2_step_struct", NULL,
  dao_gsl_odeiv2_step_struct_Nums,
  dao_gsl_odeiv2_step_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv2_step_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv2_step_struct_Typer = & gsl_odeiv2_step_struct_Typer;
DaoType *dao_type_gsl_odeiv2_step_struct = NULL;
static void dao_gsl_odeiv2_step_struct_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_step_struct *self = (struct gsl_odeiv2_step_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_step_struct);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_odeiv2_step_type );
}
static void dao_gsl_odeiv2_step_struct_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_step_struct *self = (struct gsl_odeiv2_step_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_step_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->dimension );
}
static void dao_gsl_odeiv2_step_struct_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_step_struct *self = (struct gsl_odeiv2_step_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_step_struct);
  self->dimension = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv2_step_struct_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_step_struct *self = (struct gsl_odeiv2_step_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_step_struct);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_odeiv2_step_struct_gsl_odeiv2_step_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_odeiv2_step_struct *self = Dao_gsl_odeiv2_step_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_odeiv2_step_struct );
}
/* /usr/local/include/gsl/gsl_odeiv2.h */


static DaoNumItem dao_gsl_odeiv2_control_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv2_control_struct_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_control_struct_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_control_struct_gsl_odeiv2_control_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv2_control_struct_Meths[] = 
{
  { dao_gsl_odeiv2_control_struct_GETF_type, ".type( self :gsl_odeiv2_control_struct )=>gsl_odeiv2_control_type" },
  { dao_gsl_odeiv2_control_struct_GETF_state, ".state( self :gsl_odeiv2_control_struct )=>cdata" },
  { dao_gsl_odeiv2_control_struct_gsl_odeiv2_control_struct, "gsl_odeiv2_control_struct(  )=>gsl_odeiv2_control_struct" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv2_control_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv2_control_struct_Typer = 
{ "gsl_odeiv2_control_struct", NULL,
  dao_gsl_odeiv2_control_struct_Nums,
  dao_gsl_odeiv2_control_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv2_control_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv2_control_struct_Typer = & gsl_odeiv2_control_struct_Typer;
DaoType *dao_type_gsl_odeiv2_control_struct = NULL;
static void dao_gsl_odeiv2_control_struct_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_control_struct *self = (struct gsl_odeiv2_control_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_control_struct);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_odeiv2_control_type );
}
static void dao_gsl_odeiv2_control_struct_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_control_struct *self = (struct gsl_odeiv2_control_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_control_struct);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_odeiv2_control_struct_gsl_odeiv2_control_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_odeiv2_control_struct *self = Dao_gsl_odeiv2_control_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_odeiv2_control_struct );
}
/* /usr/local/include/gsl/gsl_odeiv2.h */


static DaoNumItem dao_gsl_odeiv2_evolve_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv2_evolve_struct_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_GETF_y0( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_GETF_yerr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_GETF_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_GETF_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_GETF_last_step( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_SETF_last_step( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_GETF_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_SETF_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_GETF_failed_steps( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_SETF_failed_steps( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_GETF_driver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_evolve_struct_gsl_odeiv2_evolve_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv2_evolve_struct_Meths[] = 
{
  { dao_gsl_odeiv2_evolve_struct_GETF_dimension, ".dimension( self :gsl_odeiv2_evolve_struct )=>int" },
  { dao_gsl_odeiv2_evolve_struct_SETF_dimension, ".dimension=( self :gsl_odeiv2_evolve_struct, dimension :int )" },
  { dao_gsl_odeiv2_evolve_struct_GETF_y0, ".y0( self :gsl_odeiv2_evolve_struct )=>double" },
  { dao_gsl_odeiv2_evolve_struct_GETF_yerr, ".yerr( self :gsl_odeiv2_evolve_struct )=>double" },
  { dao_gsl_odeiv2_evolve_struct_GETF_dydt_in, ".dydt_in( self :gsl_odeiv2_evolve_struct )=>double" },
  { dao_gsl_odeiv2_evolve_struct_GETF_dydt_out, ".dydt_out( self :gsl_odeiv2_evolve_struct )=>double" },
  { dao_gsl_odeiv2_evolve_struct_GETF_last_step, ".last_step( self :gsl_odeiv2_evolve_struct )=>double" },
  { dao_gsl_odeiv2_evolve_struct_SETF_last_step, ".last_step=( self :gsl_odeiv2_evolve_struct, last_step :double )" },
  { dao_gsl_odeiv2_evolve_struct_GETF_count, ".count( self :gsl_odeiv2_evolve_struct )=>int" },
  { dao_gsl_odeiv2_evolve_struct_SETF_count, ".count=( self :gsl_odeiv2_evolve_struct, count :int )" },
  { dao_gsl_odeiv2_evolve_struct_GETF_failed_steps, ".failed_steps( self :gsl_odeiv2_evolve_struct )=>int" },
  { dao_gsl_odeiv2_evolve_struct_SETF_failed_steps, ".failed_steps=( self :gsl_odeiv2_evolve_struct, failed_steps :int )" },
  { dao_gsl_odeiv2_evolve_struct_GETF_driver, ".driver( self :gsl_odeiv2_evolve_struct )=>gsl_odeiv2_driver_struct" },
  { dao_gsl_odeiv2_evolve_struct_gsl_odeiv2_evolve_struct, "gsl_odeiv2_evolve_struct(  )=>gsl_odeiv2_evolve_struct" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv2_evolve_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv2_evolve_struct_Typer = 
{ "gsl_odeiv2_evolve_struct", NULL,
  dao_gsl_odeiv2_evolve_struct_Nums,
  dao_gsl_odeiv2_evolve_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv2_evolve_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv2_evolve_struct_Typer = & gsl_odeiv2_evolve_struct_Typer;
DaoType *dao_type_gsl_odeiv2_evolve_struct = NULL;
static void dao_gsl_odeiv2_evolve_struct_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->dimension );
}
static void dao_gsl_odeiv2_evolve_struct_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  self->dimension = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv2_evolve_struct_GETF_y0( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->y0, 0 );
}
static void dao_gsl_odeiv2_evolve_struct_GETF_yerr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->yerr, 0 );
}
static void dao_gsl_odeiv2_evolve_struct_GETF_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->dydt_in, 0 );
}
static void dao_gsl_odeiv2_evolve_struct_GETF_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  DaoProcess_PutVectorD( _proc, (double*) self->dydt_out, 0 );
}
static void dao_gsl_odeiv2_evolve_struct_GETF_last_step( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  DaoProcess_PutDouble( _proc, (double) self->last_step );
}
static void dao_gsl_odeiv2_evolve_struct_SETF_last_step( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  self->last_step = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_odeiv2_evolve_struct_GETF_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->count );
}
static void dao_gsl_odeiv2_evolve_struct_SETF_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  self->count = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv2_evolve_struct_GETF_failed_steps( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->failed_steps );
}
static void dao_gsl_odeiv2_evolve_struct_SETF_failed_steps( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  self->failed_steps = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv2_evolve_struct_GETF_driver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_evolve_struct *self = (struct gsl_odeiv2_evolve_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_evolve_struct);
  DaoProcess_WrapCdata( _proc, (void*) self->driver, dao_type_gsl_odeiv2_driver_struct );
}
static void dao_gsl_odeiv2_evolve_struct_gsl_odeiv2_evolve_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_odeiv2_evolve_struct *self = Dao_gsl_odeiv2_evolve_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_odeiv2_evolve_struct );
}
/* /usr/local/include/gsl/gsl_odeiv2.h */


static DaoNumItem dao_gsl_odeiv2_driver_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv2_driver_struct_GETF_sys( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_GETF_s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_GETF_c( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_GETF_e( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_SETF_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_GETF_hmin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_SETF_hmin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_GETF_hmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_SETF_hmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_GETF_nmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_SETF_nmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_driver_struct_gsl_odeiv2_driver_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv2_driver_struct_Meths[] = 
{
  { dao_gsl_odeiv2_driver_struct_GETF_sys, ".sys( self :gsl_odeiv2_driver_struct )=>gsl_odeiv2_system" },
  { dao_gsl_odeiv2_driver_struct_GETF_s, ".s( self :gsl_odeiv2_driver_struct )=>gsl_odeiv2_step_struct" },
  { dao_gsl_odeiv2_driver_struct_GETF_c, ".c( self :gsl_odeiv2_driver_struct )=>gsl_odeiv2_control_struct" },
  { dao_gsl_odeiv2_driver_struct_GETF_e, ".e( self :gsl_odeiv2_driver_struct )=>gsl_odeiv2_evolve_struct" },
  { dao_gsl_odeiv2_driver_struct_GETF_h, ".h( self :gsl_odeiv2_driver_struct )=>double" },
  { dao_gsl_odeiv2_driver_struct_SETF_h, ".h=( self :gsl_odeiv2_driver_struct, h :double )" },
  { dao_gsl_odeiv2_driver_struct_GETF_hmin, ".hmin( self :gsl_odeiv2_driver_struct )=>double" },
  { dao_gsl_odeiv2_driver_struct_SETF_hmin, ".hmin=( self :gsl_odeiv2_driver_struct, hmin :double )" },
  { dao_gsl_odeiv2_driver_struct_GETF_hmax, ".hmax( self :gsl_odeiv2_driver_struct )=>double" },
  { dao_gsl_odeiv2_driver_struct_SETF_hmax, ".hmax=( self :gsl_odeiv2_driver_struct, hmax :double )" },
  { dao_gsl_odeiv2_driver_struct_GETF_n, ".n( self :gsl_odeiv2_driver_struct )=>int" },
  { dao_gsl_odeiv2_driver_struct_SETF_n, ".n=( self :gsl_odeiv2_driver_struct, n :int )" },
  { dao_gsl_odeiv2_driver_struct_GETF_nmax, ".nmax( self :gsl_odeiv2_driver_struct )=>int" },
  { dao_gsl_odeiv2_driver_struct_SETF_nmax, ".nmax=( self :gsl_odeiv2_driver_struct, nmax :int )" },
  { dao_gsl_odeiv2_driver_struct_gsl_odeiv2_driver_struct, "gsl_odeiv2_driver_struct(  )=>gsl_odeiv2_driver_struct" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv2_driver_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv2_driver_struct_Typer = 
{ "gsl_odeiv2_driver_struct", NULL,
  dao_gsl_odeiv2_driver_struct_Nums,
  dao_gsl_odeiv2_driver_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv2_driver_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv2_driver_struct_Typer = & gsl_odeiv2_driver_struct_Typer;
DaoType *dao_type_gsl_odeiv2_driver_struct = NULL;
static void dao_gsl_odeiv2_driver_struct_GETF_sys( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  DaoProcess_WrapCdata( _proc, (void*) self->sys, dao_type_gsl_odeiv2_system );
}
static void dao_gsl_odeiv2_driver_struct_GETF_s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  DaoProcess_WrapCdata( _proc, (void*) self->s, dao_type_gsl_odeiv2_step_struct );
}
static void dao_gsl_odeiv2_driver_struct_GETF_c( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  DaoProcess_WrapCdata( _proc, (void*) self->c, dao_type_gsl_odeiv2_control_struct );
}
static void dao_gsl_odeiv2_driver_struct_GETF_e( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  DaoProcess_WrapCdata( _proc, (void*) self->e, dao_type_gsl_odeiv2_evolve_struct );
}
static void dao_gsl_odeiv2_driver_struct_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  DaoProcess_PutDouble( _proc, (double) self->h );
}
static void dao_gsl_odeiv2_driver_struct_SETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  self->h = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_odeiv2_driver_struct_GETF_hmin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  DaoProcess_PutDouble( _proc, (double) self->hmin );
}
static void dao_gsl_odeiv2_driver_struct_SETF_hmin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  self->hmin = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_odeiv2_driver_struct_GETF_hmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  DaoProcess_PutDouble( _proc, (double) self->hmax );
}
static void dao_gsl_odeiv2_driver_struct_SETF_hmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  self->hmax = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_odeiv2_driver_struct_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_odeiv2_driver_struct_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv2_driver_struct_GETF_nmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->nmax );
}
static void dao_gsl_odeiv2_driver_struct_SETF_nmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_odeiv2_driver_struct *self = (struct gsl_odeiv2_driver_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_driver_struct);
  self->nmax = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv2_driver_struct_gsl_odeiv2_driver_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_odeiv2_driver_struct *self = Dao_gsl_odeiv2_driver_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_odeiv2_driver_struct );
}
/* /usr/local/include/gsl/gsl_odeiv2.h */


static DaoNumItem dao_gsl_odeiv2_step_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv2_step_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_step_type_GETF_can_use_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_step_type_SETF_can_use_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_step_type_GETF_gives_exact_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_step_type_SETF_gives_exact_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_step_type_gsl_odeiv2_step_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv2_step_type_Meths[] = 
{
  { dao_gsl_odeiv2_step_type_GETF_name, ".name( self :gsl_odeiv2_step_type )=>string" },
  { dao_gsl_odeiv2_step_type_GETF_can_use_dydt_in, ".can_use_dydt_in( self :gsl_odeiv2_step_type )=>int" },
  { dao_gsl_odeiv2_step_type_SETF_can_use_dydt_in, ".can_use_dydt_in=( self :gsl_odeiv2_step_type, can_use_dydt_in :int )" },
  { dao_gsl_odeiv2_step_type_GETF_gives_exact_dydt_out, ".gives_exact_dydt_out( self :gsl_odeiv2_step_type )=>int" },
  { dao_gsl_odeiv2_step_type_SETF_gives_exact_dydt_out, ".gives_exact_dydt_out=( self :gsl_odeiv2_step_type, gives_exact_dydt_out :int )" },
  { dao_gsl_odeiv2_step_type_gsl_odeiv2_step_type, "gsl_odeiv2_step_type(  )=>gsl_odeiv2_step_type" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv2_step_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv2_step_type_Typer = 
{ "gsl_odeiv2_step_type", NULL,
  dao_gsl_odeiv2_step_type_Nums,
  dao_gsl_odeiv2_step_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv2_step_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv2_step_type_Typer = & gsl_odeiv2_step_type_Typer;
DaoType *dao_type_gsl_odeiv2_step_type = NULL;
static void dao_gsl_odeiv2_step_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv2_step_type *self = (gsl_odeiv2_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_step_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_odeiv2_step_type_GETF_can_use_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv2_step_type *self = (gsl_odeiv2_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_step_type);
  DaoProcess_PutInteger( _proc, (daoint) self->can_use_dydt_in );
}
static void dao_gsl_odeiv2_step_type_SETF_can_use_dydt_in( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv2_step_type *self = (gsl_odeiv2_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_step_type);
  self->can_use_dydt_in = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv2_step_type_GETF_gives_exact_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv2_step_type *self = (gsl_odeiv2_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_step_type);
  DaoProcess_PutInteger( _proc, (daoint) self->gives_exact_dydt_out );
}
static void dao_gsl_odeiv2_step_type_SETF_gives_exact_dydt_out( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv2_step_type *self = (gsl_odeiv2_step_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_step_type);
  self->gives_exact_dydt_out = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_odeiv2_step_type_gsl_odeiv2_step_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_odeiv2_step_type *self = Dao_gsl_odeiv2_step_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_odeiv2.h */


static DaoNumItem dao_gsl_odeiv2_control_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_odeiv2_control_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_odeiv2_control_type_gsl_odeiv2_control_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_odeiv2_control_type_Meths[] = 
{
  { dao_gsl_odeiv2_control_type_GETF_name, ".name( self :gsl_odeiv2_control_type )=>string" },
  { dao_gsl_odeiv2_control_type_gsl_odeiv2_control_type, "gsl_odeiv2_control_type(  )=>gsl_odeiv2_control_type" },
  { NULL, NULL }
};
static void Dao_gsl_odeiv2_control_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_odeiv2_control_type_Typer = 
{ "gsl_odeiv2_control_type", NULL,
  dao_gsl_odeiv2_control_type_Nums,
  dao_gsl_odeiv2_control_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_odeiv2_control_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_odeiv2_control_type_Typer = & gsl_odeiv2_control_type_Typer;
DaoType *dao_type_gsl_odeiv2_control_type = NULL;
static void dao_gsl_odeiv2_control_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_odeiv2_control_type *self = (gsl_odeiv2_control_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_odeiv2_control_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_odeiv2_control_type_gsl_odeiv2_control_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_odeiv2_control_type *self = Dao_gsl_odeiv2_control_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_poly.h */


static DaoNumItem dao_gsl_poly_complex_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_poly_complex_workspace_GETF_nc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_poly_complex_workspace_SETF_nc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_poly_complex_workspace_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_poly_complex_workspace_gsl_poly_complex_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_poly_complex_workspace_Meths[] = 
{
  { dao_gsl_poly_complex_workspace_GETF_nc, ".nc( self :gsl_poly_complex_workspace )=>int" },
  { dao_gsl_poly_complex_workspace_SETF_nc, ".nc=( self :gsl_poly_complex_workspace, nc :int )" },
  { dao_gsl_poly_complex_workspace_GETF_matrix, ".matrix( self :gsl_poly_complex_workspace )=>double" },
  { dao_gsl_poly_complex_workspace_gsl_poly_complex_workspace, "gsl_poly_complex_workspace(  )=>gsl_poly_complex_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_poly_complex_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_poly_complex_workspace_Typer = 
{ "gsl_poly_complex_workspace", NULL,
  dao_gsl_poly_complex_workspace_Nums,
  dao_gsl_poly_complex_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_poly_complex_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_poly_complex_workspace_Typer = & gsl_poly_complex_workspace_Typer;
DaoType *dao_type_gsl_poly_complex_workspace = NULL;
static void dao_gsl_poly_complex_workspace_GETF_nc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_poly_complex_workspace *self = (gsl_poly_complex_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_poly_complex_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->nc );
}
static void dao_gsl_poly_complex_workspace_SETF_nc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_poly_complex_workspace *self = (gsl_poly_complex_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_poly_complex_workspace);
  self->nc = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_poly_complex_workspace_GETF_matrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_poly_complex_workspace *self = (gsl_poly_complex_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_poly_complex_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->matrix, 0 );
}
static void dao_gsl_poly_complex_workspace_gsl_poly_complex_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_poly_complex_workspace *self = Dao_gsl_poly_complex_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_poly_complex_workspace );
}
/* /usr/local/include/gsl/gsl_qrng.h */


static DaoNumItem dao_gsl_qrng_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_qrng_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_qrng_type_GETF_max_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_qrng_type_SETF_max_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_qrng_type_gsl_qrng_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_qrng_type_Meths[] = 
{
  { dao_gsl_qrng_type_GETF_name, ".name( self :gsl_qrng_type )=>string" },
  { dao_gsl_qrng_type_GETF_max_dimension, ".max_dimension( self :gsl_qrng_type )=>int" },
  { dao_gsl_qrng_type_SETF_max_dimension, ".max_dimension=( self :gsl_qrng_type, max_dimension :int )" },
  { dao_gsl_qrng_type_gsl_qrng_type, "gsl_qrng_type(  )=>gsl_qrng_type" },
  { NULL, NULL }
};
static void Dao_gsl_qrng_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_qrng_type_Typer = 
{ "gsl_qrng_type", NULL,
  dao_gsl_qrng_type_Nums,
  dao_gsl_qrng_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_qrng_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_qrng_type_Typer = & gsl_qrng_type_Typer;
DaoType *dao_type_gsl_qrng_type = NULL;
static void dao_gsl_qrng_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_qrng_type *self = (gsl_qrng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_qrng_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_qrng_type_GETF_max_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_qrng_type *self = (gsl_qrng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_qrng_type);
  DaoProcess_PutInteger( _proc, (daoint) self->max_dimension );
}
static void dao_gsl_qrng_type_SETF_max_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_qrng_type *self = (gsl_qrng_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_qrng_type);
  self->max_dimension = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_qrng_type_gsl_qrng_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_qrng_type *self = Dao_gsl_qrng_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_qrng.h */


static DaoNumItem dao_gsl_qrng_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_qrng_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_qrng_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_qrng_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_qrng_GETF_state_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_qrng_SETF_state_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_qrng_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_qrng_gsl_qrng( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_qrng_Meths[] = 
{
  { dao_gsl_qrng_GETF_type, ".type( self :gsl_qrng )=>gsl_qrng_type" },
  { dao_gsl_qrng_GETF_dimension, ".dimension( self :gsl_qrng )=>int" },
  { dao_gsl_qrng_SETF_dimension, ".dimension=( self :gsl_qrng, dimension :int )" },
  { dao_gsl_qrng_GETF_state_size, ".state_size( self :gsl_qrng )=>int" },
  { dao_gsl_qrng_SETF_state_size, ".state_size=( self :gsl_qrng, state_size :int )" },
  { dao_gsl_qrng_GETF_state, ".state( self :gsl_qrng )=>cdata" },
  { dao_gsl_qrng_gsl_qrng, "gsl_qrng(  )=>gsl_qrng" },
  { NULL, NULL }
};
static void Dao_gsl_qrng_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_qrng_Typer = 
{ "gsl_qrng", NULL,
  dao_gsl_qrng_Nums,
  dao_gsl_qrng_Meths,
  { NULL },
  { NULL },
  Dao_gsl_qrng_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_qrng_Typer = & gsl_qrng_Typer;
DaoType *dao_type_gsl_qrng = NULL;
static void dao_gsl_qrng_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_qrng *self = (gsl_qrng*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_qrng);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_qrng_type );
}
static void dao_gsl_qrng_GETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_qrng *self = (gsl_qrng*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_qrng);
  DaoProcess_PutInteger( _proc, (daoint) self->dimension );
}
static void dao_gsl_qrng_SETF_dimension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_qrng *self = (gsl_qrng*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_qrng);
  self->dimension = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_qrng_GETF_state_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_qrng *self = (gsl_qrng*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_qrng);
  DaoProcess_PutInteger( _proc, (daoint) self->state_size );
}
static void dao_gsl_qrng_SETF_state_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_qrng *self = (gsl_qrng*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_qrng);
  self->state_size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_qrng_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_qrng *self = (gsl_qrng*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_qrng);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_qrng_gsl_qrng( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_qrng *self = Dao_gsl_qrng_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_qrng );
}
/* /usr/local/include/gsl/gsl_randist.h */


static DaoNumItem dao_gsl_ran_discrete_t_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_ran_discrete_t_GETF_K( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ran_discrete_t_SETF_K( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ran_discrete_t_GETF_A( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ran_discrete_t_GETF_F( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_ran_discrete_t_gsl_ran_discrete_t( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_ran_discrete_t_Meths[] = 
{
  { dao_gsl_ran_discrete_t_GETF_K, ".K( self :gsl_ran_discrete_t )=>int" },
  { dao_gsl_ran_discrete_t_SETF_K, ".K=( self :gsl_ran_discrete_t, K :int )" },
  { dao_gsl_ran_discrete_t_GETF_A, ".A( self :gsl_ran_discrete_t )=>int" },
  { dao_gsl_ran_discrete_t_GETF_F, ".F( self :gsl_ran_discrete_t )=>double" },
  { dao_gsl_ran_discrete_t_gsl_ran_discrete_t, "gsl_ran_discrete_t(  )=>gsl_ran_discrete_t" },
  { NULL, NULL }
};
static void Dao_gsl_ran_discrete_t_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_ran_discrete_t_Typer = 
{ "gsl_ran_discrete_t", NULL,
  dao_gsl_ran_discrete_t_Nums,
  dao_gsl_ran_discrete_t_Meths,
  { NULL },
  { NULL },
  Dao_gsl_ran_discrete_t_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_ran_discrete_t_Typer = & gsl_ran_discrete_t_Typer;
DaoType *dao_type_gsl_ran_discrete_t = NULL;
static void dao_gsl_ran_discrete_t_GETF_K( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ran_discrete_t *self = (gsl_ran_discrete_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ran_discrete_t);
  DaoProcess_PutInteger( _proc, (daoint) self->K );
}
static void dao_gsl_ran_discrete_t_SETF_K( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ran_discrete_t *self = (gsl_ran_discrete_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ran_discrete_t);
  self->K = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_ran_discrete_t_GETF_A( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ran_discrete_t *self = (gsl_ran_discrete_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ran_discrete_t);
  DaoProcess_PutVectorSI( _proc, (signed int*) self->A, 0 );
}
static void dao_gsl_ran_discrete_t_GETF_F( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_ran_discrete_t *self = (gsl_ran_discrete_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_ran_discrete_t);
  DaoProcess_PutVectorD( _proc, (double*) self->F, 0 );
}
static void dao_gsl_ran_discrete_t_gsl_ran_discrete_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_ran_discrete_t *self = Dao_gsl_ran_discrete_t_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_ran_discrete_t );
}
/* /usr/local/include/gsl/gsl_roots.h */


static DaoNumItem dao_gsl_root_fsolver_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_root_fsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_type_gsl_root_fsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_root_fsolver_type_Meths[] = 
{
  { dao_gsl_root_fsolver_type_GETF_name, ".name( self :gsl_root_fsolver_type )=>string" },
  { dao_gsl_root_fsolver_type_GETF_size, ".size( self :gsl_root_fsolver_type )=>int" },
  { dao_gsl_root_fsolver_type_SETF_size, ".size=( self :gsl_root_fsolver_type, size :int )" },
  { dao_gsl_root_fsolver_type_gsl_root_fsolver_type, "gsl_root_fsolver_type(  )=>gsl_root_fsolver_type" },
  { NULL, NULL }
};
static void Dao_gsl_root_fsolver_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_root_fsolver_type_Typer = 
{ "gsl_root_fsolver_type", NULL,
  dao_gsl_root_fsolver_type_Nums,
  dao_gsl_root_fsolver_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_root_fsolver_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_root_fsolver_type_Typer = & gsl_root_fsolver_type_Typer;
DaoType *dao_type_gsl_root_fsolver_type = NULL;
static void dao_gsl_root_fsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver_type *self = (gsl_root_fsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_root_fsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver_type *self = (gsl_root_fsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_root_fsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver_type *self = (gsl_root_fsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_root_fsolver_type_gsl_root_fsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_root_fsolver_type *self = Dao_gsl_root_fsolver_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_roots.h */


static DaoNumItem dao_gsl_root_fsolver_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_root_fsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_GETF_root( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_SETF_root( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_GETF_x_lower( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_SETF_x_lower( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_GETF_x_upper( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_SETF_x_upper( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fsolver_gsl_root_fsolver( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_root_fsolver_Meths[] = 
{
  { dao_gsl_root_fsolver_GETF_type, ".type( self :gsl_root_fsolver )=>gsl_root_fsolver_type" },
  { dao_gsl_root_fsolver_GETF_function, ".function( self :gsl_root_fsolver )=>gsl_function_struct" },
  { dao_gsl_root_fsolver_GETF_root, ".root( self :gsl_root_fsolver )=>double" },
  { dao_gsl_root_fsolver_SETF_root, ".root=( self :gsl_root_fsolver, root :double )" },
  { dao_gsl_root_fsolver_GETF_x_lower, ".x_lower( self :gsl_root_fsolver )=>double" },
  { dao_gsl_root_fsolver_SETF_x_lower, ".x_lower=( self :gsl_root_fsolver, x_lower :double )" },
  { dao_gsl_root_fsolver_GETF_x_upper, ".x_upper( self :gsl_root_fsolver )=>double" },
  { dao_gsl_root_fsolver_SETF_x_upper, ".x_upper=( self :gsl_root_fsolver, x_upper :double )" },
  { dao_gsl_root_fsolver_GETF_state, ".state( self :gsl_root_fsolver )=>cdata" },
  { dao_gsl_root_fsolver_gsl_root_fsolver, "gsl_root_fsolver(  )=>gsl_root_fsolver" },
  { NULL, NULL }
};
static void Dao_gsl_root_fsolver_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_root_fsolver_Typer = 
{ "gsl_root_fsolver", NULL,
  dao_gsl_root_fsolver_Nums,
  dao_gsl_root_fsolver_Meths,
  { NULL },
  { NULL },
  Dao_gsl_root_fsolver_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_root_fsolver_Typer = & gsl_root_fsolver_Typer;
DaoType *dao_type_gsl_root_fsolver = NULL;
static void dao_gsl_root_fsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver *self = (gsl_root_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_root_fsolver_type );
}
static void dao_gsl_root_fsolver_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver *self = (gsl_root_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->function, dao_type_gsl_function_struct );
}
static void dao_gsl_root_fsolver_GETF_root( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver *self = (gsl_root_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver);
  DaoProcess_PutDouble( _proc, (double) self->root );
}
static void dao_gsl_root_fsolver_SETF_root( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver *self = (gsl_root_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver);
  self->root = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_root_fsolver_GETF_x_lower( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver *self = (gsl_root_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver);
  DaoProcess_PutDouble( _proc, (double) self->x_lower );
}
static void dao_gsl_root_fsolver_SETF_x_lower( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver *self = (gsl_root_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver);
  self->x_lower = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_root_fsolver_GETF_x_upper( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver *self = (gsl_root_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver);
  DaoProcess_PutDouble( _proc, (double) self->x_upper );
}
static void dao_gsl_root_fsolver_SETF_x_upper( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver *self = (gsl_root_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver);
  self->x_upper = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_root_fsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fsolver *self = (gsl_root_fsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fsolver);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_root_fsolver_gsl_root_fsolver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_root_fsolver *self = Dao_gsl_root_fsolver_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_root_fsolver );
}
/* /usr/local/include/gsl/gsl_roots.h */


static DaoNumItem dao_gsl_root_fdfsolver_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_root_fdfsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fdfsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fdfsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fdfsolver_type_gsl_root_fdfsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_root_fdfsolver_type_Meths[] = 
{
  { dao_gsl_root_fdfsolver_type_GETF_name, ".name( self :gsl_root_fdfsolver_type )=>string" },
  { dao_gsl_root_fdfsolver_type_GETF_size, ".size( self :gsl_root_fdfsolver_type )=>int" },
  { dao_gsl_root_fdfsolver_type_SETF_size, ".size=( self :gsl_root_fdfsolver_type, size :int )" },
  { dao_gsl_root_fdfsolver_type_gsl_root_fdfsolver_type, "gsl_root_fdfsolver_type(  )=>gsl_root_fdfsolver_type" },
  { NULL, NULL }
};
static void Dao_gsl_root_fdfsolver_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_root_fdfsolver_type_Typer = 
{ "gsl_root_fdfsolver_type", NULL,
  dao_gsl_root_fdfsolver_type_Nums,
  dao_gsl_root_fdfsolver_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_root_fdfsolver_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_root_fdfsolver_type_Typer = & gsl_root_fdfsolver_type_Typer;
DaoType *dao_type_gsl_root_fdfsolver_type = NULL;
static void dao_gsl_root_fdfsolver_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fdfsolver_type *self = (gsl_root_fdfsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fdfsolver_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_root_fdfsolver_type_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fdfsolver_type *self = (gsl_root_fdfsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fdfsolver_type);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_root_fdfsolver_type_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fdfsolver_type *self = (gsl_root_fdfsolver_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fdfsolver_type);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_root_fdfsolver_type_gsl_root_fdfsolver_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_root_fdfsolver_type *self = Dao_gsl_root_fdfsolver_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_roots.h */


static DaoNumItem dao_gsl_root_fdfsolver_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_root_fdfsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fdfsolver_GETF_fdf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fdfsolver_GETF_root( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fdfsolver_SETF_root( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fdfsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_root_fdfsolver_gsl_root_fdfsolver( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_root_fdfsolver_Meths[] = 
{
  { dao_gsl_root_fdfsolver_GETF_type, ".type( self :gsl_root_fdfsolver )=>gsl_root_fdfsolver_type" },
  { dao_gsl_root_fdfsolver_GETF_fdf, ".fdf( self :gsl_root_fdfsolver )=>gsl_function_fdf_struct" },
  { dao_gsl_root_fdfsolver_GETF_root, ".root( self :gsl_root_fdfsolver )=>double" },
  { dao_gsl_root_fdfsolver_SETF_root, ".root=( self :gsl_root_fdfsolver, root :double )" },
  { dao_gsl_root_fdfsolver_GETF_state, ".state( self :gsl_root_fdfsolver )=>cdata" },
  { dao_gsl_root_fdfsolver_gsl_root_fdfsolver, "gsl_root_fdfsolver(  )=>gsl_root_fdfsolver" },
  { NULL, NULL }
};
static void Dao_gsl_root_fdfsolver_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_root_fdfsolver_Typer = 
{ "gsl_root_fdfsolver", NULL,
  dao_gsl_root_fdfsolver_Nums,
  dao_gsl_root_fdfsolver_Meths,
  { NULL },
  { NULL },
  Dao_gsl_root_fdfsolver_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_root_fdfsolver_Typer = & gsl_root_fdfsolver_Typer;
DaoType *dao_type_gsl_root_fdfsolver = NULL;
static void dao_gsl_root_fdfsolver_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fdfsolver *self = (gsl_root_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_root_fdfsolver_type );
}
static void dao_gsl_root_fdfsolver_GETF_fdf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fdfsolver *self = (gsl_root_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fdfsolver);
  DaoProcess_WrapCdata( _proc, (void*) self->fdf, dao_type_gsl_function_fdf_struct );
}
static void dao_gsl_root_fdfsolver_GETF_root( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fdfsolver *self = (gsl_root_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fdfsolver);
  DaoProcess_PutDouble( _proc, (double) self->root );
}
static void dao_gsl_root_fdfsolver_SETF_root( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fdfsolver *self = (gsl_root_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fdfsolver);
  self->root = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_root_fdfsolver_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_root_fdfsolver *self = (gsl_root_fdfsolver*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_root_fdfsolver);
  DaoProcess_PutCdata( _proc, (void*) self->state, NULL );
}
static void dao_gsl_root_fdfsolver_gsl_root_fdfsolver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_root_fdfsolver *self = Dao_gsl_root_fdfsolver_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_root_fdfsolver );
}
/* /usr/local/include/gsl/gsl_sf_result.h */


static DaoNumItem dao_gsl_sf_result_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_sf_result_struct_GETF_val( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_struct_SETF_val( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_struct_GETF_err( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_struct_SETF_err( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_struct_gsl_sf_result_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_sf_result_struct_Meths[] = 
{
  { dao_gsl_sf_result_struct_GETF_val, ".val( self :gsl_sf_result_struct )=>double" },
  { dao_gsl_sf_result_struct_SETF_val, ".val=( self :gsl_sf_result_struct, val :double )" },
  { dao_gsl_sf_result_struct_GETF_err, ".err( self :gsl_sf_result_struct )=>double" },
  { dao_gsl_sf_result_struct_SETF_err, ".err=( self :gsl_sf_result_struct, err :double )" },
  { dao_gsl_sf_result_struct_gsl_sf_result_struct, "gsl_sf_result_struct(  )=>gsl_sf_result_struct" },
  { NULL, NULL }
};
static void Dao_gsl_sf_result_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_sf_result_struct_Typer = 
{ "gsl_sf_result_struct", NULL,
  dao_gsl_sf_result_struct_Nums,
  dao_gsl_sf_result_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_sf_result_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_sf_result_struct_Typer = & gsl_sf_result_struct_Typer;
DaoType *dao_type_gsl_sf_result_struct = NULL;
static void dao_gsl_sf_result_struct_GETF_val( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_struct *self = (struct gsl_sf_result_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_struct);
  DaoProcess_PutDouble( _proc, (double) self->val );
}
static void dao_gsl_sf_result_struct_SETF_val( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_struct *self = (struct gsl_sf_result_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_struct);
  self->val = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_sf_result_struct_GETF_err( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_struct *self = (struct gsl_sf_result_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_struct);
  DaoProcess_PutDouble( _proc, (double) self->err );
}
static void dao_gsl_sf_result_struct_SETF_err( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_struct *self = (struct gsl_sf_result_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_struct);
  self->err = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_sf_result_struct_gsl_sf_result_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_sf_result_struct *self = Dao_gsl_sf_result_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_sf_result_struct );
}
/* /usr/local/include/gsl/gsl_sf_result.h */


static DaoNumItem dao_gsl_sf_result_e10_struct_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_sf_result_e10_struct_GETF_val( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_e10_struct_SETF_val( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_e10_struct_GETF_err( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_e10_struct_SETF_err( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_e10_struct_GETF_e10( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_e10_struct_SETF_e10( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_result_e10_struct_gsl_sf_result_e10_struct( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_sf_result_e10_struct_Meths[] = 
{
  { dao_gsl_sf_result_e10_struct_GETF_val, ".val( self :gsl_sf_result_e10_struct )=>double" },
  { dao_gsl_sf_result_e10_struct_SETF_val, ".val=( self :gsl_sf_result_e10_struct, val :double )" },
  { dao_gsl_sf_result_e10_struct_GETF_err, ".err( self :gsl_sf_result_e10_struct )=>double" },
  { dao_gsl_sf_result_e10_struct_SETF_err, ".err=( self :gsl_sf_result_e10_struct, err :double )" },
  { dao_gsl_sf_result_e10_struct_GETF_e10, ".e10( self :gsl_sf_result_e10_struct )=>int" },
  { dao_gsl_sf_result_e10_struct_SETF_e10, ".e10=( self :gsl_sf_result_e10_struct, e10 :int )" },
  { dao_gsl_sf_result_e10_struct_gsl_sf_result_e10_struct, "gsl_sf_result_e10_struct(  )=>gsl_sf_result_e10_struct" },
  { NULL, NULL }
};
static void Dao_gsl_sf_result_e10_struct_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_sf_result_e10_struct_Typer = 
{ "gsl_sf_result_e10_struct", NULL,
  dao_gsl_sf_result_e10_struct_Nums,
  dao_gsl_sf_result_e10_struct_Meths,
  { NULL },
  { NULL },
  Dao_gsl_sf_result_e10_struct_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_sf_result_e10_struct_Typer = & gsl_sf_result_e10_struct_Typer;
DaoType *dao_type_gsl_sf_result_e10_struct = NULL;
static void dao_gsl_sf_result_e10_struct_GETF_val( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_e10_struct *self = (struct gsl_sf_result_e10_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_e10_struct);
  DaoProcess_PutDouble( _proc, (double) self->val );
}
static void dao_gsl_sf_result_e10_struct_SETF_val( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_e10_struct *self = (struct gsl_sf_result_e10_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_e10_struct);
  self->val = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_sf_result_e10_struct_GETF_err( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_e10_struct *self = (struct gsl_sf_result_e10_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_e10_struct);
  DaoProcess_PutDouble( _proc, (double) self->err );
}
static void dao_gsl_sf_result_e10_struct_SETF_err( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_e10_struct *self = (struct gsl_sf_result_e10_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_e10_struct);
  self->err = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_sf_result_e10_struct_GETF_e10( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_e10_struct *self = (struct gsl_sf_result_e10_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_e10_struct);
  DaoProcess_PutInteger( _proc, (daoint) self->e10 );
}
static void dao_gsl_sf_result_e10_struct_SETF_e10( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct gsl_sf_result_e10_struct *self = (struct gsl_sf_result_e10_struct*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_result_e10_struct);
  self->e10 = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sf_result_e10_struct_gsl_sf_result_e10_struct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct gsl_sf_result_e10_struct *self = Dao_gsl_sf_result_e10_struct_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_sf_result_e10_struct );
}
/* /usr/local/include/gsl/gsl_sf_mathieu.h */


static DaoNumItem dao_gsl_sf_mathieu_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_sf_mathieu_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_even_order( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_SETF_even_order( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_odd_order( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_SETF_odd_order( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_extra_values( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_SETF_extra_values( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_qa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_SETF_qa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_qb( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_SETF_qb( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_aa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_bb( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_dd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_ee( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_tt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_e2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_zz( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_eval( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_evec( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_GETF_wmat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sf_mathieu_workspace_gsl_sf_mathieu_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_sf_mathieu_workspace_Meths[] = 
{
  { dao_gsl_sf_mathieu_workspace_GETF_size, ".size( self :gsl_sf_mathieu_workspace )=>int" },
  { dao_gsl_sf_mathieu_workspace_SETF_size, ".size=( self :gsl_sf_mathieu_workspace, size :int )" },
  { dao_gsl_sf_mathieu_workspace_GETF_even_order, ".even_order( self :gsl_sf_mathieu_workspace )=>int" },
  { dao_gsl_sf_mathieu_workspace_SETF_even_order, ".even_order=( self :gsl_sf_mathieu_workspace, even_order :int )" },
  { dao_gsl_sf_mathieu_workspace_GETF_odd_order, ".odd_order( self :gsl_sf_mathieu_workspace )=>int" },
  { dao_gsl_sf_mathieu_workspace_SETF_odd_order, ".odd_order=( self :gsl_sf_mathieu_workspace, odd_order :int )" },
  { dao_gsl_sf_mathieu_workspace_GETF_extra_values, ".extra_values( self :gsl_sf_mathieu_workspace )=>int" },
  { dao_gsl_sf_mathieu_workspace_SETF_extra_values, ".extra_values=( self :gsl_sf_mathieu_workspace, extra_values :int )" },
  { dao_gsl_sf_mathieu_workspace_GETF_qa, ".qa( self :gsl_sf_mathieu_workspace )=>double" },
  { dao_gsl_sf_mathieu_workspace_SETF_qa, ".qa=( self :gsl_sf_mathieu_workspace, qa :double )" },
  { dao_gsl_sf_mathieu_workspace_GETF_qb, ".qb( self :gsl_sf_mathieu_workspace )=>double" },
  { dao_gsl_sf_mathieu_workspace_SETF_qb, ".qb=( self :gsl_sf_mathieu_workspace, qb :double )" },
  { dao_gsl_sf_mathieu_workspace_GETF_aa, ".aa( self :gsl_sf_mathieu_workspace )=>double" },
  { dao_gsl_sf_mathieu_workspace_GETF_bb, ".bb( self :gsl_sf_mathieu_workspace )=>double" },
  { dao_gsl_sf_mathieu_workspace_GETF_dd, ".dd( self :gsl_sf_mathieu_workspace )=>double" },
  { dao_gsl_sf_mathieu_workspace_GETF_ee, ".ee( self :gsl_sf_mathieu_workspace )=>double" },
  { dao_gsl_sf_mathieu_workspace_GETF_tt, ".tt( self :gsl_sf_mathieu_workspace )=>double" },
  { dao_gsl_sf_mathieu_workspace_GETF_e2, ".e2( self :gsl_sf_mathieu_workspace )=>double" },
  { dao_gsl_sf_mathieu_workspace_GETF_zz, ".zz( self :gsl_sf_mathieu_workspace )=>double" },
  { dao_gsl_sf_mathieu_workspace_GETF_eval, ".eval( self :gsl_sf_mathieu_workspace )=>gsl_vector" },
  { dao_gsl_sf_mathieu_workspace_GETF_evec, ".evec( self :gsl_sf_mathieu_workspace )=>gsl_matrix" },
  { dao_gsl_sf_mathieu_workspace_GETF_wmat, ".wmat( self :gsl_sf_mathieu_workspace )=>gsl_eigen_symmv_workspace" },
  { dao_gsl_sf_mathieu_workspace_gsl_sf_mathieu_workspace, "gsl_sf_mathieu_workspace(  )=>gsl_sf_mathieu_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_sf_mathieu_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_sf_mathieu_workspace_Typer = 
{ "gsl_sf_mathieu_workspace", NULL,
  dao_gsl_sf_mathieu_workspace_Nums,
  dao_gsl_sf_mathieu_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_sf_mathieu_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_sf_mathieu_workspace_Typer = & gsl_sf_mathieu_workspace_Typer;
DaoType *dao_type_gsl_sf_mathieu_workspace = NULL;
static void dao_gsl_sf_mathieu_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_sf_mathieu_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sf_mathieu_workspace_GETF_even_order( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->even_order );
}
static void dao_gsl_sf_mathieu_workspace_SETF_even_order( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  self->even_order = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sf_mathieu_workspace_GETF_odd_order( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->odd_order );
}
static void dao_gsl_sf_mathieu_workspace_SETF_odd_order( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  self->odd_order = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sf_mathieu_workspace_GETF_extra_values( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->extra_values );
}
static void dao_gsl_sf_mathieu_workspace_SETF_extra_values( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  self->extra_values = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sf_mathieu_workspace_GETF_qa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutDouble( _proc, (double) self->qa );
}
static void dao_gsl_sf_mathieu_workspace_SETF_qa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  self->qa = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_sf_mathieu_workspace_GETF_qb( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutDouble( _proc, (double) self->qb );
}
static void dao_gsl_sf_mathieu_workspace_SETF_qb( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  self->qb = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_sf_mathieu_workspace_GETF_aa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->aa, 0 );
}
static void dao_gsl_sf_mathieu_workspace_GETF_bb( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->bb, 0 );
}
static void dao_gsl_sf_mathieu_workspace_GETF_dd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->dd, 0 );
}
static void dao_gsl_sf_mathieu_workspace_GETF_ee( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->ee, 0 );
}
static void dao_gsl_sf_mathieu_workspace_GETF_tt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->tt, 0 );
}
static void dao_gsl_sf_mathieu_workspace_GETF_e2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->e2, 0 );
}
static void dao_gsl_sf_mathieu_workspace_GETF_zz( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->zz, 0 );
}
static void dao_gsl_sf_mathieu_workspace_GETF_eval( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->eval, dao_type_gsl_vector );
}
static void dao_gsl_sf_mathieu_workspace_GETF_evec( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->evec, dao_type_gsl_matrix );
}
static void dao_gsl_sf_mathieu_workspace_GETF_wmat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sf_mathieu_workspace *self = (gsl_sf_mathieu_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sf_mathieu_workspace);
  DaoProcess_WrapCdata( _proc, (void*) self->wmat, dao_type_gsl_eigen_symmv_workspace );
}
static void dao_gsl_sf_mathieu_workspace_gsl_sf_mathieu_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_sf_mathieu_workspace *self = Dao_gsl_sf_mathieu_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_sf_mathieu_workspace );
}
/* /usr/local/include/gsl/gsl_siman.h */


static DaoNumItem dao_gsl_siman_params_t_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_siman_params_t_GETF_n_tries( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_SETF_n_tries( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_GETF_iters_fixed_T( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_SETF_iters_fixed_T( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_GETF_step_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_SETF_step_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_GETF_t_initial( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_SETF_t_initial( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_GETF_mu_t( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_SETF_mu_t( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_GETF_t_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_SETF_t_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_siman_params_t_gsl_siman_params_t( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_siman_params_t_Meths[] = 
{
  { dao_gsl_siman_params_t_GETF_n_tries, ".n_tries( self :gsl_siman_params_t )=>int" },
  { dao_gsl_siman_params_t_SETF_n_tries, ".n_tries=( self :gsl_siman_params_t, n_tries :int )" },
  { dao_gsl_siman_params_t_GETF_iters_fixed_T, ".iters_fixed_T( self :gsl_siman_params_t )=>int" },
  { dao_gsl_siman_params_t_SETF_iters_fixed_T, ".iters_fixed_T=( self :gsl_siman_params_t, iters_fixed_T :int )" },
  { dao_gsl_siman_params_t_GETF_step_size, ".step_size( self :gsl_siman_params_t )=>double" },
  { dao_gsl_siman_params_t_SETF_step_size, ".step_size=( self :gsl_siman_params_t, step_size :double )" },
  { dao_gsl_siman_params_t_GETF_k, ".k( self :gsl_siman_params_t )=>double" },
  { dao_gsl_siman_params_t_SETF_k, ".k=( self :gsl_siman_params_t, k :double )" },
  { dao_gsl_siman_params_t_GETF_t_initial, ".t_initial( self :gsl_siman_params_t )=>double" },
  { dao_gsl_siman_params_t_SETF_t_initial, ".t_initial=( self :gsl_siman_params_t, t_initial :double )" },
  { dao_gsl_siman_params_t_GETF_mu_t, ".mu_t( self :gsl_siman_params_t )=>double" },
  { dao_gsl_siman_params_t_SETF_mu_t, ".mu_t=( self :gsl_siman_params_t, mu_t :double )" },
  { dao_gsl_siman_params_t_GETF_t_min, ".t_min( self :gsl_siman_params_t )=>double" },
  { dao_gsl_siman_params_t_SETF_t_min, ".t_min=( self :gsl_siman_params_t, t_min :double )" },
  { dao_gsl_siman_params_t_gsl_siman_params_t, "gsl_siman_params_t(  )=>gsl_siman_params_t" },
  { NULL, NULL }
};
static void Dao_gsl_siman_params_t_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_siman_params_t_Typer = 
{ "gsl_siman_params_t", NULL,
  dao_gsl_siman_params_t_Nums,
  dao_gsl_siman_params_t_Meths,
  { NULL },
  { NULL },
  Dao_gsl_siman_params_t_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_siman_params_t_Typer = & gsl_siman_params_t_Typer;
DaoType *dao_type_gsl_siman_params_t = NULL;
static void dao_gsl_siman_params_t_GETF_n_tries( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  DaoProcess_PutInteger( _proc, (daoint) self->n_tries );
}
static void dao_gsl_siman_params_t_SETF_n_tries( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  self->n_tries = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_siman_params_t_GETF_iters_fixed_T( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  DaoProcess_PutInteger( _proc, (daoint) self->iters_fixed_T );
}
static void dao_gsl_siman_params_t_SETF_iters_fixed_T( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  self->iters_fixed_T = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_siman_params_t_GETF_step_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  DaoProcess_PutDouble( _proc, (double) self->step_size );
}
static void dao_gsl_siman_params_t_SETF_step_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  self->step_size = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_siman_params_t_GETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  DaoProcess_PutDouble( _proc, (double) self->k );
}
static void dao_gsl_siman_params_t_SETF_k( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  self->k = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_siman_params_t_GETF_t_initial( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  DaoProcess_PutDouble( _proc, (double) self->t_initial );
}
static void dao_gsl_siman_params_t_SETF_t_initial( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  self->t_initial = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_siman_params_t_GETF_mu_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  DaoProcess_PutDouble( _proc, (double) self->mu_t );
}
static void dao_gsl_siman_params_t_SETF_mu_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  self->mu_t = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_siman_params_t_GETF_t_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  DaoProcess_PutDouble( _proc, (double) self->t_min );
}
static void dao_gsl_siman_params_t_SETF_t_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_siman_params_t *self = (gsl_siman_params_t*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_siman_params_t);
  self->t_min = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_siman_params_t_gsl_siman_params_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_siman_params_t *self = Dao_gsl_siman_params_t_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_siman_params_t );
}
/* /usr/local/include/gsl/gsl_spline.h */


static DaoNumItem dao_gsl_spline_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_spline_GETF_interp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_spline_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_spline_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_spline_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_spline_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_spline_gsl_spline( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_spline_Meths[] = 
{
  { dao_gsl_spline_GETF_interp, ".interp( self :gsl_spline )=>gsl_interp" },
  { dao_gsl_spline_GETF_x, ".x( self :gsl_spline )=>double" },
  { dao_gsl_spline_GETF_y, ".y( self :gsl_spline )=>double" },
  { dao_gsl_spline_GETF_size, ".size( self :gsl_spline )=>int" },
  { dao_gsl_spline_SETF_size, ".size=( self :gsl_spline, size :int )" },
  { dao_gsl_spline_gsl_spline, "gsl_spline(  )=>gsl_spline" },
  { NULL, NULL }
};
static void Dao_gsl_spline_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_spline_Typer = 
{ "gsl_spline", NULL,
  dao_gsl_spline_Nums,
  dao_gsl_spline_Meths,
  { NULL },
  { NULL },
  Dao_gsl_spline_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_spline_Typer = & gsl_spline_Typer;
DaoType *dao_type_gsl_spline = NULL;
static void dao_gsl_spline_GETF_interp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_spline *self = (gsl_spline*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_spline);
  DaoProcess_WrapCdata( _proc, (void*) self->interp, dao_type_gsl_interp );
}
static void dao_gsl_spline_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_spline *self = (gsl_spline*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_spline);
  DaoProcess_PutVectorD( _proc, (double*) self->x, 0 );
}
static void dao_gsl_spline_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_spline *self = (gsl_spline*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_spline);
  DaoProcess_PutVectorD( _proc, (double*) self->y, 0 );
}
static void dao_gsl_spline_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_spline *self = (gsl_spline*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_spline);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_spline_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_spline *self = (gsl_spline*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_spline);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_spline_gsl_spline( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_spline *self = Dao_gsl_spline_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_spline );
}
/* /usr/local/include/gsl/gsl_sum.h */


static DaoNumItem dao_gsl_sum_levin_u_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_sum_levin_u_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_GETF_i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_SETF_i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_GETF_terms_used( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_SETF_terms_used( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_GETF_sum_plain( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_SETF_sum_plain( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_GETF_q_num( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_GETF_q_den( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_GETF_dq_num( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_GETF_dq_den( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_GETF_dsum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_u_workspace_gsl_sum_levin_u_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_sum_levin_u_workspace_Meths[] = 
{
  { dao_gsl_sum_levin_u_workspace_GETF_size, ".size( self :gsl_sum_levin_u_workspace )=>int" },
  { dao_gsl_sum_levin_u_workspace_SETF_size, ".size=( self :gsl_sum_levin_u_workspace, size :int )" },
  { dao_gsl_sum_levin_u_workspace_GETF_i, ".i( self :gsl_sum_levin_u_workspace )=>int" },
  { dao_gsl_sum_levin_u_workspace_SETF_i, ".i=( self :gsl_sum_levin_u_workspace, i :int )" },
  { dao_gsl_sum_levin_u_workspace_GETF_terms_used, ".terms_used( self :gsl_sum_levin_u_workspace )=>int" },
  { dao_gsl_sum_levin_u_workspace_SETF_terms_used, ".terms_used=( self :gsl_sum_levin_u_workspace, terms_used :int )" },
  { dao_gsl_sum_levin_u_workspace_GETF_sum_plain, ".sum_plain( self :gsl_sum_levin_u_workspace )=>double" },
  { dao_gsl_sum_levin_u_workspace_SETF_sum_plain, ".sum_plain=( self :gsl_sum_levin_u_workspace, sum_plain :double )" },
  { dao_gsl_sum_levin_u_workspace_GETF_q_num, ".q_num( self :gsl_sum_levin_u_workspace )=>double" },
  { dao_gsl_sum_levin_u_workspace_GETF_q_den, ".q_den( self :gsl_sum_levin_u_workspace )=>double" },
  { dao_gsl_sum_levin_u_workspace_GETF_dq_num, ".dq_num( self :gsl_sum_levin_u_workspace )=>double" },
  { dao_gsl_sum_levin_u_workspace_GETF_dq_den, ".dq_den( self :gsl_sum_levin_u_workspace )=>double" },
  { dao_gsl_sum_levin_u_workspace_GETF_dsum, ".dsum( self :gsl_sum_levin_u_workspace )=>double" },
  { dao_gsl_sum_levin_u_workspace_gsl_sum_levin_u_workspace, "gsl_sum_levin_u_workspace(  )=>gsl_sum_levin_u_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_sum_levin_u_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_sum_levin_u_workspace_Typer = 
{ "gsl_sum_levin_u_workspace", NULL,
  dao_gsl_sum_levin_u_workspace_Nums,
  dao_gsl_sum_levin_u_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_sum_levin_u_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_sum_levin_u_workspace_Typer = & gsl_sum_levin_u_workspace_Typer;
DaoType *dao_type_gsl_sum_levin_u_workspace = NULL;
static void dao_gsl_sum_levin_u_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_sum_levin_u_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sum_levin_u_workspace_GETF_i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->i );
}
static void dao_gsl_sum_levin_u_workspace_SETF_i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  self->i = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sum_levin_u_workspace_GETF_terms_used( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->terms_used );
}
static void dao_gsl_sum_levin_u_workspace_SETF_terms_used( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  self->terms_used = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sum_levin_u_workspace_GETF_sum_plain( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  DaoProcess_PutDouble( _proc, (double) self->sum_plain );
}
static void dao_gsl_sum_levin_u_workspace_SETF_sum_plain( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  self->sum_plain = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_sum_levin_u_workspace_GETF_q_num( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->q_num, 0 );
}
static void dao_gsl_sum_levin_u_workspace_GETF_q_den( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->q_den, 0 );
}
static void dao_gsl_sum_levin_u_workspace_GETF_dq_num( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->dq_num, 0 );
}
static void dao_gsl_sum_levin_u_workspace_GETF_dq_den( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->dq_den, 0 );
}
static void dao_gsl_sum_levin_u_workspace_GETF_dsum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_u_workspace *self = (gsl_sum_levin_u_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_u_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->dsum, 0 );
}
static void dao_gsl_sum_levin_u_workspace_gsl_sum_levin_u_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_sum_levin_u_workspace *self = Dao_gsl_sum_levin_u_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_sum_levin_u_workspace );
}
/* /usr/local/include/gsl/gsl_sum.h */


static DaoNumItem dao_gsl_sum_levin_utrunc_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_sum_levin_utrunc_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_GETF_i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_SETF_i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_GETF_terms_used( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_SETF_terms_used( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_GETF_sum_plain( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_SETF_sum_plain( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_GETF_q_num( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_GETF_q_den( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_GETF_dsum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_sum_levin_utrunc_workspace_gsl_sum_levin_utrunc_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_sum_levin_utrunc_workspace_Meths[] = 
{
  { dao_gsl_sum_levin_utrunc_workspace_GETF_size, ".size( self :gsl_sum_levin_utrunc_workspace )=>int" },
  { dao_gsl_sum_levin_utrunc_workspace_SETF_size, ".size=( self :gsl_sum_levin_utrunc_workspace, size :int )" },
  { dao_gsl_sum_levin_utrunc_workspace_GETF_i, ".i( self :gsl_sum_levin_utrunc_workspace )=>int" },
  { dao_gsl_sum_levin_utrunc_workspace_SETF_i, ".i=( self :gsl_sum_levin_utrunc_workspace, i :int )" },
  { dao_gsl_sum_levin_utrunc_workspace_GETF_terms_used, ".terms_used( self :gsl_sum_levin_utrunc_workspace )=>int" },
  { dao_gsl_sum_levin_utrunc_workspace_SETF_terms_used, ".terms_used=( self :gsl_sum_levin_utrunc_workspace, terms_used :int )" },
  { dao_gsl_sum_levin_utrunc_workspace_GETF_sum_plain, ".sum_plain( self :gsl_sum_levin_utrunc_workspace )=>double" },
  { dao_gsl_sum_levin_utrunc_workspace_SETF_sum_plain, ".sum_plain=( self :gsl_sum_levin_utrunc_workspace, sum_plain :double )" },
  { dao_gsl_sum_levin_utrunc_workspace_GETF_q_num, ".q_num( self :gsl_sum_levin_utrunc_workspace )=>double" },
  { dao_gsl_sum_levin_utrunc_workspace_GETF_q_den, ".q_den( self :gsl_sum_levin_utrunc_workspace )=>double" },
  { dao_gsl_sum_levin_utrunc_workspace_GETF_dsum, ".dsum( self :gsl_sum_levin_utrunc_workspace )=>double" },
  { dao_gsl_sum_levin_utrunc_workspace_gsl_sum_levin_utrunc_workspace, "gsl_sum_levin_utrunc_workspace(  )=>gsl_sum_levin_utrunc_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_sum_levin_utrunc_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_sum_levin_utrunc_workspace_Typer = 
{ "gsl_sum_levin_utrunc_workspace", NULL,
  dao_gsl_sum_levin_utrunc_workspace_Nums,
  dao_gsl_sum_levin_utrunc_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_sum_levin_utrunc_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_sum_levin_utrunc_workspace_Typer = & gsl_sum_levin_utrunc_workspace_Typer;
DaoType *dao_type_gsl_sum_levin_utrunc_workspace = NULL;
static void dao_gsl_sum_levin_utrunc_workspace_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_gsl_sum_levin_utrunc_workspace_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  self->size = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sum_levin_utrunc_workspace_GETF_i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->i );
}
static void dao_gsl_sum_levin_utrunc_workspace_SETF_i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  self->i = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sum_levin_utrunc_workspace_GETF_terms_used( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->terms_used );
}
static void dao_gsl_sum_levin_utrunc_workspace_SETF_terms_used( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  self->terms_used = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_sum_levin_utrunc_workspace_GETF_sum_plain( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  DaoProcess_PutDouble( _proc, (double) self->sum_plain );
}
static void dao_gsl_sum_levin_utrunc_workspace_SETF_sum_plain( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  self->sum_plain = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_gsl_sum_levin_utrunc_workspace_GETF_q_num( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->q_num, 0 );
}
static void dao_gsl_sum_levin_utrunc_workspace_GETF_q_den( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->q_den, 0 );
}
static void dao_gsl_sum_levin_utrunc_workspace_GETF_dsum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_sum_levin_utrunc_workspace *self = (gsl_sum_levin_utrunc_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_sum_levin_utrunc_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->dsum, 0 );
}
static void dao_gsl_sum_levin_utrunc_workspace_gsl_sum_levin_utrunc_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_sum_levin_utrunc_workspace *self = Dao_gsl_sum_levin_utrunc_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_sum_levin_utrunc_workspace );
}
/* /usr/local/include/gsl/gsl_wavelet.h */


static DaoNumItem dao_gsl_wavelet_type_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_wavelet_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_type_gsl_wavelet_type( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_wavelet_type_Meths[] = 
{
  { dao_gsl_wavelet_type_GETF_name, ".name( self :gsl_wavelet_type )=>string" },
  { dao_gsl_wavelet_type_gsl_wavelet_type, "gsl_wavelet_type(  )=>gsl_wavelet_type" },
  { NULL, NULL }
};
static void Dao_gsl_wavelet_type_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_wavelet_type_Typer = 
{ "gsl_wavelet_type", NULL,
  dao_gsl_wavelet_type_Nums,
  dao_gsl_wavelet_type_Meths,
  { NULL },
  { NULL },
  Dao_gsl_wavelet_type_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_wavelet_type_Typer = & gsl_wavelet_type_Typer;
DaoType *dao_type_gsl_wavelet_type = NULL;
static void dao_gsl_wavelet_type_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet_type *self = (gsl_wavelet_type*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet_type);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_gsl_wavelet_type_gsl_wavelet_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_gsl_wavelet_type *self = Dao_gsl_wavelet_type_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/gsl/gsl_wavelet.h */


static DaoNumItem dao_gsl_wavelet_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_wavelet_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_GETF_h1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_GETF_g1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_GETF_h2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_GETF_g2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_GETF_nc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_SETF_nc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_GETF_offset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_SETF_offset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_gsl_wavelet( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_wavelet_Meths[] = 
{
  { dao_gsl_wavelet_GETF_type, ".type( self :gsl_wavelet )=>gsl_wavelet_type" },
  { dao_gsl_wavelet_GETF_h1, ".h1( self :gsl_wavelet )=>array<double>" },
  { dao_gsl_wavelet_GETF_g1, ".g1( self :gsl_wavelet )=>array<double>" },
  { dao_gsl_wavelet_GETF_h2, ".h2( self :gsl_wavelet )=>array<double>" },
  { dao_gsl_wavelet_GETF_g2, ".g2( self :gsl_wavelet )=>array<double>" },
  { dao_gsl_wavelet_GETF_nc, ".nc( self :gsl_wavelet )=>int" },
  { dao_gsl_wavelet_SETF_nc, ".nc=( self :gsl_wavelet, nc :int )" },
  { dao_gsl_wavelet_GETF_offset, ".offset( self :gsl_wavelet )=>int" },
  { dao_gsl_wavelet_SETF_offset, ".offset=( self :gsl_wavelet, offset :int )" },
  { dao_gsl_wavelet_gsl_wavelet, "gsl_wavelet(  )=>gsl_wavelet" },
  { NULL, NULL }
};
static void Dao_gsl_wavelet_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_wavelet_Typer = 
{ "gsl_wavelet", NULL,
  dao_gsl_wavelet_Nums,
  dao_gsl_wavelet_Meths,
  { NULL },
  { NULL },
  Dao_gsl_wavelet_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_wavelet_Typer = & gsl_wavelet_Typer;
DaoType *dao_type_gsl_wavelet = NULL;
static void dao_gsl_wavelet_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet *self = (gsl_wavelet*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet);
  DaoProcess_WrapCdata( _proc, (void*) self->type, dao_type_gsl_wavelet_type );
}
static void dao_gsl_wavelet_GETF_h1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet *self = (gsl_wavelet*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet);
  DaoProcess_PutVectorD( _proc, (double*) self->h1, 0 );
}
static void dao_gsl_wavelet_GETF_g1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet *self = (gsl_wavelet*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet);
  DaoProcess_PutVectorD( _proc, (double*) self->g1, 0 );
}
static void dao_gsl_wavelet_GETF_h2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet *self = (gsl_wavelet*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet);
  DaoProcess_PutVectorD( _proc, (double*) self->h2, 0 );
}
static void dao_gsl_wavelet_GETF_g2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet *self = (gsl_wavelet*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet);
  DaoProcess_PutVectorD( _proc, (double*) self->g2, 0 );
}
static void dao_gsl_wavelet_GETF_nc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet *self = (gsl_wavelet*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet);
  DaoProcess_PutInteger( _proc, (daoint) self->nc );
}
static void dao_gsl_wavelet_SETF_nc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet *self = (gsl_wavelet*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet);
  self->nc = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_wavelet_GETF_offset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet *self = (gsl_wavelet*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet);
  DaoProcess_PutInteger( _proc, (daoint) self->offset );
}
static void dao_gsl_wavelet_SETF_offset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet *self = (gsl_wavelet*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet);
  self->offset = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_wavelet_gsl_wavelet( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_wavelet *self = Dao_gsl_wavelet_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_wavelet );
}
/* /usr/local/include/gsl/gsl_wavelet.h */


static DaoNumItem dao_gsl_wavelet_workspace_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_gsl_wavelet_workspace_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_gsl_wavelet_workspace_gsl_wavelet_workspace( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_gsl_wavelet_workspace_Meths[] = 
{
  { dao_gsl_wavelet_workspace_GETF_scratch, ".scratch( self :gsl_wavelet_workspace )=>double" },
  { dao_gsl_wavelet_workspace_GETF_n, ".n( self :gsl_wavelet_workspace )=>int" },
  { dao_gsl_wavelet_workspace_SETF_n, ".n=( self :gsl_wavelet_workspace, n :int )" },
  { dao_gsl_wavelet_workspace_gsl_wavelet_workspace, "gsl_wavelet_workspace(  )=>gsl_wavelet_workspace" },
  { NULL, NULL }
};
static void Dao_gsl_wavelet_workspace_Delete( void *self )
{
	free( self );
}

static DaoTypeBase gsl_wavelet_workspace_Typer = 
{ "gsl_wavelet_workspace", NULL,
  dao_gsl_wavelet_workspace_Nums,
  dao_gsl_wavelet_workspace_Meths,
  { NULL },
  { NULL },
  Dao_gsl_wavelet_workspace_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GSL *dao_gsl_wavelet_workspace_Typer = & gsl_wavelet_workspace_Typer;
DaoType *dao_type_gsl_wavelet_workspace = NULL;
static void dao_gsl_wavelet_workspace_GETF_scratch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet_workspace *self = (gsl_wavelet_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet_workspace);
  DaoProcess_PutVectorD( _proc, (double*) self->scratch, 0 );
}
static void dao_gsl_wavelet_workspace_GETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet_workspace *self = (gsl_wavelet_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet_workspace);
  DaoProcess_PutInteger( _proc, (daoint) self->n );
}
static void dao_gsl_wavelet_workspace_SETF_n( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  gsl_wavelet_workspace *self = (gsl_wavelet_workspace*)DaoValue_TryCastCdata(_p[0],dao_type_gsl_wavelet_workspace);
  self->n = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_gsl_wavelet_workspace_gsl_wavelet_workspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	gsl_wavelet_workspace *self = Dao_gsl_wavelet_workspace_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_gsl_wavelet_workspace );
}
#ifdef __cplusplus
}
#endif
