#pragma once

// @generated by aten/src/ATen/gen.py

#include <ATen/Context.h>
#include <c10/core/ScalarType.h>
#include <c10/core/TensorOptions.h>

namespace c10 {
class Scalar;
}
namespace at {
struct Generator;
class Tensor;
struct Type;
} // namespace at

namespace at {
namespace native {
namespace legacy {
namespace cuda {

Tensor & _th_set_(Tensor & self, Storage source, int64_t storage_offset, IntArrayRef size, IntArrayRef stride);
Tensor & _th_set_(Tensor & self, const Tensor & source);
Tensor & _th_masked_fill_(Tensor & self, const Tensor & mask, Scalar value);
Tensor & s__th_masked_fill_(Tensor & self, const Tensor & mask, Scalar value);
Tensor & _th_masked_fill_bool_(Tensor & self, const Tensor & mask, Scalar value);
Tensor & s__th_masked_fill_bool_(Tensor & self, const Tensor & mask, Scalar value);
Tensor & _th_masked_scatter_(Tensor & self, const Tensor & mask, const Tensor & source);
Tensor & s__th_masked_scatter_(Tensor & self, const Tensor & mask, const Tensor & source);
Tensor & _th_masked_scatter_bool_(Tensor & self, const Tensor & mask, const Tensor & source);
Tensor & s__th_masked_scatter_bool_(Tensor & self, const Tensor & mask, const Tensor & source);
Tensor & _th_masked_select_out(Tensor & result, const Tensor & self, const Tensor & mask);
Tensor & s__th_masked_select_out(Tensor & result, const Tensor & self, const Tensor & mask);
Tensor _th_masked_select(const Tensor & self, const Tensor & mask);
Tensor s__th_masked_select(const Tensor & self, const Tensor & mask);
Tensor & _th_masked_select_bool_out(Tensor & result, const Tensor & self, const Tensor & mask);
Tensor & s__th_masked_select_bool_out(Tensor & result, const Tensor & self, const Tensor & mask);
Tensor _th_masked_select_bool(const Tensor & self, const Tensor & mask);
Tensor s__th_masked_select_bool(const Tensor & self, const Tensor & mask);
Tensor & _th_nonzero_out(Tensor & result, const Tensor & self);
Tensor _th_nonzero(const Tensor & self);
Tensor _th_clone(const Tensor & self);
Tensor & _th_index_select_out(Tensor & result, const Tensor & self, int64_t dim, const Tensor & index);
Tensor _th_index_select(const Tensor & self, int64_t dim, const Tensor & index);
Tensor & _th_index_copy_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & source);
Tensor & _th_take_out(Tensor & result, const Tensor & self, const Tensor & index);
Tensor _th_take(const Tensor & self, const Tensor & index);
Tensor & _th_put_(Tensor & self, const Tensor & index, const Tensor & source, bool accumulate);
Tensor & _th_index_add_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & source);
Tensor & _th_index_fill_(Tensor & self, int64_t dim, const Tensor & index, Scalar value);
Tensor & _th_scatter_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & src);
Tensor & _th_scatter_(Tensor & self, int64_t dim, const Tensor & index, Scalar value);
Tensor & _th_scatter_add_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & src);
Tensor & _th_gather_out(Tensor & result, const Tensor & self, int64_t dim, const Tensor & index);
Tensor _th_gather(const Tensor & self, int64_t dim, const Tensor & index);
bool _th_equal(const Tensor & self, const Tensor & other);
Tensor & _th_or_out(Tensor & result, const Tensor & self, Scalar other);
Tensor _th_or(const Tensor & self, Scalar other);
Tensor & _th_or_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor & s__th_or_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor _th_or(const Tensor & self, const Tensor & other);
Tensor s__th_or(const Tensor & self, const Tensor & other);
Tensor & _th_ior_(Tensor & self, Scalar other);
Tensor & _th_ior_(Tensor & self, const Tensor & other);
Tensor & s__th_ior_(Tensor & self, const Tensor & other);
Tensor & _th_lshift_out(Tensor & result, const Tensor & self, Scalar other);
Tensor _th_lshift(const Tensor & self, Scalar other);
Tensor & _th_lshift_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor & s__th_lshift_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor _th_lshift(const Tensor & self, const Tensor & other);
Tensor s__th_lshift(const Tensor & self, const Tensor & other);
Tensor & _th_ilshift_(Tensor & self, Scalar other);
Tensor & _th_ilshift_(Tensor & self, const Tensor & other);
Tensor & s__th_ilshift_(Tensor & self, const Tensor & other);
Tensor & _th_rshift_out(Tensor & result, const Tensor & self, Scalar other);
Tensor _th_rshift(const Tensor & self, Scalar other);
Tensor & _th_rshift_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor & s__th_rshift_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor _th_rshift(const Tensor & self, const Tensor & other);
Tensor s__th_rshift(const Tensor & self, const Tensor & other);
Tensor & _th_irshift_(Tensor & self, Scalar other);
Tensor & _th_irshift_(Tensor & self, const Tensor & other);
Tensor & s__th_irshift_(Tensor & self, const Tensor & other);
Tensor & _th_min_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor & s__th_min_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor _th_min(const Tensor & self, const Tensor & other);
Tensor s__th_min(const Tensor & self, const Tensor & other);
Tensor _th_min(const Tensor & self);
std::tuple<Tensor &,Tensor &> _th_min_out(Tensor & min, Tensor & min_indices, const Tensor & self, int64_t dim, bool keepdim);
std::tuple<Tensor,Tensor> _th_min(const Tensor & self, int64_t dim, bool keepdim);
Tensor & _th_max_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor & s__th_max_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor _th_max(const Tensor & self, const Tensor & other);
Tensor s__th_max(const Tensor & self, const Tensor & other);
Tensor _th_max(const Tensor & self);
std::tuple<Tensor &,Tensor &> _th_max_out(Tensor & max, Tensor & max_indices, const Tensor & self, int64_t dim, bool keepdim);
std::tuple<Tensor,Tensor> _th_max(const Tensor & self, int64_t dim, bool keepdim);
std::tuple<Tensor &,Tensor &> _th_mode_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t dim, bool keepdim);
std::tuple<Tensor,Tensor> _th_mode(const Tensor & self, int64_t dim, bool keepdim);
std::tuple<Tensor &,Tensor &> _th_sort_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t dim, bool descending);
std::tuple<Tensor,Tensor> _th_sort(const Tensor & self, int64_t dim, bool descending);
std::tuple<Tensor &,Tensor &> _th_topk_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t k, int64_t dim, bool largest, bool sorted);
std::tuple<Tensor,Tensor> _th_topk(const Tensor & self, int64_t k, int64_t dim, bool largest, bool sorted);
Tensor & _th_exp_out(Tensor & result, const Tensor & self);
Tensor _th_exp(const Tensor & self);
Tensor & _th_cos_out(Tensor & result, const Tensor & self);
Tensor _th_cos(const Tensor & self);
Tensor & _th_cosh_out(Tensor & result, const Tensor & self);
Tensor _th_cosh(const Tensor & self);
Tensor & _th_tan_out(Tensor & result, const Tensor & self);
Tensor _th_tan(const Tensor & self);
Tensor & _th_atan_out(Tensor & result, const Tensor & self);
Tensor _th_atan(const Tensor & self);
Tensor & _th_tanh_out(Tensor & result, const Tensor & self);
Tensor _th_tanh(const Tensor & self);
Tensor & _th_erf_out(Tensor & result, const Tensor & self);
Tensor _th_erf(const Tensor & self);
Tensor & _th_erfc_out(Tensor & result, const Tensor & self);
Tensor _th_erfc(const Tensor & self);
Tensor _th_var(const Tensor & self, bool unbiased);
Tensor _th_std(const Tensor & self, bool unbiased);
Tensor & _th_renorm_out(Tensor & result, const Tensor & self, Scalar p, int64_t dim, Scalar maxnorm);
Tensor _th_renorm(const Tensor & self, Scalar p, int64_t dim, Scalar maxnorm);
Tensor & _th_renorm_(Tensor & self, Scalar p, int64_t dim, Scalar maxnorm);
Tensor _th_dist(const Tensor & self, const Tensor & other, Scalar p);
Tensor s__th_dist(const Tensor & self, const Tensor & other, Scalar p);
Tensor & _th_cumsum_out(Tensor & result, const Tensor & self, int64_t dim);
Tensor _th_cumsum(const Tensor & self, int64_t dim);
Tensor & _th_cumprod_out(Tensor & result, const Tensor & self, int64_t dim);
Tensor _th_cumprod(const Tensor & self, int64_t dim);
Tensor _th_trace(const Tensor & self);
Tensor & _th_fmod_out(Tensor & result, const Tensor & self, Scalar other);
Tensor _th_fmod(const Tensor & self, Scalar other);
Tensor & _th_fmod_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor & s__th_fmod_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor _th_fmod(const Tensor & self, const Tensor & other);
Tensor s__th_fmod(const Tensor & self, const Tensor & other);
Tensor & _th_fmod_(Tensor & self, Scalar other);
Tensor & _th_fmod_(Tensor & self, const Tensor & other);
Tensor & s__th_fmod_(Tensor & self, const Tensor & other);
Tensor & _th_remainder_out(Tensor & result, const Tensor & self, Scalar other);
Tensor _th_remainder(const Tensor & self, Scalar other);
Tensor & _th_remainder_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor & s__th_remainder_out(Tensor & result, const Tensor & self, const Tensor & other);
Tensor _th_remainder(const Tensor & self, const Tensor & other);
Tensor s__th_remainder(const Tensor & self, const Tensor & other);
Tensor & _th_remainder_(Tensor & self, Scalar other);
Tensor & _th_remainder_(Tensor & self, const Tensor & other);
Tensor & s__th_remainder_(Tensor & self, const Tensor & other);
Tensor & _th_clamp_out(Tensor & result, const Tensor & self, Scalar min, Scalar max);
Tensor _th_clamp(const Tensor & self, Scalar min, Scalar max);
Tensor & _th_clamp_min_out(Tensor & result, const Tensor & self, Scalar min);
Tensor _th_clamp_min(const Tensor & self, Scalar min);
Tensor & _th_clamp_max_out(Tensor & result, const Tensor & self, Scalar max);
Tensor _th_clamp_max(const Tensor & self, Scalar max);
Tensor _th_dot(const Tensor & self, const Tensor & tensor);
Tensor & _th_cross_kernel_out(Tensor & result, const Tensor & self, const Tensor & other, int64_t dim);
Tensor _th_cross_kernel(const Tensor & self, const Tensor & other, int64_t dim);
Tensor & _th_diag_out(Tensor & result, const Tensor & self, int64_t diagonal);
Tensor _th_diag(const Tensor & self, int64_t diagonal);
Tensor & _th_addmm_out(Tensor & result, const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
Tensor & s__th_addmm_out(Tensor & result, const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
Tensor _th_addmm(const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
Tensor s__th_addmm(const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
Tensor & _th_addmm_(Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
Tensor & _th_addmv_out(Tensor & result, const Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha);
Tensor & s__th_addmv_out(Tensor & result, const Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha);
Tensor _th_addmv(const Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha);
Tensor s__th_addmv(const Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha);
Tensor & _th_addmv_(Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha);
Tensor & _th_addr_out(Tensor & result, const Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha);
Tensor & s__th_addr_out(Tensor & result, const Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha);
Tensor _th_addr(const Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha);
Tensor s__th_addr(const Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha);
Tensor & _th_addr_(Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha);
Tensor & _th_ger_out(Tensor & result, const Tensor & self, const Tensor & vec2);
Tensor _th_ger(const Tensor & self, const Tensor & vec2);
Tensor & _th_mv_out(Tensor & result, const Tensor & self, const Tensor & vec);
Tensor _th_mv(const Tensor & self, const Tensor & vec);
Tensor & _th_mm_out(Tensor & result, const Tensor & self, const Tensor & mat2);
Tensor _th_mm(const Tensor & self, const Tensor & mat2);
Tensor & _th_bmm_out(Tensor & result, const Tensor & self, const Tensor & mat2);
Tensor _th_bmm(const Tensor & self, const Tensor & mat2);
Tensor & _th_addbmm_out(Tensor & result, const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
Tensor & s__th_addbmm_out(Tensor & result, const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
Tensor _th_addbmm(const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
Tensor s__th_addbmm(const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
Tensor & _th_addbmm_(Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
Tensor & _th_baddbmm_out(Tensor & result, const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
Tensor & s__th_baddbmm_out(Tensor & result, const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
Tensor _th_baddbmm(const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
Tensor s__th_baddbmm(const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
std::tuple<Tensor &,Tensor &> _th_gels_out(Tensor & res1, Tensor & res2, const Tensor & self, const Tensor & A);
std::tuple<Tensor,Tensor> _th_gels(const Tensor & self, const Tensor & A);
std::tuple<Tensor &,Tensor &> _th_eig_out(Tensor & res1, Tensor & res2, const Tensor & self, bool eigenvectors);
std::tuple<Tensor,Tensor> _th_eig(const Tensor & self, bool eigenvectors);
Tensor & _th_potri_out(Tensor & output, const Tensor & self, bool upper);
Tensor _th_potri(const Tensor & self, bool upper);
std::tuple<Tensor &,Tensor &> _th_geqrf_out(Tensor & res1, Tensor & res2, const Tensor & self);
std::tuple<Tensor,Tensor> _th_geqrf(const Tensor & self);
std::tuple<Tensor &,Tensor &> _th_multinomial_alias_setup_out(Tensor & J, Tensor & q, const Tensor & probs);
std::tuple<Tensor,Tensor> _th_multinomial_alias_setup(const Tensor & probs);
Tensor & _th_multinomial_alias_draw_out(Tensor & result, const Tensor & q, const Tensor & J, int64_t num_samples, Generator * generator);
Tensor _th_multinomial_alias_draw(const Tensor & q, const Tensor & J, int64_t num_samples, Generator * generator);
Tensor & _th_copy_ignoring_overlaps_(Tensor & self, const Tensor & src);
Tensor & _th_cat_out(Tensor & self, TensorList tensors, int64_t dim);
Tensor _th_cat(TensorList tensors, int64_t dim);
Tensor & _thnn_binary_cross_entropy_forward_out(Tensor & output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction);
Tensor _thnn_binary_cross_entropy_forward(const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction);
Tensor & _thnn_binary_cross_entropy_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction);
Tensor _thnn_binary_cross_entropy_backward(const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction);
Tensor & _thnn_multi_margin_loss_forward_out(Tensor & output, const Tensor & self, const Tensor & target, Scalar p, Scalar margin, const Tensor & weight, int64_t reduction);
Tensor _thnn_multi_margin_loss_forward(const Tensor & self, const Tensor & target, Scalar p, Scalar margin, const Tensor & weight, int64_t reduction);
Tensor & _thnn_multi_margin_loss_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, const Tensor & target, Scalar p, Scalar margin, const Tensor & weight, int64_t reduction);
Tensor _thnn_multi_margin_loss_backward(const Tensor & grad_output, const Tensor & self, const Tensor & target, Scalar p, Scalar margin, const Tensor & weight, int64_t reduction);
std::tuple<Tensor &,Tensor &> _thnn_multilabel_margin_loss_forward_out(Tensor & output, Tensor & is_target, const Tensor & self, const Tensor & target, int64_t reduction);
std::tuple<Tensor,Tensor> _thnn_multilabel_margin_loss_forward(const Tensor & self, const Tensor & target, int64_t reduction);
Tensor & _thnn_multilabel_margin_loss_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, const Tensor & target, int64_t reduction, const Tensor & is_target);
Tensor _thnn_multilabel_margin_loss_backward(const Tensor & grad_output, const Tensor & self, const Tensor & target, int64_t reduction, const Tensor & is_target);
std::tuple<Tensor &,Tensor &> _thnn_nll_loss_forward_out(Tensor & output, Tensor & total_weight, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index);
std::tuple<Tensor,Tensor> _thnn_nll_loss_forward(const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index);
Tensor & _thnn_nll_loss_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index, const Tensor & total_weight);
Tensor _thnn_nll_loss_backward(const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index, const Tensor & total_weight);
std::tuple<Tensor &,Tensor &> _thnn_nll_loss2d_forward_out(Tensor & output, Tensor & total_weight, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index);
std::tuple<Tensor,Tensor> _thnn_nll_loss2d_forward(const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index);
Tensor & _thnn_nll_loss2d_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index, const Tensor & total_weight);
Tensor _thnn_nll_loss2d_backward(const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index, const Tensor & total_weight);
Tensor & _thnn_glu_forward_out(Tensor & output, const Tensor & self, int64_t dim);
Tensor _thnn_glu_forward(const Tensor & self, int64_t dim);
Tensor & _thnn_glu_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, int64_t dim);
Tensor _thnn_glu_backward(const Tensor & grad_output, const Tensor & self, int64_t dim);
std::tuple<Tensor &,Tensor &> _thnn_log_sigmoid_forward_out(Tensor & output, Tensor & buffer, const Tensor & self);
std::tuple<Tensor,Tensor> _thnn_log_sigmoid_forward(const Tensor & self);
Tensor & _thnn_log_sigmoid_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, const Tensor & buffer);
Tensor _thnn_log_sigmoid_backward(const Tensor & grad_output, const Tensor & self, const Tensor & buffer);
Tensor & _thnn_rrelu_with_noise_forward_out(Tensor & output, const Tensor & self, const Tensor & noise, Scalar lower, Scalar upper, bool training, Generator * generator);
Tensor _thnn_rrelu_with_noise_forward(const Tensor & self, const Tensor & noise, Scalar lower, Scalar upper, bool training, Generator * generator);
Tensor & _thnn_rrelu_with_noise_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, const Tensor & noise, Scalar lower, Scalar upper, bool training);
Tensor _thnn_rrelu_with_noise_backward(const Tensor & grad_output, const Tensor & self, const Tensor & noise, Scalar lower, Scalar upper, bool training);
Tensor & _thnn_rrelu_with_noise_forward_(Tensor & self, const Tensor & noise, Scalar lower, Scalar upper, bool training, Generator * generator);
Tensor & _thnn_softplus_forward_out(Tensor & output, const Tensor & self, Scalar beta, Scalar threshold);
Tensor _thnn_softplus_forward(const Tensor & self, Scalar beta, Scalar threshold);
Tensor & _thnn_softplus_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, Scalar beta, Scalar threshold, const Tensor & output);
Tensor _thnn_softplus_backward(const Tensor & grad_output, const Tensor & self, Scalar beta, Scalar threshold, const Tensor & output);
std::tuple<Tensor &,Tensor &,Tensor &> _thnn_conv2d_forward_out(Tensor & output, Tensor & columns, Tensor & ones, const Tensor & self, const Tensor & weight, IntArrayRef kernel_size, const Tensor & bias, IntArrayRef stride, IntArrayRef padding);
std::tuple<Tensor,Tensor,Tensor> _thnn_conv2d_forward(const Tensor & self, const Tensor & weight, IntArrayRef kernel_size, const Tensor & bias, IntArrayRef stride, IntArrayRef padding);
std::tuple<Tensor &,Tensor &,Tensor &> _thnn_conv2d_backward_out(Tensor & grad_input, Tensor & grad_weight, Tensor & grad_bias, const Tensor & grad_output, const Tensor & self, const Tensor & weight, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, const Tensor & columns, const Tensor & ones);
std::tuple<Tensor,Tensor,Tensor> _thnn_conv2d_backward(const Tensor & grad_output, const Tensor & self, const Tensor & weight, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, const Tensor & columns, const Tensor & ones, std::array<bool,3> output_mask);
Tensor & _thnn_conv_depthwise2d_forward_out(Tensor & output, const Tensor & self, const Tensor & weight, IntArrayRef kernel_size, const Tensor & bias, IntArrayRef stride, IntArrayRef padding, IntArrayRef dilation);
Tensor _thnn_conv_depthwise2d_forward(const Tensor & self, const Tensor & weight, IntArrayRef kernel_size, const Tensor & bias, IntArrayRef stride, IntArrayRef padding, IntArrayRef dilation);
std::tuple<Tensor &,Tensor &> _thnn_conv_depthwise2d_backward_out(Tensor & grad_input, Tensor & grad_weight, const Tensor & grad_output, const Tensor & self, const Tensor & weight, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, IntArrayRef dilation);
std::tuple<Tensor,Tensor> _thnn_conv_depthwise2d_backward(const Tensor & grad_output, const Tensor & self, const Tensor & weight, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, IntArrayRef dilation, std::array<bool,2> output_mask);

} // namespace th
} // namespace legacy
} // namespace native
} // namespace at
