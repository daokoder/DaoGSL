
#define module_name GSL
#undef module_name

#define dao_gsl_matrix_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_view_array(double*,const size_t,const size_t)

#define dao_gsl_matrix_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_view_array_with_tda(double*,const size_t,const size_t,const size_t)

#define dao_gsl_matrix_const_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_const_view_array(const double*,const size_t,const size_t)

#define dao_gsl_matrix_const_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_const_view_array_with_tda(const double*,const size_t,const size_t,const size_t)

#define dao_gsl_matrix_float_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_float_view_array(float*,const size_t,const size_t)

#define dao_gsl_matrix_float_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_float_view_array_with_tda(float*,const size_t,const size_t,const size_t)

#define dao_gsl_matrix_float_const_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_float_const_view_array(const float*,const size_t,const size_t)

#define dao_gsl_matrix_float_const_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_float_const_view_array_with_tda(const float*,const size_t,const size_t,const size_t)

#define dao_gsl_matrix_int_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_int_view_array(int*,const size_t,const size_t)

#define dao_gsl_matrix_int_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_int_view_array_with_tda(int*,const size_t,const size_t,const size_t)

#define dao_gsl_matrix_int_const_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_int_const_view_array(const int*,const size_t,const size_t)

#define dao_gsl_matrix_int_const_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_int_const_view_array_with_tda(const int*,const size_t,const size_t,const size_t)

#define dao_gsl_matrix_long_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_long_view_array(long*,const size_t,const size_t)

#define dao_gsl_matrix_long_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_long_view_array_with_tda(long*,const size_t,const size_t,const size_t)

#define dao_gsl_matrix_long_const_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_long_const_view_array(const long*,const size_t,const size_t)

#define dao_gsl_matrix_long_const_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_long_const_view_array_with_tda(const long*,const size_t,const size_t,const size_t)

#define dao_gsl_matrix_short_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_short_view_array(short*,const size_t,const size_t)

#define dao_gsl_matrix_short_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_short_view_array_with_tda(short*,const size_t,const size_t,const size_t)

#define dao_gsl_matrix_short_const_view_array(base_dao_hint_array_n1_TIMES_n2,n1,n2) gsl_matrix_short_const_view_array(const short*,const size_t,const size_t)

#define dao_gsl_matrix_short_const_view_array_with_tda(base_dao_hint_array_n1_TIMES_tda,n1,n2,tda) gsl_matrix_short_const_view_array_with_tda(const short*,const size_t,const size_t,const size_t)


#define dao_gsl_vector_view_array(base_dao_hint_array_n,n) gsl_vector_view_array(double*,size_t)

#define dao_gsl_vector_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_view_array_with_stride(double*,size_t,size_t)

#define dao_gsl_vector_const_view_array(base_dao_hint_array_n,n) gsl_vector_const_view_array(const double*,size_t)

#define dao_gsl_vector_const_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_const_view_array_with_stride(const double*,size_t,size_t)

#define dao_gsl_vector_float_view_array(base_dao_hint_array_n,n) gsl_vector_float_view_array(float*,size_t)

#define dao_gsl_vector_float_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_float_view_array_with_stride(float*,size_t,size_t)

#define dao_gsl_vector_float_const_view_array(base_dao_hint_array_n,n) gsl_vector_float_const_view_array(const float*,size_t)

#define dao_gsl_vector_float_const_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_float_const_view_array_with_stride(const float*,size_t,size_t)

#define dao_gsl_vector_int_view_array(base_dao_hint_array_n,n) gsl_vector_int_view_array(int*,size_t)

#define dao_gsl_vector_int_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_int_view_array_with_stride(int*,size_t,size_t)

#define dao_gsl_vector_int_const_view_array(base_dao_hint_array_n,n) gsl_vector_int_const_view_array(const int*,size_t)

#define dao_gsl_vector_int_const_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_int_const_view_array_with_stride(const int*,size_t,size_t)

#define dao_gsl_vector_long_view_array(base_dao_hint_array_n,n) gsl_vector_long_view_array(long*,size_t)

#define dao_gsl_vector_long_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_long_view_array_with_stride(long*,size_t,size_t)

#define dao_gsl_vector_long_const_view_array(base_dao_hint_array_n,n) gsl_vector_long_const_view_array(const long*,size_t)

#define dao_gsl_vector_long_const_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_long_const_view_array_with_stride(const long*,size_t,size_t)

#define dao_gsl_vector_short_view_array(base_dao_hint_array_n,n) gsl_vector_short_view_array(short*,size_t)

#define dao_gsl_vector_short_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_short_view_array_with_stride(short*,size_t,size_t)

#define dao_gsl_vector_short_const_view_array(base_dao_hint_array_n,n) gsl_vector_short_const_view_array(const short*,size_t)

#define dao_gsl_vector_short_const_view_array_with_stride(base_dao_hint_array_n,stride,n) gsl_vector_short_const_view_array_with_stride(const short*,size_t,size_t)

#define dao_gsl_fit_wlinear(x_dao_hint_array_n,xstride,w_dao_hint_array_n,wstride,y_dao_hint_array_n,ystride,n,c0,c1,cov00,cov01,cov11,chisq) gsl_fit_wlinear(const double*,const size_t,const double*,const size_t,const double*,const size_t,const size_t,double*,double*,double*,double*,double*,double*)

#define dao_gsl_fit_mul(x_dao_hint_array_n,xstride,,y_dao_hint_array_n,ystride,n,c1,cov11,sumsq) gsl_fit_mul(const double*,const size_t,const double*,const size_t,const size_t,double*,double*,double*)

#define dao_gsl_fit_wmul(x_dao_hint_array_n,xstride,w_dao_hint_array_n,wstride,y_dao_hint_array_n,ystride,n,c1,cov11,sumsq) gsl_fit_wmul(const double*,const size_t,const double*,const size_t,const double*,const size_t,const size_t,double*,double*,double*)

#define X_dao_hint_callbackdata_params(t,y_dao_hint_array_0,dydt_dao_hint_array_0,params) gsl_odeiv_system::function(double,const double*,double*,void*)
#undef X_dao_hint_callbackdata_params

#define X_dao_hint_callbackdata_params(t,y_dao_hint_array_0,dfdy,dydt_dao_hint_array_0,params) gsl_odeiv_system::jacobian(double,const double*,double*,double*,void*)
#undef X_dao_hint_callbackdata_params

#define params_dao_hint_callbackdata_params() gsl_odeiv_system::params
#undef params_dao_hint_callbackdata_params


#include<gsl/gsl_blas.h>
#include<gsl/gsl_blas_types.h>
#include<gsl/gsl_block.h>
#include<gsl/gsl_block_char.h>
#include<gsl/gsl_block_complex_double.h>
#include<gsl/gsl_block_complex_float.h>
#include<gsl/gsl_block_complex_long_double.h>
#include<gsl/gsl_block_double.h>
#include<gsl/gsl_block_float.h>
#include<gsl/gsl_block_int.h>
#include<gsl/gsl_block_long.h>
#include<gsl/gsl_block_long_double.h>
#include<gsl/gsl_block_short.h>
#include<gsl/gsl_block_uchar.h>
#include<gsl/gsl_block_uint.h>
#include<gsl/gsl_block_ulong.h>
#include<gsl/gsl_block_ushort.h>
#include<gsl/gsl_bspline.h>
#include<gsl/gsl_cblas.h>
#include<gsl/gsl_cdf.h>
#include<gsl/gsl_chebyshev.h>
#include<gsl/gsl_check_range.h>
#include<gsl/gsl_combination.h>
#include<gsl/gsl_complex.h>
#include<gsl/gsl_complex_math.h>
#include<gsl/gsl_const.h>
#include<gsl/gsl_const_cgs.h>
#include<gsl/gsl_const_cgsm.h>
#include<gsl/gsl_const_mks.h>
#include<gsl/gsl_const_mksa.h>
#include<gsl/gsl_const_num.h>
#include<gsl/gsl_deriv.h>
#include<gsl/gsl_dft_complex.h>
#include<gsl/gsl_dft_complex_float.h>
#include<gsl/gsl_dht.h>
#include<gsl/gsl_diff.h>
#include<gsl/gsl_eigen.h>
#include<gsl/gsl_errno.h>
#include<gsl/gsl_fft.h>
#include<gsl/gsl_fft_complex.h>
#include<gsl/gsl_fft_complex_float.h>
#include<gsl/gsl_fft_halfcomplex.h>
#include<gsl/gsl_fft_halfcomplex_float.h>
#include<gsl/gsl_fft_real.h>
#include<gsl/gsl_fft_real_float.h>
#include<gsl/gsl_fit.h>
#include<gsl/gsl_heapsort.h>
#include<gsl/gsl_histogram.h>
#include<gsl/gsl_histogram2d.h>
#include<gsl/gsl_ieee_utils.h>
#include<gsl/gsl_inline.h>
#include<gsl/gsl_integration.h>
#include<gsl/gsl_interp.h>
#include<gsl/gsl_linalg.h>
#include<gsl/gsl_machine.h>
#include<gsl/gsl_math.h>
#include<gsl/gsl_matrix.h>
#include<gsl/gsl_matrix_char.h>
#include<gsl/gsl_matrix_complex_double.h>
#include<gsl/gsl_matrix_complex_float.h>
#include<gsl/gsl_matrix_complex_long_double.h>
#include<gsl/gsl_matrix_double.h>
#include<gsl/gsl_matrix_float.h>
#include<gsl/gsl_matrix_int.h>
#include<gsl/gsl_matrix_long.h>
#include<gsl/gsl_matrix_long_double.h>
#include<gsl/gsl_matrix_short.h>
#include<gsl/gsl_matrix_uchar.h>
#include<gsl/gsl_matrix_uint.h>
#include<gsl/gsl_matrix_ulong.h>
#include<gsl/gsl_matrix_ushort.h>
#include<gsl/gsl_message.h>
#include<gsl/gsl_min.h>
#include<gsl/gsl_minmax.h>
#include<gsl/gsl_mode.h>
#include<gsl/gsl_monte.h>
#include<gsl/gsl_monte_miser.h>
#include<gsl/gsl_monte_plain.h>
#include<gsl/gsl_monte_vegas.h>
#include<gsl/gsl_multifit.h>
#include<gsl/gsl_multifit_nlin.h>
#include<gsl/gsl_multimin.h>
#include<gsl/gsl_multiroots.h>
#include<gsl/gsl_multiset.h>
#include<gsl/gsl_nan.h>
#include<gsl/gsl_ntuple.h>
#include<gsl/gsl_odeiv.h>
#include<gsl/gsl_odeiv2.h>
#include<gsl/gsl_permutation.h>
#include<gsl/gsl_permute.h>
#include<gsl/gsl_permute_char.h>
#include<gsl/gsl_permute_complex_double.h>
#include<gsl/gsl_permute_complex_float.h>
#include<gsl/gsl_permute_complex_long_double.h>
#include<gsl/gsl_permute_double.h>
#include<gsl/gsl_permute_float.h>
#include<gsl/gsl_permute_int.h>
#include<gsl/gsl_permute_long.h>
#include<gsl/gsl_permute_long_double.h>
#include<gsl/gsl_permute_short.h>
#include<gsl/gsl_permute_uchar.h>
#include<gsl/gsl_permute_uint.h>
#include<gsl/gsl_permute_ulong.h>
#include<gsl/gsl_permute_ushort.h>
#include<gsl/gsl_permute_vector.h>
#include<gsl/gsl_permute_vector_char.h>
#include<gsl/gsl_permute_vector_complex_double.h>
#include<gsl/gsl_permute_vector_complex_float.h>
#include<gsl/gsl_permute_vector_complex_long_double.h>
#include<gsl/gsl_permute_vector_double.h>
#include<gsl/gsl_permute_vector_float.h>
#include<gsl/gsl_permute_vector_int.h>
#include<gsl/gsl_permute_vector_long.h>
#include<gsl/gsl_permute_vector_long_double.h>
#include<gsl/gsl_permute_vector_short.h>
#include<gsl/gsl_permute_vector_uchar.h>
#include<gsl/gsl_permute_vector_uint.h>
#include<gsl/gsl_permute_vector_ulong.h>
#include<gsl/gsl_permute_vector_ushort.h>
#include<gsl/gsl_poly.h>
#include<gsl/gsl_pow_int.h>
#include<gsl/gsl_precision.h>
#include<gsl/gsl_qrng.h>
#include<gsl/gsl_randist.h>
#include<gsl/gsl_rng.h>
#include<gsl/gsl_roots.h>
#include<gsl/gsl_sf.h>
#include<gsl/gsl_sf_airy.h>
#include<gsl/gsl_sf_bessel.h>
#include<gsl/gsl_sf_clausen.h>
#include<gsl/gsl_sf_coulomb.h>
#include<gsl/gsl_sf_coupling.h>
#include<gsl/gsl_sf_dawson.h>
#include<gsl/gsl_sf_debye.h>
#include<gsl/gsl_sf_dilog.h>
#include<gsl/gsl_sf_elementary.h>
#include<gsl/gsl_sf_ellint.h>
#include<gsl/gsl_sf_elljac.h>
#include<gsl/gsl_sf_erf.h>
#include<gsl/gsl_sf_exp.h>
#include<gsl/gsl_sf_expint.h>
#include<gsl/gsl_sf_fermi_dirac.h>
#include<gsl/gsl_sf_gamma.h>
#include<gsl/gsl_sf_gegenbauer.h>
#include<gsl/gsl_sf_hyperg.h>
#include<gsl/gsl_sf_laguerre.h>
#include<gsl/gsl_sf_lambert.h>
#include<gsl/gsl_sf_legendre.h>
#include<gsl/gsl_sf_log.h>
#include<gsl/gsl_sf_mathieu.h>
#include<gsl/gsl_sf_pow_int.h>
#include<gsl/gsl_sf_psi.h>
#include<gsl/gsl_sf_result.h>
#include<gsl/gsl_sf_synchrotron.h>
#include<gsl/gsl_sf_transport.h>
#include<gsl/gsl_sf_trig.h>
#include<gsl/gsl_sf_zeta.h>
#include<gsl/gsl_siman.h>
#include<gsl/gsl_sort.h>
#include<gsl/gsl_sort_char.h>
#include<gsl/gsl_sort_double.h>
#include<gsl/gsl_sort_float.h>
#include<gsl/gsl_sort_int.h>
#include<gsl/gsl_sort_long.h>
#include<gsl/gsl_sort_long_double.h>
#include<gsl/gsl_sort_short.h>
#include<gsl/gsl_sort_uchar.h>
#include<gsl/gsl_sort_uint.h>
#include<gsl/gsl_sort_ulong.h>
#include<gsl/gsl_sort_ushort.h>
#include<gsl/gsl_sort_vector.h>
#include<gsl/gsl_sort_vector_char.h>
#include<gsl/gsl_sort_vector_double.h>
#include<gsl/gsl_sort_vector_float.h>
#include<gsl/gsl_sort_vector_int.h>
#include<gsl/gsl_sort_vector_long.h>
#include<gsl/gsl_sort_vector_long_double.h>
#include<gsl/gsl_sort_vector_short.h>
#include<gsl/gsl_sort_vector_uchar.h>
#include<gsl/gsl_sort_vector_uint.h>
#include<gsl/gsl_sort_vector_ulong.h>
#include<gsl/gsl_sort_vector_ushort.h>
#include<gsl/gsl_specfunc.h>
#include<gsl/gsl_spline.h>
#include<gsl/gsl_statistics.h>
#include<gsl/gsl_statistics_char.h>
#include<gsl/gsl_statistics_double.h>
#include<gsl/gsl_statistics_float.h>
#include<gsl/gsl_statistics_int.h>
#include<gsl/gsl_statistics_long.h>
#include<gsl/gsl_statistics_long_double.h>
#include<gsl/gsl_statistics_short.h>
#include<gsl/gsl_statistics_uchar.h>
#include<gsl/gsl_statistics_uint.h>
#include<gsl/gsl_statistics_ulong.h>
#include<gsl/gsl_statistics_ushort.h>
#include<gsl/gsl_sum.h>
#include<gsl/gsl_sys.h>
#include<gsl/gsl_test.h>
#include<gsl/gsl_types.h>
#include<gsl/gsl_vector.h>
#include<gsl/gsl_vector_char.h>
#include<gsl/gsl_vector_complex.h>
#include<gsl/gsl_vector_complex_double.h>
#include<gsl/gsl_vector_complex_float.h>
#include<gsl/gsl_vector_complex_long_double.h>
#include<gsl/gsl_vector_double.h>
#include<gsl/gsl_vector_float.h>
#include<gsl/gsl_vector_int.h>
#include<gsl/gsl_vector_long.h>
#include<gsl/gsl_vector_long_double.h>
#include<gsl/gsl_vector_short.h>
#include<gsl/gsl_vector_uchar.h>
#include<gsl/gsl_vector_uint.h>
#include<gsl/gsl_vector_ulong.h>
#include<gsl/gsl_vector_ushort.h>
#include<gsl/gsl_version.h>
#include<gsl/gsl_wavelet.h>
#include<gsl/gsl_wavelet2d.h>
