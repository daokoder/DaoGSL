#ifndef __DAO_GSL_H__
#define __DAO_GSL_H__
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<dao.h>

#ifdef __cplusplus
extern "C"{
#endif
#include<modules/auxlib/dao_aux.h>

#include<daoArray.h>

#ifdef __cplusplus
}
#endif
#include"gsl/gsl_blas.h"
#include"gsl/gsl_vector.h"
#include"gsl/gsl_matrix.h"
#include"gsl/gsl_vector_complex_long_double.h"
#include"gsl/gsl_vector_complex_double.h"
#include"gsl/gsl_types.h"
#include"gsl/gsl_errno.h"
#include"gsl/gsl_complex.h"
#include"gsl/gsl_check_range.h"
#include"gsl/gsl_vector_long_double.h"
#include"gsl/gsl_inline.h"
#include"gsl/gsl_block_long_double.h"
#include"gsl/gsl_vector_complex.h"
#include"gsl/gsl_block_complex_long_double.h"
#include"gsl/gsl_vector_double.h"
#include"gsl/gsl_block_complex_double.h"
#include"gsl/gsl_block_double.h"
#include"gsl/gsl_vector_complex_float.h"
#include"gsl/gsl_vector_float.h"
#include"gsl/gsl_block_complex_float.h"
#include"gsl/gsl_block_float.h"
#include"gsl/gsl_vector_ulong.h"
#include"gsl/gsl_vector_long.h"
#include"gsl/gsl_block_ulong.h"
#include"gsl/gsl_vector_uint.h"
#include"gsl/gsl_block_long.h"
#include"gsl/gsl_vector_int.h"
#include"gsl/gsl_block_uint.h"
#include"gsl/gsl_block_int.h"
#include"gsl/gsl_vector_ushort.h"
#include"gsl/gsl_block_ushort.h"
#include"gsl/gsl_vector_short.h"
#include"gsl/gsl_vector_uchar.h"
#include"gsl/gsl_block_short.h"
#include"gsl/gsl_vector_char.h"
#include"gsl/gsl_block_uchar.h"
#include"gsl/gsl_cblas.h"
#include"gsl/gsl_block_char.h"
#include"gsl/gsl_matrix_complex_long_double.h"
#include"gsl/gsl_matrix_complex_double.h"
#include"gsl/gsl_matrix_complex_float.h"
#include"gsl/gsl_matrix_long_double.h"
#include"gsl/gsl_matrix_float.h"
#include"gsl/gsl_matrix_double.h"
#include"gsl/gsl_matrix_ulong.h"
#include"gsl/gsl_matrix_long.h"
#include"gsl/gsl_matrix_uint.h"
#include"gsl/gsl_matrix_int.h"
#include"gsl/gsl_matrix_ushort.h"
#include"gsl/gsl_matrix_short.h"
#include"gsl/gsl_matrix_uchar.h"
#include"gsl/gsl_matrix_char.h"
#include"gsl/gsl_blas_types.h"
#include"gsl/gsl_block.h"
#include"gsl/gsl_bspline.h"
#include"gsl/gsl_math.h"
#include"gsl/gsl_sys.h"
#include"gsl/gsl_machine.h"
#include"gsl/gsl_nan.h"
#include"gsl/gsl_precision.h"
#include"gsl/gsl_pow_int.h"
#include"gsl/gsl_minmax.h"
#include"gsl/gsl_cdf.h"
#include"gsl/gsl_mode.h"
#include"gsl/gsl_chebyshev.h"
#include"gsl/gsl_combination.h"
#include"gsl/gsl_complex_math.h"
#include"gsl/gsl_const_cgs.h"
#include"gsl/gsl_const_num.h"
#include"gsl/gsl_const_cgsm.h"
#include"gsl/gsl_const_mksa.h"
#include"gsl/gsl_deriv.h"
#include"gsl/gsl_const.h"
#include"gsl/gsl_const_mks.h"
#include"gsl/gsl_dft_complex.h"
#include"gsl/gsl_fft.h"
#include"gsl/gsl_dft_complex_float.h"
#include"gsl/gsl_dht.h"
#include"gsl/gsl_diff.h"
#include"gsl/gsl_eigen.h"
#include"gsl/gsl_fft_complex.h"
#include"gsl/gsl_fft_complex_float.h"
#include"gsl/gsl_fft_real.h"
#include"gsl/gsl_fft_halfcomplex.h"
#include"gsl/gsl_fft_real_float.h"
#include"gsl/gsl_fft_halfcomplex_float.h"
#include"gsl/gsl_fit.h"
#include"gsl/gsl_permutation.h"
#include"gsl/gsl_heapsort.h"
#include"gsl/gsl_histogram.h"
#include"gsl/gsl_histogram2d.h"
#include"gsl/gsl_ieee_utils.h"
#include"gsl/gsl_integration.h"
#include"gsl/gsl_interp.h"
#include"gsl/gsl_linalg.h"
#include"gsl/gsl_monte.h"
#include"gsl/gsl_message.h"
#include"gsl/gsl_min.h"
#include"gsl/gsl_rng.h"
#include"gsl/gsl_monte_plain.h"
#include"gsl/gsl_monte_miser.h"
#include"gsl/gsl_monte_vegas.h"
#include"gsl/gsl_multifit.h"
#include"gsl/gsl_multifit_nlin.h"
#include"gsl/gsl_multimin.h"
#include"gsl/gsl_multiroots.h"
#include"gsl/gsl_multiset.h"
#include"gsl/gsl_ntuple.h"
#include"gsl/gsl_odeiv.h"
#include"gsl/gsl_odeiv2.h"
#include"gsl/gsl_permute.h"
#include"gsl/gsl_permute_complex_long_double.h"
#include"gsl/gsl_permute_complex_float.h"
#include"gsl/gsl_permute_complex_double.h"
#include"gsl/gsl_permute_long_double.h"
#include"gsl/gsl_permute_double.h"
#include"gsl/gsl_permute_float.h"
#include"gsl/gsl_permute_ulong.h"
#include"gsl/gsl_permute_long.h"
#include"gsl/gsl_permute_uint.h"
#include"gsl/gsl_permute_int.h"
#include"gsl/gsl_permute_ushort.h"
#include"gsl/gsl_permute_short.h"
#include"gsl/gsl_permute_uchar.h"
#include"gsl/gsl_permute_char.h"
#include"gsl/gsl_permute_vector.h"
#include"gsl/gsl_permute_vector_complex_long_double.h"
#include"gsl/gsl_permute_vector_complex_double.h"
#include"gsl/gsl_permute_vector_complex_float.h"
#include"gsl/gsl_permute_vector_long_double.h"
#include"gsl/gsl_permute_vector_float.h"
#include"gsl/gsl_permute_vector_double.h"
#include"gsl/gsl_permute_vector_ulong.h"
#include"gsl/gsl_permute_vector_uint.h"
#include"gsl/gsl_permute_vector_long.h"
#include"gsl/gsl_permute_vector_int.h"
#include"gsl/gsl_permute_vector_ushort.h"
#include"gsl/gsl_permute_vector_short.h"
#include"gsl/gsl_permute_vector_uchar.h"
#include"gsl/gsl_permute_vector_char.h"
#include"gsl/gsl_poly.h"
#include"gsl/gsl_qrng.h"
#include"gsl/gsl_randist.h"
#include"gsl/gsl_roots.h"
#include"gsl/gsl_sf.h"
#include"gsl/gsl_sf_result.h"
#include"gsl/gsl_sf_airy.h"
#include"gsl/gsl_sf_bessel.h"
#include"gsl/gsl_sf_clausen.h"
#include"gsl/gsl_sf_coupling.h"
#include"gsl/gsl_sf_coulomb.h"
#include"gsl/gsl_sf_dawson.h"
#include"gsl/gsl_sf_debye.h"
#include"gsl/gsl_sf_dilog.h"
#include"gsl/gsl_sf_elementary.h"
#include"gsl/gsl_sf_ellint.h"
#include"gsl/gsl_sf_elljac.h"
#include"gsl/gsl_sf_erf.h"
#include"gsl/gsl_sf_exp.h"
#include"gsl/gsl_sf_expint.h"
#include"gsl/gsl_sf_fermi_dirac.h"
#include"gsl/gsl_sf_gamma.h"
#include"gsl/gsl_sf_gegenbauer.h"
#include"gsl/gsl_sf_hyperg.h"
#include"gsl/gsl_sf_laguerre.h"
#include"gsl/gsl_sf_lambert.h"
#include"gsl/gsl_sf_legendre.h"
#include"gsl/gsl_sf_log.h"
#include"gsl/gsl_sf_mathieu.h"
#include"gsl/gsl_sf_pow_int.h"
#include"gsl/gsl_sf_psi.h"
#include"gsl/gsl_sf_synchrotron.h"
#include"gsl/gsl_sf_trig.h"
#include"gsl/gsl_sf_transport.h"
#include"gsl/gsl_sf_zeta.h"
#include"gsl/gsl_siman.h"
#include"gsl/gsl_sort_double.h"
#include"gsl/gsl_sort.h"
#include"gsl/gsl_sort_long_double.h"
#include"gsl/gsl_sort_float.h"
#include"gsl/gsl_sort_long.h"
#include"gsl/gsl_sort_ulong.h"
#include"gsl/gsl_sort_uint.h"
#include"gsl/gsl_sort_int.h"
#include"gsl/gsl_sort_ushort.h"
#include"gsl/gsl_sort_short.h"
#include"gsl/gsl_sort_uchar.h"
#include"gsl/gsl_sort_char.h"
#include"gsl/gsl_sort_vector.h"
#include"gsl/gsl_sort_vector_long_double.h"
#include"gsl/gsl_sort_vector_double.h"
#include"gsl/gsl_sort_vector_float.h"
#include"gsl/gsl_sort_vector_ulong.h"
#include"gsl/gsl_sort_vector_long.h"
#include"gsl/gsl_sort_vector_uint.h"
#include"gsl/gsl_sort_vector_int.h"
#include"gsl/gsl_sort_vector_ushort.h"
#include"gsl/gsl_sort_vector_short.h"
#include"gsl/gsl_sort_vector_uchar.h"
#include"gsl/gsl_sort_vector_char.h"
#include"gsl/gsl_specfunc.h"
#include"gsl/gsl_spline.h"
#include"gsl/gsl_statistics.h"
#include"gsl/gsl_statistics_long_double.h"
#include"gsl/gsl_statistics_double.h"
#include"gsl/gsl_statistics_float.h"
#include"gsl/gsl_statistics_ulong.h"
#include"gsl/gsl_statistics_long.h"
#include"gsl/gsl_statistics_uint.h"
#include"gsl/gsl_statistics_int.h"
#include"gsl/gsl_statistics_ushort.h"
#include"gsl/gsl_statistics_short.h"
#include"gsl/gsl_statistics_uchar.h"
#include"gsl/gsl_statistics_char.h"
#include"gsl/gsl_sum.h"
#include"gsl/gsl_test.h"
#include"gsl/gsl_version.h"
#include"gsl/gsl_wavelet.h"
#include"gsl/gsl_wavelet2d.h"


#ifndef DAO_GSL_STATIC
#ifndef DAO_DLL_GSL
#define DAO_DLL_GSL DAO_DLL_EXPORT
#endif
#else
#define DAO_DLL_GSL
#endif

extern DaoVmSpace *__daoVmSpace;
#ifdef __cplusplus
extern "C"{
#endif
extern DaoTypeBase *dao__opaque_pthread_attr_t_Typer;
extern DaoTypeBase *dao_sigval_Typer;
extern DaoTypeBase *dao_timeval_Typer;
extern DaoTypeBase *dao___sFILE_Typer;
extern DaoTypeBase *dao_gsl_complex_long_double_Typer;
extern DaoTypeBase *dao_gsl_complex_Typer;
extern DaoTypeBase *dao_gsl_complex_float_Typer;
extern DaoTypeBase *dao_gsl_block_long_double_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_long_double_Typer;
extern DaoTypeBase *dao__gsl_vector_long_double_view_Typer;
extern DaoTypeBase *dao__gsl_vector_long_double_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_complex_long_double_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_complex_long_double_Typer;
extern DaoTypeBase *dao__gsl_vector_complex_long_double_view_Typer;
extern DaoTypeBase *dao__gsl_vector_complex_long_double_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_Typer;
extern DaoTypeBase *dao__gsl_vector_view_Typer;
extern DaoTypeBase *dao__gsl_vector_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_complex_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_complex_Typer;
extern DaoTypeBase *dao__gsl_vector_complex_view_Typer;
extern DaoTypeBase *dao__gsl_vector_complex_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_float_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_float_Typer;
extern DaoTypeBase *dao__gsl_vector_float_view_Typer;
extern DaoTypeBase *dao__gsl_vector_float_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_complex_float_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_complex_float_Typer;
extern DaoTypeBase *dao__gsl_vector_complex_float_view_Typer;
extern DaoTypeBase *dao__gsl_vector_complex_float_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_ulong_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_ulong_Typer;
extern DaoTypeBase *dao__gsl_vector_ulong_view_Typer;
extern DaoTypeBase *dao__gsl_vector_ulong_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_long_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_long_Typer;
extern DaoTypeBase *dao__gsl_vector_long_view_Typer;
extern DaoTypeBase *dao__gsl_vector_long_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_uint_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_uint_Typer;
extern DaoTypeBase *dao__gsl_vector_uint_view_Typer;
extern DaoTypeBase *dao__gsl_vector_uint_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_int_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_int_Typer;
extern DaoTypeBase *dao__gsl_vector_int_view_Typer;
extern DaoTypeBase *dao__gsl_vector_int_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_ushort_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_ushort_Typer;
extern DaoTypeBase *dao__gsl_vector_ushort_view_Typer;
extern DaoTypeBase *dao__gsl_vector_ushort_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_short_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_short_Typer;
extern DaoTypeBase *dao__gsl_vector_short_view_Typer;
extern DaoTypeBase *dao__gsl_vector_short_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_uchar_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_uchar_Typer;
extern DaoTypeBase *dao__gsl_vector_uchar_view_Typer;
extern DaoTypeBase *dao__gsl_vector_uchar_const_view_Typer;
extern DaoTypeBase *dao_gsl_block_char_struct_Typer;
extern DaoTypeBase *dao_gsl_vector_char_Typer;
extern DaoTypeBase *dao__gsl_vector_char_view_Typer;
extern DaoTypeBase *dao__gsl_vector_char_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_complex_long_double_Typer;
extern DaoTypeBase *dao__gsl_matrix_complex_long_double_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_complex_long_double_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_complex_Typer;
extern DaoTypeBase *dao__gsl_matrix_complex_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_complex_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_complex_float_Typer;
extern DaoTypeBase *dao__gsl_matrix_complex_float_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_complex_float_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_long_double_Typer;
extern DaoTypeBase *dao__gsl_matrix_long_double_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_long_double_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_Typer;
extern DaoTypeBase *dao__gsl_matrix_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_float_Typer;
extern DaoTypeBase *dao__gsl_matrix_float_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_float_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_ulong_Typer;
extern DaoTypeBase *dao__gsl_matrix_ulong_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_ulong_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_long_Typer;
extern DaoTypeBase *dao__gsl_matrix_long_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_long_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_uint_Typer;
extern DaoTypeBase *dao__gsl_matrix_uint_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_uint_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_int_Typer;
extern DaoTypeBase *dao__gsl_matrix_int_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_int_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_ushort_Typer;
extern DaoTypeBase *dao__gsl_matrix_ushort_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_ushort_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_short_Typer;
extern DaoTypeBase *dao__gsl_matrix_short_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_short_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_uchar_Typer;
extern DaoTypeBase *dao__gsl_matrix_uchar_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_uchar_const_view_Typer;
extern DaoTypeBase *dao_gsl_matrix_char_Typer;
extern DaoTypeBase *dao__gsl_matrix_char_view_Typer;
extern DaoTypeBase *dao__gsl_matrix_char_const_view_Typer;
extern DaoTypeBase *dao_gsl_function_struct_Typer;
extern DaoTypeBase *dao_gsl_function_fdf_struct_Typer;
extern DaoTypeBase *dao_gsl_function_vec_struct_Typer;
extern DaoTypeBase *dao_gsl_bspline_workspace_Typer;
extern DaoTypeBase *dao_gsl_bspline_deriv_workspace_Typer;
extern DaoTypeBase *dao_gsl_cheb_series_struct_Typer;
extern DaoTypeBase *dao_gsl_combination_struct_Typer;
extern DaoTypeBase *dao_gsl_dht_struct_Typer;
extern DaoTypeBase *dao_gsl_eigen_symm_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_symmv_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_herm_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_hermv_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_francis_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_nonsymm_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_nonsymmv_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_gensymm_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_gensymmv_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_genherm_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_genhermv_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_gen_workspace_Typer;
extern DaoTypeBase *dao_gsl_eigen_genv_workspace_Typer;
extern DaoTypeBase *dao_gsl_fft_complex_wavetable_Typer;
extern DaoTypeBase *dao_gsl_fft_complex_workspace_Typer;
extern DaoTypeBase *dao_gsl_fft_complex_wavetable_float_Typer;
extern DaoTypeBase *dao_gsl_fft_complex_workspace_float_Typer;
extern DaoTypeBase *dao_gsl_fft_real_wavetable_Typer;
extern DaoTypeBase *dao_gsl_fft_real_workspace_Typer;
extern DaoTypeBase *dao_gsl_fft_halfcomplex_wavetable_Typer;
extern DaoTypeBase *dao_gsl_fft_real_wavetable_float_Typer;
extern DaoTypeBase *dao_gsl_fft_real_workspace_float_Typer;
extern DaoTypeBase *dao_gsl_fft_halfcomplex_wavetable_float_Typer;
extern DaoTypeBase *dao_gsl_permutation_struct_Typer;
extern DaoTypeBase *dao_gsl_histogram_Typer;
extern DaoTypeBase *dao_gsl_histogram_pdf_Typer;
extern DaoTypeBase *dao_gsl_histogram2d_Typer;
extern DaoTypeBase *dao_gsl_histogram2d_pdf_Typer;
extern DaoTypeBase *dao_gsl_ieee_float_rep_Typer;
extern DaoTypeBase *dao_gsl_ieee_double_rep_Typer;
extern DaoTypeBase *dao_gsl_integration_workspace_Typer;
extern DaoTypeBase *dao_gsl_integration_qaws_table_Typer;
extern DaoTypeBase *dao_gsl_integration_qawo_table_Typer;
extern DaoTypeBase *dao_gsl_integration_glfixed_table_Typer;
extern DaoTypeBase *dao_gsl_integration_cquad_ival_Typer;
extern DaoTypeBase *dao_gsl_integration_cquad_workspace_Typer;
extern DaoTypeBase *dao_gsl_interp_accel_Typer;
extern DaoTypeBase *dao_gsl_interp_type_Typer;
extern DaoTypeBase *dao_gsl_interp_Typer;
extern DaoTypeBase *dao_gsl_min_fminimizer_type_Typer;
extern DaoTypeBase *dao_gsl_min_fminimizer_Typer;
extern DaoTypeBase *dao_gsl_monte_function_struct_Typer;
extern DaoTypeBase *dao_gsl_rng_type_Typer;
extern DaoTypeBase *dao_gsl_rng_Typer;
extern DaoTypeBase *dao_gsl_monte_plain_state_Typer;
extern DaoTypeBase *dao_gsl_monte_miser_state_Typer;
extern DaoTypeBase *dao_gsl_monte_miser_params_Typer;
extern DaoTypeBase *dao_gsl_monte_vegas_state_Typer;
extern DaoTypeBase *dao_gsl_monte_vegas_params_Typer;
extern DaoTypeBase *dao_gsl_multifit_linear_workspace_Typer;
extern DaoTypeBase *dao_gsl_multifit_robust_type_Typer;
extern DaoTypeBase *dao_gsl_multifit_robust_stats_Typer;
extern DaoTypeBase *dao_gsl_multifit_robust_workspace_Typer;
extern DaoTypeBase *dao_gsl_multifit_function_struct_Typer;
extern DaoTypeBase *dao_gsl_multifit_fsolver_type_Typer;
extern DaoTypeBase *dao_gsl_multifit_fsolver_Typer;
extern DaoTypeBase *dao_gsl_multifit_function_fdf_struct_Typer;
extern DaoTypeBase *dao_gsl_multifit_fdfsolver_type_Typer;
extern DaoTypeBase *dao_gsl_multifit_fdfsolver_Typer;
extern DaoTypeBase *dao_gsl_multimin_function_struct_Typer;
extern DaoTypeBase *dao_gsl_multimin_function_fdf_struct_Typer;
extern DaoTypeBase *dao_gsl_multimin_fminimizer_type_Typer;
extern DaoTypeBase *dao_gsl_multimin_fminimizer_Typer;
extern DaoTypeBase *dao_gsl_multimin_fdfminimizer_type_Typer;
extern DaoTypeBase *dao_gsl_multimin_fdfminimizer_Typer;
extern DaoTypeBase *dao_gsl_multiroot_function_struct_Typer;
extern DaoTypeBase *dao_gsl_multiroot_fsolver_type_Typer;
extern DaoTypeBase *dao_gsl_multiroot_fsolver_Typer;
extern DaoTypeBase *dao_gsl_multiroot_function_fdf_struct_Typer;
extern DaoTypeBase *dao_gsl_multiroot_fdfsolver_type_Typer;
extern DaoTypeBase *dao_gsl_multiroot_fdfsolver_Typer;
extern DaoTypeBase *dao_gsl_multiset_struct_Typer;
extern DaoTypeBase *dao_gsl_ntuple_Typer;
extern DaoTypeBase *dao_gsl_ntuple_select_fn_Typer;
extern DaoTypeBase *dao_gsl_ntuple_value_fn_Typer;
extern DaoTypeBase *dao_gsl_odeiv_system_Typer;
extern DaoTypeBase *dao_gsl_odeiv_step_type_Typer;
extern DaoTypeBase *dao_gsl_odeiv_step_Typer;
extern DaoTypeBase *dao_gsl_odeiv_control_type_Typer;
extern DaoTypeBase *dao_gsl_odeiv_control_Typer;
extern DaoTypeBase *dao_gsl_odeiv_evolve_Typer;
extern DaoTypeBase *dao_gsl_odeiv2_system_Typer;
extern DaoTypeBase *dao_gsl_odeiv2_step_struct_Typer;
extern DaoTypeBase *dao_gsl_odeiv2_control_struct_Typer;
extern DaoTypeBase *dao_gsl_odeiv2_evolve_struct_Typer;
extern DaoTypeBase *dao_gsl_odeiv2_driver_struct_Typer;
extern DaoTypeBase *dao_gsl_odeiv2_step_type_Typer;
extern DaoTypeBase *dao_gsl_odeiv2_control_type_Typer;
extern DaoTypeBase *dao_gsl_poly_complex_workspace_Typer;
extern DaoTypeBase *dao_gsl_qrng_type_Typer;
extern DaoTypeBase *dao_gsl_qrng_Typer;
extern DaoTypeBase *dao_gsl_ran_discrete_t_Typer;
extern DaoTypeBase *dao_gsl_root_fsolver_type_Typer;
extern DaoTypeBase *dao_gsl_root_fsolver_Typer;
extern DaoTypeBase *dao_gsl_root_fdfsolver_type_Typer;
extern DaoTypeBase *dao_gsl_root_fdfsolver_Typer;
extern DaoTypeBase *dao_gsl_sf_result_struct_Typer;
extern DaoTypeBase *dao_gsl_sf_result_e10_struct_Typer;
extern DaoTypeBase *dao_gsl_sf_mathieu_workspace_Typer;
extern DaoTypeBase *dao_gsl_siman_params_t_Typer;
extern DaoTypeBase *dao_gsl_spline_Typer;
extern DaoTypeBase *dao_gsl_sum_levin_u_workspace_Typer;
extern DaoTypeBase *dao_gsl_sum_levin_utrunc_workspace_Typer;
extern DaoTypeBase *dao_gsl_wavelet_type_Typer;
extern DaoTypeBase *dao_gsl_wavelet_Typer;
extern DaoTypeBase *dao_gsl_wavelet_workspace_Typer;
extern DaoType *dao_type__opaque_pthread_attr_t;
extern DaoType *dao_type_sigval;
extern DaoType *dao_type_timeval;
extern DaoType *dao_type___sFILE;
extern DaoType *dao_type_gsl_complex_long_double;
extern DaoType *dao_type_gsl_complex;
extern DaoType *dao_type_gsl_complex_float;
extern DaoType *dao_type_gsl_block_long_double_struct;
extern DaoType *dao_type_gsl_vector_long_double;
extern DaoType *dao_type__gsl_vector_long_double_view;
extern DaoType *dao_type__gsl_vector_long_double_const_view;
extern DaoType *dao_type_gsl_block_complex_long_double_struct;
extern DaoType *dao_type_gsl_vector_complex_long_double;
extern DaoType *dao_type__gsl_vector_complex_long_double_view;
extern DaoType *dao_type__gsl_vector_complex_long_double_const_view;
extern DaoType *dao_type_gsl_block_struct;
extern DaoType *dao_type_gsl_vector;
extern DaoType *dao_type__gsl_vector_view;
extern DaoType *dao_type__gsl_vector_const_view;
extern DaoType *dao_type_gsl_block_complex_struct;
extern DaoType *dao_type_gsl_vector_complex;
extern DaoType *dao_type__gsl_vector_complex_view;
extern DaoType *dao_type__gsl_vector_complex_const_view;
extern DaoType *dao_type_gsl_block_float_struct;
extern DaoType *dao_type_gsl_vector_float;
extern DaoType *dao_type__gsl_vector_float_view;
extern DaoType *dao_type__gsl_vector_float_const_view;
extern DaoType *dao_type_gsl_block_complex_float_struct;
extern DaoType *dao_type_gsl_vector_complex_float;
extern DaoType *dao_type__gsl_vector_complex_float_view;
extern DaoType *dao_type__gsl_vector_complex_float_const_view;
extern DaoType *dao_type_gsl_block_ulong_struct;
extern DaoType *dao_type_gsl_vector_ulong;
extern DaoType *dao_type__gsl_vector_ulong_view;
extern DaoType *dao_type__gsl_vector_ulong_const_view;
extern DaoType *dao_type_gsl_block_long_struct;
extern DaoType *dao_type_gsl_vector_long;
extern DaoType *dao_type__gsl_vector_long_view;
extern DaoType *dao_type__gsl_vector_long_const_view;
extern DaoType *dao_type_gsl_block_uint_struct;
extern DaoType *dao_type_gsl_vector_uint;
extern DaoType *dao_type__gsl_vector_uint_view;
extern DaoType *dao_type__gsl_vector_uint_const_view;
extern DaoType *dao_type_gsl_block_int_struct;
extern DaoType *dao_type_gsl_vector_int;
extern DaoType *dao_type__gsl_vector_int_view;
extern DaoType *dao_type__gsl_vector_int_const_view;
extern DaoType *dao_type_gsl_block_ushort_struct;
extern DaoType *dao_type_gsl_vector_ushort;
extern DaoType *dao_type__gsl_vector_ushort_view;
extern DaoType *dao_type__gsl_vector_ushort_const_view;
extern DaoType *dao_type_gsl_block_short_struct;
extern DaoType *dao_type_gsl_vector_short;
extern DaoType *dao_type__gsl_vector_short_view;
extern DaoType *dao_type__gsl_vector_short_const_view;
extern DaoType *dao_type_gsl_block_uchar_struct;
extern DaoType *dao_type_gsl_vector_uchar;
extern DaoType *dao_type__gsl_vector_uchar_view;
extern DaoType *dao_type__gsl_vector_uchar_const_view;
extern DaoType *dao_type_gsl_block_char_struct;
extern DaoType *dao_type_gsl_vector_char;
extern DaoType *dao_type__gsl_vector_char_view;
extern DaoType *dao_type__gsl_vector_char_const_view;
extern DaoType *dao_type_gsl_matrix_complex_long_double;
extern DaoType *dao_type__gsl_matrix_complex_long_double_view;
extern DaoType *dao_type__gsl_matrix_complex_long_double_const_view;
extern DaoType *dao_type_gsl_matrix_complex;
extern DaoType *dao_type__gsl_matrix_complex_view;
extern DaoType *dao_type__gsl_matrix_complex_const_view;
extern DaoType *dao_type_gsl_matrix_complex_float;
extern DaoType *dao_type__gsl_matrix_complex_float_view;
extern DaoType *dao_type__gsl_matrix_complex_float_const_view;
extern DaoType *dao_type_gsl_matrix_long_double;
extern DaoType *dao_type__gsl_matrix_long_double_view;
extern DaoType *dao_type__gsl_matrix_long_double_const_view;
extern DaoType *dao_type_gsl_matrix;
extern DaoType *dao_type__gsl_matrix_view;
extern DaoType *dao_type__gsl_matrix_const_view;
extern DaoType *dao_type_gsl_matrix_float;
extern DaoType *dao_type__gsl_matrix_float_view;
extern DaoType *dao_type__gsl_matrix_float_const_view;
extern DaoType *dao_type_gsl_matrix_ulong;
extern DaoType *dao_type__gsl_matrix_ulong_view;
extern DaoType *dao_type__gsl_matrix_ulong_const_view;
extern DaoType *dao_type_gsl_matrix_long;
extern DaoType *dao_type__gsl_matrix_long_view;
extern DaoType *dao_type__gsl_matrix_long_const_view;
extern DaoType *dao_type_gsl_matrix_uint;
extern DaoType *dao_type__gsl_matrix_uint_view;
extern DaoType *dao_type__gsl_matrix_uint_const_view;
extern DaoType *dao_type_gsl_matrix_int;
extern DaoType *dao_type__gsl_matrix_int_view;
extern DaoType *dao_type__gsl_matrix_int_const_view;
extern DaoType *dao_type_gsl_matrix_ushort;
extern DaoType *dao_type__gsl_matrix_ushort_view;
extern DaoType *dao_type__gsl_matrix_ushort_const_view;
extern DaoType *dao_type_gsl_matrix_short;
extern DaoType *dao_type__gsl_matrix_short_view;
extern DaoType *dao_type__gsl_matrix_short_const_view;
extern DaoType *dao_type_gsl_matrix_uchar;
extern DaoType *dao_type__gsl_matrix_uchar_view;
extern DaoType *dao_type__gsl_matrix_uchar_const_view;
extern DaoType *dao_type_gsl_matrix_char;
extern DaoType *dao_type__gsl_matrix_char_view;
extern DaoType *dao_type__gsl_matrix_char_const_view;
extern DaoType *dao_type_gsl_function_struct;
extern DaoType *dao_type_gsl_function_fdf_struct;
extern DaoType *dao_type_gsl_function_vec_struct;
extern DaoType *dao_type_gsl_bspline_workspace;
extern DaoType *dao_type_gsl_bspline_deriv_workspace;
extern DaoType *dao_type_gsl_cheb_series_struct;
extern DaoType *dao_type_gsl_combination_struct;
extern DaoType *dao_type_gsl_dht_struct;
extern DaoType *dao_type_gsl_eigen_symm_workspace;
extern DaoType *dao_type_gsl_eigen_symmv_workspace;
extern DaoType *dao_type_gsl_eigen_herm_workspace;
extern DaoType *dao_type_gsl_eigen_hermv_workspace;
extern DaoType *dao_type_gsl_eigen_francis_workspace;
extern DaoType *dao_type_gsl_eigen_nonsymm_workspace;
extern DaoType *dao_type_gsl_eigen_nonsymmv_workspace;
extern DaoType *dao_type_gsl_eigen_gensymm_workspace;
extern DaoType *dao_type_gsl_eigen_gensymmv_workspace;
extern DaoType *dao_type_gsl_eigen_genherm_workspace;
extern DaoType *dao_type_gsl_eigen_genhermv_workspace;
extern DaoType *dao_type_gsl_eigen_gen_workspace;
extern DaoType *dao_type_gsl_eigen_genv_workspace;
extern DaoType *dao_type_gsl_fft_complex_wavetable;
extern DaoType *dao_type_gsl_fft_complex_workspace;
extern DaoType *dao_type_gsl_fft_complex_wavetable_float;
extern DaoType *dao_type_gsl_fft_complex_workspace_float;
extern DaoType *dao_type_gsl_fft_real_wavetable;
extern DaoType *dao_type_gsl_fft_real_workspace;
extern DaoType *dao_type_gsl_fft_halfcomplex_wavetable;
extern DaoType *dao_type_gsl_fft_real_wavetable_float;
extern DaoType *dao_type_gsl_fft_real_workspace_float;
extern DaoType *dao_type_gsl_fft_halfcomplex_wavetable_float;
extern DaoType *dao_type_gsl_permutation_struct;
extern DaoType *dao_type_gsl_histogram;
extern DaoType *dao_type_gsl_histogram_pdf;
extern DaoType *dao_type_gsl_histogram2d;
extern DaoType *dao_type_gsl_histogram2d_pdf;
extern DaoType *dao_type_gsl_ieee_float_rep;
extern DaoType *dao_type_gsl_ieee_double_rep;
extern DaoType *dao_type_gsl_integration_workspace;
extern DaoType *dao_type_gsl_integration_qaws_table;
extern DaoType *dao_type_gsl_integration_qawo_table;
extern DaoType *dao_type_gsl_integration_glfixed_table;
extern DaoType *dao_type_gsl_integration_cquad_ival;
extern DaoType *dao_type_gsl_integration_cquad_workspace;
extern DaoType *dao_type_gsl_interp_accel;
extern DaoType *dao_type_gsl_interp_type;
extern DaoType *dao_type_gsl_interp;
extern DaoType *dao_type_gsl_min_fminimizer_type;
extern DaoType *dao_type_gsl_min_fminimizer;
extern DaoType *dao_type_gsl_monte_function_struct;
extern DaoType *dao_type_gsl_rng_type;
extern DaoType *dao_type_gsl_rng;
extern DaoType *dao_type_gsl_monte_plain_state;
extern DaoType *dao_type_gsl_monte_miser_state;
extern DaoType *dao_type_gsl_monte_miser_params;
extern DaoType *dao_type_gsl_monte_vegas_state;
extern DaoType *dao_type_gsl_monte_vegas_params;
extern DaoType *dao_type_gsl_multifit_linear_workspace;
extern DaoType *dao_type_gsl_multifit_robust_type;
extern DaoType *dao_type_gsl_multifit_robust_stats;
extern DaoType *dao_type_gsl_multifit_robust_workspace;
extern DaoType *dao_type_gsl_multifit_function_struct;
extern DaoType *dao_type_gsl_multifit_fsolver_type;
extern DaoType *dao_type_gsl_multifit_fsolver;
extern DaoType *dao_type_gsl_multifit_function_fdf_struct;
extern DaoType *dao_type_gsl_multifit_fdfsolver_type;
extern DaoType *dao_type_gsl_multifit_fdfsolver;
extern DaoType *dao_type_gsl_multimin_function_struct;
extern DaoType *dao_type_gsl_multimin_function_fdf_struct;
extern DaoType *dao_type_gsl_multimin_fminimizer_type;
extern DaoType *dao_type_gsl_multimin_fminimizer;
extern DaoType *dao_type_gsl_multimin_fdfminimizer_type;
extern DaoType *dao_type_gsl_multimin_fdfminimizer;
extern DaoType *dao_type_gsl_multiroot_function_struct;
extern DaoType *dao_type_gsl_multiroot_fsolver_type;
extern DaoType *dao_type_gsl_multiroot_fsolver;
extern DaoType *dao_type_gsl_multiroot_function_fdf_struct;
extern DaoType *dao_type_gsl_multiroot_fdfsolver_type;
extern DaoType *dao_type_gsl_multiroot_fdfsolver;
extern DaoType *dao_type_gsl_multiset_struct;
extern DaoType *dao_type_gsl_ntuple;
extern DaoType *dao_type_gsl_ntuple_select_fn;
extern DaoType *dao_type_gsl_ntuple_value_fn;
extern DaoType *dao_type_gsl_odeiv_system;
extern DaoType *dao_type_gsl_odeiv_step_type;
extern DaoType *dao_type_gsl_odeiv_step;
extern DaoType *dao_type_gsl_odeiv_control_type;
extern DaoType *dao_type_gsl_odeiv_control;
extern DaoType *dao_type_gsl_odeiv_evolve;
extern DaoType *dao_type_gsl_odeiv2_system;
extern DaoType *dao_type_gsl_odeiv2_step_struct;
extern DaoType *dao_type_gsl_odeiv2_control_struct;
extern DaoType *dao_type_gsl_odeiv2_evolve_struct;
extern DaoType *dao_type_gsl_odeiv2_driver_struct;
extern DaoType *dao_type_gsl_odeiv2_step_type;
extern DaoType *dao_type_gsl_odeiv2_control_type;
extern DaoType *dao_type_gsl_poly_complex_workspace;
extern DaoType *dao_type_gsl_qrng_type;
extern DaoType *dao_type_gsl_qrng;
extern DaoType *dao_type_gsl_ran_discrete_t;
extern DaoType *dao_type_gsl_root_fsolver_type;
extern DaoType *dao_type_gsl_root_fsolver;
extern DaoType *dao_type_gsl_root_fdfsolver_type;
extern DaoType *dao_type_gsl_root_fdfsolver;
extern DaoType *dao_type_gsl_sf_result_struct;
extern DaoType *dao_type_gsl_sf_result_e10_struct;
extern DaoType *dao_type_gsl_sf_mathieu_workspace;
extern DaoType *dao_type_gsl_siman_params_t;
extern DaoType *dao_type_gsl_spline;
extern DaoType *dao_type_gsl_sum_levin_u_workspace;
extern DaoType *dao_type_gsl_sum_levin_utrunc_workspace;
extern DaoType *dao_type_gsl_wavelet_type;
extern DaoType *dao_type_gsl_wavelet;
extern DaoType *dao_type_gsl_wavelet_workspace;
#ifdef __cplusplus
}
#endif
gsl_complex_long_double* DAO_DLL_GSL Dao_gsl_complex_long_double_New();
gsl_complex* DAO_DLL_GSL Dao_gsl_complex_New();
gsl_complex_float* DAO_DLL_GSL Dao_gsl_complex_float_New();
struct gsl_block_long_double_struct* DAO_DLL_GSL Dao_gsl_block_long_double_struct_New();
gsl_vector_long_double* DAO_DLL_GSL Dao_gsl_vector_long_double_New();
_gsl_vector_long_double_view* DAO_DLL_GSL Dao__gsl_vector_long_double_view_New();
_gsl_vector_long_double_const_view* DAO_DLL_GSL Dao__gsl_vector_long_double_const_view_New();
struct gsl_block_complex_long_double_struct* DAO_DLL_GSL Dao_gsl_block_complex_long_double_struct_New();
gsl_vector_complex_long_double* DAO_DLL_GSL Dao_gsl_vector_complex_long_double_New();
_gsl_vector_complex_long_double_view* DAO_DLL_GSL Dao__gsl_vector_complex_long_double_view_New();
_gsl_vector_complex_long_double_const_view* DAO_DLL_GSL Dao__gsl_vector_complex_long_double_const_view_New();
struct gsl_block_struct* DAO_DLL_GSL Dao_gsl_block_struct_New();
gsl_vector* DAO_DLL_GSL Dao_gsl_vector_New();
_gsl_vector_view* DAO_DLL_GSL Dao__gsl_vector_view_New();
_gsl_vector_const_view* DAO_DLL_GSL Dao__gsl_vector_const_view_New();
struct gsl_block_complex_struct* DAO_DLL_GSL Dao_gsl_block_complex_struct_New();
gsl_vector_complex* DAO_DLL_GSL Dao_gsl_vector_complex_New();
_gsl_vector_complex_view* DAO_DLL_GSL Dao__gsl_vector_complex_view_New();
_gsl_vector_complex_const_view* DAO_DLL_GSL Dao__gsl_vector_complex_const_view_New();
struct gsl_block_float_struct* DAO_DLL_GSL Dao_gsl_block_float_struct_New();
gsl_vector_float* DAO_DLL_GSL Dao_gsl_vector_float_New();
_gsl_vector_float_view* DAO_DLL_GSL Dao__gsl_vector_float_view_New();
_gsl_vector_float_const_view* DAO_DLL_GSL Dao__gsl_vector_float_const_view_New();
struct gsl_block_complex_float_struct* DAO_DLL_GSL Dao_gsl_block_complex_float_struct_New();
gsl_vector_complex_float* DAO_DLL_GSL Dao_gsl_vector_complex_float_New();
_gsl_vector_complex_float_view* DAO_DLL_GSL Dao__gsl_vector_complex_float_view_New();
_gsl_vector_complex_float_const_view* DAO_DLL_GSL Dao__gsl_vector_complex_float_const_view_New();
struct gsl_block_ulong_struct* DAO_DLL_GSL Dao_gsl_block_ulong_struct_New();
gsl_vector_ulong* DAO_DLL_GSL Dao_gsl_vector_ulong_New();
_gsl_vector_ulong_view* DAO_DLL_GSL Dao__gsl_vector_ulong_view_New();
_gsl_vector_ulong_const_view* DAO_DLL_GSL Dao__gsl_vector_ulong_const_view_New();
struct gsl_block_long_struct* DAO_DLL_GSL Dao_gsl_block_long_struct_New();
gsl_vector_long* DAO_DLL_GSL Dao_gsl_vector_long_New();
_gsl_vector_long_view* DAO_DLL_GSL Dao__gsl_vector_long_view_New();
_gsl_vector_long_const_view* DAO_DLL_GSL Dao__gsl_vector_long_const_view_New();
struct gsl_block_uint_struct* DAO_DLL_GSL Dao_gsl_block_uint_struct_New();
gsl_vector_uint* DAO_DLL_GSL Dao_gsl_vector_uint_New();
_gsl_vector_uint_view* DAO_DLL_GSL Dao__gsl_vector_uint_view_New();
_gsl_vector_uint_const_view* DAO_DLL_GSL Dao__gsl_vector_uint_const_view_New();
struct gsl_block_int_struct* DAO_DLL_GSL Dao_gsl_block_int_struct_New();
gsl_vector_int* DAO_DLL_GSL Dao_gsl_vector_int_New();
_gsl_vector_int_view* DAO_DLL_GSL Dao__gsl_vector_int_view_New();
_gsl_vector_int_const_view* DAO_DLL_GSL Dao__gsl_vector_int_const_view_New();
struct gsl_block_ushort_struct* DAO_DLL_GSL Dao_gsl_block_ushort_struct_New();
gsl_vector_ushort* DAO_DLL_GSL Dao_gsl_vector_ushort_New();
_gsl_vector_ushort_view* DAO_DLL_GSL Dao__gsl_vector_ushort_view_New();
_gsl_vector_ushort_const_view* DAO_DLL_GSL Dao__gsl_vector_ushort_const_view_New();
struct gsl_block_short_struct* DAO_DLL_GSL Dao_gsl_block_short_struct_New();
gsl_vector_short* DAO_DLL_GSL Dao_gsl_vector_short_New();
_gsl_vector_short_view* DAO_DLL_GSL Dao__gsl_vector_short_view_New();
_gsl_vector_short_const_view* DAO_DLL_GSL Dao__gsl_vector_short_const_view_New();
struct gsl_block_uchar_struct* DAO_DLL_GSL Dao_gsl_block_uchar_struct_New();
gsl_vector_uchar* DAO_DLL_GSL Dao_gsl_vector_uchar_New();
_gsl_vector_uchar_view* DAO_DLL_GSL Dao__gsl_vector_uchar_view_New();
_gsl_vector_uchar_const_view* DAO_DLL_GSL Dao__gsl_vector_uchar_const_view_New();
struct gsl_block_char_struct* DAO_DLL_GSL Dao_gsl_block_char_struct_New();
gsl_vector_char* DAO_DLL_GSL Dao_gsl_vector_char_New();
_gsl_vector_char_view* DAO_DLL_GSL Dao__gsl_vector_char_view_New();
_gsl_vector_char_const_view* DAO_DLL_GSL Dao__gsl_vector_char_const_view_New();
gsl_matrix_complex_long_double* DAO_DLL_GSL Dao_gsl_matrix_complex_long_double_New();
_gsl_matrix_complex_long_double_view* DAO_DLL_GSL Dao__gsl_matrix_complex_long_double_view_New();
_gsl_matrix_complex_long_double_const_view* DAO_DLL_GSL Dao__gsl_matrix_complex_long_double_const_view_New();
gsl_matrix_complex* DAO_DLL_GSL Dao_gsl_matrix_complex_New();
_gsl_matrix_complex_view* DAO_DLL_GSL Dao__gsl_matrix_complex_view_New();
_gsl_matrix_complex_const_view* DAO_DLL_GSL Dao__gsl_matrix_complex_const_view_New();
gsl_matrix_complex_float* DAO_DLL_GSL Dao_gsl_matrix_complex_float_New();
_gsl_matrix_complex_float_view* DAO_DLL_GSL Dao__gsl_matrix_complex_float_view_New();
_gsl_matrix_complex_float_const_view* DAO_DLL_GSL Dao__gsl_matrix_complex_float_const_view_New();
gsl_matrix_long_double* DAO_DLL_GSL Dao_gsl_matrix_long_double_New();
_gsl_matrix_long_double_view* DAO_DLL_GSL Dao__gsl_matrix_long_double_view_New();
_gsl_matrix_long_double_const_view* DAO_DLL_GSL Dao__gsl_matrix_long_double_const_view_New();
gsl_matrix* DAO_DLL_GSL Dao_gsl_matrix_New();
_gsl_matrix_view* DAO_DLL_GSL Dao__gsl_matrix_view_New();
_gsl_matrix_const_view* DAO_DLL_GSL Dao__gsl_matrix_const_view_New();
gsl_matrix_float* DAO_DLL_GSL Dao_gsl_matrix_float_New();
_gsl_matrix_float_view* DAO_DLL_GSL Dao__gsl_matrix_float_view_New();
_gsl_matrix_float_const_view* DAO_DLL_GSL Dao__gsl_matrix_float_const_view_New();
gsl_matrix_ulong* DAO_DLL_GSL Dao_gsl_matrix_ulong_New();
_gsl_matrix_ulong_view* DAO_DLL_GSL Dao__gsl_matrix_ulong_view_New();
_gsl_matrix_ulong_const_view* DAO_DLL_GSL Dao__gsl_matrix_ulong_const_view_New();
gsl_matrix_long* DAO_DLL_GSL Dao_gsl_matrix_long_New();
_gsl_matrix_long_view* DAO_DLL_GSL Dao__gsl_matrix_long_view_New();
_gsl_matrix_long_const_view* DAO_DLL_GSL Dao__gsl_matrix_long_const_view_New();
gsl_matrix_uint* DAO_DLL_GSL Dao_gsl_matrix_uint_New();
_gsl_matrix_uint_view* DAO_DLL_GSL Dao__gsl_matrix_uint_view_New();
_gsl_matrix_uint_const_view* DAO_DLL_GSL Dao__gsl_matrix_uint_const_view_New();
gsl_matrix_int* DAO_DLL_GSL Dao_gsl_matrix_int_New();
_gsl_matrix_int_view* DAO_DLL_GSL Dao__gsl_matrix_int_view_New();
_gsl_matrix_int_const_view* DAO_DLL_GSL Dao__gsl_matrix_int_const_view_New();
gsl_matrix_ushort* DAO_DLL_GSL Dao_gsl_matrix_ushort_New();
_gsl_matrix_ushort_view* DAO_DLL_GSL Dao__gsl_matrix_ushort_view_New();
_gsl_matrix_ushort_const_view* DAO_DLL_GSL Dao__gsl_matrix_ushort_const_view_New();
gsl_matrix_short* DAO_DLL_GSL Dao_gsl_matrix_short_New();
_gsl_matrix_short_view* DAO_DLL_GSL Dao__gsl_matrix_short_view_New();
_gsl_matrix_short_const_view* DAO_DLL_GSL Dao__gsl_matrix_short_const_view_New();
gsl_matrix_uchar* DAO_DLL_GSL Dao_gsl_matrix_uchar_New();
_gsl_matrix_uchar_view* DAO_DLL_GSL Dao__gsl_matrix_uchar_view_New();
_gsl_matrix_uchar_const_view* DAO_DLL_GSL Dao__gsl_matrix_uchar_const_view_New();
gsl_matrix_char* DAO_DLL_GSL Dao_gsl_matrix_char_New();
_gsl_matrix_char_view* DAO_DLL_GSL Dao__gsl_matrix_char_view_New();
_gsl_matrix_char_const_view* DAO_DLL_GSL Dao__gsl_matrix_char_const_view_New();
typedef struct Dao_gsl_function_struct Dao_gsl_function_struct;
struct DAO_DLL_GSL Dao_gsl_function_struct
{
	struct gsl_function_struct  nested;
	struct gsl_function_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_function_struct* DAO_DLL_GSL Dao_gsl_function_struct_New();
typedef struct Dao_gsl_function_fdf_struct Dao_gsl_function_fdf_struct;
struct DAO_DLL_GSL Dao_gsl_function_fdf_struct
{
	struct gsl_function_fdf_struct  nested;
	struct gsl_function_fdf_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_function_fdf_struct* DAO_DLL_GSL Dao_gsl_function_fdf_struct_New();
typedef struct Dao_gsl_function_vec_struct Dao_gsl_function_vec_struct;
struct DAO_DLL_GSL Dao_gsl_function_vec_struct
{
	struct gsl_function_vec_struct  nested;
	struct gsl_function_vec_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_function_vec_struct* DAO_DLL_GSL Dao_gsl_function_vec_struct_New();
gsl_bspline_workspace* DAO_DLL_GSL Dao_gsl_bspline_workspace_New();
gsl_bspline_deriv_workspace* DAO_DLL_GSL Dao_gsl_bspline_deriv_workspace_New();
struct gsl_cheb_series_struct* DAO_DLL_GSL Dao_gsl_cheb_series_struct_New();
struct gsl_combination_struct* DAO_DLL_GSL Dao_gsl_combination_struct_New();
struct gsl_dht_struct* DAO_DLL_GSL Dao_gsl_dht_struct_New();
gsl_eigen_symm_workspace* DAO_DLL_GSL Dao_gsl_eigen_symm_workspace_New();
gsl_eigen_symmv_workspace* DAO_DLL_GSL Dao_gsl_eigen_symmv_workspace_New();
gsl_eigen_herm_workspace* DAO_DLL_GSL Dao_gsl_eigen_herm_workspace_New();
gsl_eigen_hermv_workspace* DAO_DLL_GSL Dao_gsl_eigen_hermv_workspace_New();
gsl_eigen_francis_workspace* DAO_DLL_GSL Dao_gsl_eigen_francis_workspace_New();
gsl_eigen_nonsymm_workspace* DAO_DLL_GSL Dao_gsl_eigen_nonsymm_workspace_New();
gsl_eigen_nonsymmv_workspace* DAO_DLL_GSL Dao_gsl_eigen_nonsymmv_workspace_New();
gsl_eigen_gensymm_workspace* DAO_DLL_GSL Dao_gsl_eigen_gensymm_workspace_New();
gsl_eigen_gensymmv_workspace* DAO_DLL_GSL Dao_gsl_eigen_gensymmv_workspace_New();
gsl_eigen_genherm_workspace* DAO_DLL_GSL Dao_gsl_eigen_genherm_workspace_New();
gsl_eigen_genhermv_workspace* DAO_DLL_GSL Dao_gsl_eigen_genhermv_workspace_New();
gsl_eigen_gen_workspace* DAO_DLL_GSL Dao_gsl_eigen_gen_workspace_New();
gsl_eigen_genv_workspace* DAO_DLL_GSL Dao_gsl_eigen_genv_workspace_New();
gsl_fft_complex_wavetable* DAO_DLL_GSL Dao_gsl_fft_complex_wavetable_New();
gsl_fft_complex_workspace* DAO_DLL_GSL Dao_gsl_fft_complex_workspace_New();
gsl_fft_complex_wavetable_float* DAO_DLL_GSL Dao_gsl_fft_complex_wavetable_float_New();
gsl_fft_complex_workspace_float* DAO_DLL_GSL Dao_gsl_fft_complex_workspace_float_New();
gsl_fft_real_wavetable* DAO_DLL_GSL Dao_gsl_fft_real_wavetable_New();
gsl_fft_real_workspace* DAO_DLL_GSL Dao_gsl_fft_real_workspace_New();
gsl_fft_halfcomplex_wavetable* DAO_DLL_GSL Dao_gsl_fft_halfcomplex_wavetable_New();
gsl_fft_real_wavetable_float* DAO_DLL_GSL Dao_gsl_fft_real_wavetable_float_New();
gsl_fft_real_workspace_float* DAO_DLL_GSL Dao_gsl_fft_real_workspace_float_New();
gsl_fft_halfcomplex_wavetable_float* DAO_DLL_GSL Dao_gsl_fft_halfcomplex_wavetable_float_New();
struct gsl_permutation_struct* DAO_DLL_GSL Dao_gsl_permutation_struct_New();
gsl_histogram* DAO_DLL_GSL Dao_gsl_histogram_New();
gsl_histogram_pdf* DAO_DLL_GSL Dao_gsl_histogram_pdf_New();
gsl_histogram2d* DAO_DLL_GSL Dao_gsl_histogram2d_New();
gsl_histogram2d_pdf* DAO_DLL_GSL Dao_gsl_histogram2d_pdf_New();
gsl_ieee_float_rep* DAO_DLL_GSL Dao_gsl_ieee_float_rep_New();
gsl_ieee_double_rep* DAO_DLL_GSL Dao_gsl_ieee_double_rep_New();
gsl_integration_workspace* DAO_DLL_GSL Dao_gsl_integration_workspace_New();
gsl_integration_qaws_table* DAO_DLL_GSL Dao_gsl_integration_qaws_table_New();
gsl_integration_qawo_table* DAO_DLL_GSL Dao_gsl_integration_qawo_table_New();
gsl_integration_glfixed_table* DAO_DLL_GSL Dao_gsl_integration_glfixed_table_New();
gsl_integration_cquad_ival* DAO_DLL_GSL Dao_gsl_integration_cquad_ival_New();
gsl_integration_cquad_workspace* DAO_DLL_GSL Dao_gsl_integration_cquad_workspace_New();
gsl_interp_accel* DAO_DLL_GSL Dao_gsl_interp_accel_New();
typedef struct Dao_gsl_interp_type Dao_gsl_interp_type;
struct DAO_DLL_GSL Dao_gsl_interp_type
{
	gsl_interp_type  nested;
	gsl_interp_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_interp_type* DAO_DLL_GSL Dao_gsl_interp_type_New();
gsl_interp* DAO_DLL_GSL Dao_gsl_interp_New();
typedef struct Dao_gsl_min_fminimizer_type Dao_gsl_min_fminimizer_type;
struct DAO_DLL_GSL Dao_gsl_min_fminimizer_type
{
	gsl_min_fminimizer_type  nested;
	gsl_min_fminimizer_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_min_fminimizer_type* DAO_DLL_GSL Dao_gsl_min_fminimizer_type_New();
gsl_min_fminimizer* DAO_DLL_GSL Dao_gsl_min_fminimizer_New();
typedef struct Dao_gsl_monte_function_struct Dao_gsl_monte_function_struct;
struct DAO_DLL_GSL Dao_gsl_monte_function_struct
{
	struct gsl_monte_function_struct  nested;
	struct gsl_monte_function_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_monte_function_struct* DAO_DLL_GSL Dao_gsl_monte_function_struct_New();
typedef struct Dao_gsl_rng_type Dao_gsl_rng_type;
struct DAO_DLL_GSL Dao_gsl_rng_type
{
	gsl_rng_type  nested;
	gsl_rng_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_rng_type* DAO_DLL_GSL Dao_gsl_rng_type_New();
gsl_rng* DAO_DLL_GSL Dao_gsl_rng_New();
gsl_monte_plain_state* DAO_DLL_GSL Dao_gsl_monte_plain_state_New();
gsl_monte_miser_state* DAO_DLL_GSL Dao_gsl_monte_miser_state_New();
gsl_monte_miser_params* DAO_DLL_GSL Dao_gsl_monte_miser_params_New();
gsl_monte_vegas_state* DAO_DLL_GSL Dao_gsl_monte_vegas_state_New();
gsl_monte_vegas_params* DAO_DLL_GSL Dao_gsl_monte_vegas_params_New();
gsl_multifit_linear_workspace* DAO_DLL_GSL Dao_gsl_multifit_linear_workspace_New();
typedef struct Dao_gsl_multifit_robust_type Dao_gsl_multifit_robust_type;
struct DAO_DLL_GSL Dao_gsl_multifit_robust_type
{
	gsl_multifit_robust_type  nested;
	gsl_multifit_robust_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_multifit_robust_type* DAO_DLL_GSL Dao_gsl_multifit_robust_type_New();
gsl_multifit_robust_stats* DAO_DLL_GSL Dao_gsl_multifit_robust_stats_New();
gsl_multifit_robust_workspace* DAO_DLL_GSL Dao_gsl_multifit_robust_workspace_New();
typedef struct Dao_gsl_multifit_function_struct Dao_gsl_multifit_function_struct;
struct DAO_DLL_GSL Dao_gsl_multifit_function_struct
{
	struct gsl_multifit_function_struct  nested;
	struct gsl_multifit_function_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_multifit_function_struct* DAO_DLL_GSL Dao_gsl_multifit_function_struct_New();
typedef struct Dao_gsl_multifit_fsolver_type Dao_gsl_multifit_fsolver_type;
struct DAO_DLL_GSL Dao_gsl_multifit_fsolver_type
{
	gsl_multifit_fsolver_type  nested;
	gsl_multifit_fsolver_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_multifit_fsolver_type* DAO_DLL_GSL Dao_gsl_multifit_fsolver_type_New();
gsl_multifit_fsolver* DAO_DLL_GSL Dao_gsl_multifit_fsolver_New();
typedef struct Dao_gsl_multifit_function_fdf_struct Dao_gsl_multifit_function_fdf_struct;
struct DAO_DLL_GSL Dao_gsl_multifit_function_fdf_struct
{
	struct gsl_multifit_function_fdf_struct  nested;
	struct gsl_multifit_function_fdf_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_multifit_function_fdf_struct* DAO_DLL_GSL Dao_gsl_multifit_function_fdf_struct_New();
typedef struct Dao_gsl_multifit_fdfsolver_type Dao_gsl_multifit_fdfsolver_type;
struct DAO_DLL_GSL Dao_gsl_multifit_fdfsolver_type
{
	gsl_multifit_fdfsolver_type  nested;
	gsl_multifit_fdfsolver_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_multifit_fdfsolver_type* DAO_DLL_GSL Dao_gsl_multifit_fdfsolver_type_New();
gsl_multifit_fdfsolver* DAO_DLL_GSL Dao_gsl_multifit_fdfsolver_New();
typedef struct Dao_gsl_multimin_function_struct Dao_gsl_multimin_function_struct;
struct DAO_DLL_GSL Dao_gsl_multimin_function_struct
{
	struct gsl_multimin_function_struct  nested;
	struct gsl_multimin_function_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_multimin_function_struct* DAO_DLL_GSL Dao_gsl_multimin_function_struct_New();
typedef struct Dao_gsl_multimin_function_fdf_struct Dao_gsl_multimin_function_fdf_struct;
struct DAO_DLL_GSL Dao_gsl_multimin_function_fdf_struct
{
	struct gsl_multimin_function_fdf_struct  nested;
	struct gsl_multimin_function_fdf_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_multimin_function_fdf_struct* DAO_DLL_GSL Dao_gsl_multimin_function_fdf_struct_New();
typedef struct Dao_gsl_multimin_fminimizer_type Dao_gsl_multimin_fminimizer_type;
struct DAO_DLL_GSL Dao_gsl_multimin_fminimizer_type
{
	gsl_multimin_fminimizer_type  nested;
	gsl_multimin_fminimizer_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_multimin_fminimizer_type* DAO_DLL_GSL Dao_gsl_multimin_fminimizer_type_New();
gsl_multimin_fminimizer* DAO_DLL_GSL Dao_gsl_multimin_fminimizer_New();
typedef struct Dao_gsl_multimin_fdfminimizer_type Dao_gsl_multimin_fdfminimizer_type;
struct DAO_DLL_GSL Dao_gsl_multimin_fdfminimizer_type
{
	gsl_multimin_fdfminimizer_type  nested;
	gsl_multimin_fdfminimizer_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_multimin_fdfminimizer_type* DAO_DLL_GSL Dao_gsl_multimin_fdfminimizer_type_New();
gsl_multimin_fdfminimizer* DAO_DLL_GSL Dao_gsl_multimin_fdfminimizer_New();
typedef struct Dao_gsl_multiroot_function_struct Dao_gsl_multiroot_function_struct;
struct DAO_DLL_GSL Dao_gsl_multiroot_function_struct
{
	struct gsl_multiroot_function_struct  nested;
	struct gsl_multiroot_function_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_multiroot_function_struct* DAO_DLL_GSL Dao_gsl_multiroot_function_struct_New();
typedef struct Dao_gsl_multiroot_fsolver_type Dao_gsl_multiroot_fsolver_type;
struct DAO_DLL_GSL Dao_gsl_multiroot_fsolver_type
{
	gsl_multiroot_fsolver_type  nested;
	gsl_multiroot_fsolver_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_multiroot_fsolver_type* DAO_DLL_GSL Dao_gsl_multiroot_fsolver_type_New();
gsl_multiroot_fsolver* DAO_DLL_GSL Dao_gsl_multiroot_fsolver_New();
typedef struct Dao_gsl_multiroot_function_fdf_struct Dao_gsl_multiroot_function_fdf_struct;
struct DAO_DLL_GSL Dao_gsl_multiroot_function_fdf_struct
{
	struct gsl_multiroot_function_fdf_struct  nested;
	struct gsl_multiroot_function_fdf_struct *object;
	DaoCdata *_cdata;
};
Dao_gsl_multiroot_function_fdf_struct* DAO_DLL_GSL Dao_gsl_multiroot_function_fdf_struct_New();
typedef struct Dao_gsl_multiroot_fdfsolver_type Dao_gsl_multiroot_fdfsolver_type;
struct DAO_DLL_GSL Dao_gsl_multiroot_fdfsolver_type
{
	gsl_multiroot_fdfsolver_type  nested;
	gsl_multiroot_fdfsolver_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_multiroot_fdfsolver_type* DAO_DLL_GSL Dao_gsl_multiroot_fdfsolver_type_New();
gsl_multiroot_fdfsolver* DAO_DLL_GSL Dao_gsl_multiroot_fdfsolver_New();
struct gsl_multiset_struct* DAO_DLL_GSL Dao_gsl_multiset_struct_New();
gsl_ntuple* DAO_DLL_GSL Dao_gsl_ntuple_New();
typedef struct Dao_gsl_ntuple_select_fn Dao_gsl_ntuple_select_fn;
struct DAO_DLL_GSL Dao_gsl_ntuple_select_fn
{
	gsl_ntuple_select_fn  nested;
	gsl_ntuple_select_fn *object;
	DaoCdata *_cdata;
};
Dao_gsl_ntuple_select_fn* DAO_DLL_GSL Dao_gsl_ntuple_select_fn_New();
typedef struct Dao_gsl_ntuple_value_fn Dao_gsl_ntuple_value_fn;
struct DAO_DLL_GSL Dao_gsl_ntuple_value_fn
{
	gsl_ntuple_value_fn  nested;
	gsl_ntuple_value_fn *object;
	DaoCdata *_cdata;
};
Dao_gsl_ntuple_value_fn* DAO_DLL_GSL Dao_gsl_ntuple_value_fn_New();
static int Dao_gsl_odeiv_system_function( double t, const double* y, double* dydt, void* params );
static int Dao_gsl_odeiv_system_jacobian( double t, const double* y, double* dfdy, double* dydt, void* params );
typedef struct Dao_gsl_odeiv_system Dao_gsl_odeiv_system;
struct DAO_DLL_GSL Dao_gsl_odeiv_system
{
	gsl_odeiv_system  nested;
	gsl_odeiv_system *object;
	DaoCdata *_cdata;
};
Dao_gsl_odeiv_system* DAO_DLL_GSL Dao_gsl_odeiv_system_New();
typedef struct Dao_gsl_odeiv_step_type Dao_gsl_odeiv_step_type;
struct DAO_DLL_GSL Dao_gsl_odeiv_step_type
{
	gsl_odeiv_step_type  nested;
	gsl_odeiv_step_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_odeiv_step_type* DAO_DLL_GSL Dao_gsl_odeiv_step_type_New();
gsl_odeiv_step* DAO_DLL_GSL Dao_gsl_odeiv_step_New();
typedef struct Dao_gsl_odeiv_control_type Dao_gsl_odeiv_control_type;
struct DAO_DLL_GSL Dao_gsl_odeiv_control_type
{
	gsl_odeiv_control_type  nested;
	gsl_odeiv_control_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_odeiv_control_type* DAO_DLL_GSL Dao_gsl_odeiv_control_type_New();
gsl_odeiv_control* DAO_DLL_GSL Dao_gsl_odeiv_control_New();
gsl_odeiv_evolve* DAO_DLL_GSL Dao_gsl_odeiv_evolve_New();
typedef struct Dao_gsl_odeiv2_system Dao_gsl_odeiv2_system;
struct DAO_DLL_GSL Dao_gsl_odeiv2_system
{
	gsl_odeiv2_system  nested;
	gsl_odeiv2_system *object;
	DaoCdata *_cdata;
};
Dao_gsl_odeiv2_system* DAO_DLL_GSL Dao_gsl_odeiv2_system_New();
struct gsl_odeiv2_step_struct* DAO_DLL_GSL Dao_gsl_odeiv2_step_struct_New();
struct gsl_odeiv2_control_struct* DAO_DLL_GSL Dao_gsl_odeiv2_control_struct_New();
struct gsl_odeiv2_evolve_struct* DAO_DLL_GSL Dao_gsl_odeiv2_evolve_struct_New();
struct gsl_odeiv2_driver_struct* DAO_DLL_GSL Dao_gsl_odeiv2_driver_struct_New();
typedef struct Dao_gsl_odeiv2_step_type Dao_gsl_odeiv2_step_type;
struct DAO_DLL_GSL Dao_gsl_odeiv2_step_type
{
	gsl_odeiv2_step_type  nested;
	gsl_odeiv2_step_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_odeiv2_step_type* DAO_DLL_GSL Dao_gsl_odeiv2_step_type_New();
typedef struct Dao_gsl_odeiv2_control_type Dao_gsl_odeiv2_control_type;
struct DAO_DLL_GSL Dao_gsl_odeiv2_control_type
{
	gsl_odeiv2_control_type  nested;
	gsl_odeiv2_control_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_odeiv2_control_type* DAO_DLL_GSL Dao_gsl_odeiv2_control_type_New();
gsl_poly_complex_workspace* DAO_DLL_GSL Dao_gsl_poly_complex_workspace_New();
typedef struct Dao_gsl_qrng_type Dao_gsl_qrng_type;
struct DAO_DLL_GSL Dao_gsl_qrng_type
{
	gsl_qrng_type  nested;
	gsl_qrng_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_qrng_type* DAO_DLL_GSL Dao_gsl_qrng_type_New();
gsl_qrng* DAO_DLL_GSL Dao_gsl_qrng_New();
gsl_ran_discrete_t* DAO_DLL_GSL Dao_gsl_ran_discrete_t_New();
typedef struct Dao_gsl_root_fsolver_type Dao_gsl_root_fsolver_type;
struct DAO_DLL_GSL Dao_gsl_root_fsolver_type
{
	gsl_root_fsolver_type  nested;
	gsl_root_fsolver_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_root_fsolver_type* DAO_DLL_GSL Dao_gsl_root_fsolver_type_New();
gsl_root_fsolver* DAO_DLL_GSL Dao_gsl_root_fsolver_New();
typedef struct Dao_gsl_root_fdfsolver_type Dao_gsl_root_fdfsolver_type;
struct DAO_DLL_GSL Dao_gsl_root_fdfsolver_type
{
	gsl_root_fdfsolver_type  nested;
	gsl_root_fdfsolver_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_root_fdfsolver_type* DAO_DLL_GSL Dao_gsl_root_fdfsolver_type_New();
gsl_root_fdfsolver* DAO_DLL_GSL Dao_gsl_root_fdfsolver_New();
struct gsl_sf_result_struct* DAO_DLL_GSL Dao_gsl_sf_result_struct_New();
struct gsl_sf_result_e10_struct* DAO_DLL_GSL Dao_gsl_sf_result_e10_struct_New();
gsl_sf_mathieu_workspace* DAO_DLL_GSL Dao_gsl_sf_mathieu_workspace_New();
gsl_siman_params_t* DAO_DLL_GSL Dao_gsl_siman_params_t_New();
gsl_spline* DAO_DLL_GSL Dao_gsl_spline_New();
gsl_sum_levin_u_workspace* DAO_DLL_GSL Dao_gsl_sum_levin_u_workspace_New();
gsl_sum_levin_utrunc_workspace* DAO_DLL_GSL Dao_gsl_sum_levin_utrunc_workspace_New();
typedef struct Dao_gsl_wavelet_type Dao_gsl_wavelet_type;
struct DAO_DLL_GSL Dao_gsl_wavelet_type
{
	gsl_wavelet_type  nested;
	gsl_wavelet_type *object;
	DaoCdata *_cdata;
};
Dao_gsl_wavelet_type* DAO_DLL_GSL Dao_gsl_wavelet_type_New();
gsl_wavelet* DAO_DLL_GSL Dao_gsl_wavelet_New();
gsl_wavelet_workspace* DAO_DLL_GSL Dao_gsl_wavelet_workspace_New();
#ifdef __cplusplus
extern "C"{
#endif
#ifdef __cplusplus
}
#endif
#endif
