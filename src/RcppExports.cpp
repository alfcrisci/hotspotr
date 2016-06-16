// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_ives2D
Rcpp::NumericMatrix rcpp_ives2D(int size, int nt, double alpha_t, double alpha_s, Rcpp::NumericVector svec, Rcpp::NumericVector rvec);
RcppExport SEXP hotspotr_rcpp_ives2D(SEXP sizeSEXP, SEXP ntSEXP, SEXP alpha_tSEXP, SEXP alpha_sSEXP, SEXP svecSEXP, SEXP rvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_t(alpha_tSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_s(alpha_sSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type svec(svecSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rvec(rvecSEXP);
    __result = Rcpp::wrap(rcpp_ives2D(size, nt, alpha_t, alpha_s, svec, rvec));
    return __result;
END_RCPP
}
// rcpp_neutral1d
Rcpp::NumericVector rcpp_neutral1d(int size, double alpha_t, double alpha_s, int nt, Rcpp::NumericVector yvec);
RcppExport SEXP hotspotr_rcpp_neutral1d(SEXP sizeSEXP, SEXP alpha_tSEXP, SEXP alpha_sSEXP, SEXP ntSEXP, SEXP yvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_t(alpha_tSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_s(alpha_sSEXP);
    Rcpp::traits::input_parameter< int >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yvec(yvecSEXP);
    __result = Rcpp::wrap(rcpp_neutral1d(size, alpha_t, alpha_s, nt, yvec));
    return __result;
END_RCPP
}
// rcpp_neutral2d
Rcpp::NumericMatrix rcpp_neutral2d(int size, double alpha_t, double alpha_s, int nt, Rcpp::NumericMatrix ymat);
RcppExport SEXP hotspotr_rcpp_neutral2d(SEXP sizeSEXP, SEXP alpha_tSEXP, SEXP alpha_sSEXP, SEXP ntSEXP, SEXP ymatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_t(alpha_tSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_s(alpha_sSEXP);
    Rcpp::traits::input_parameter< int >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type ymat(ymatSEXP);
    __result = Rcpp::wrap(rcpp_neutral2d(size, alpha_t, alpha_s, nt, ymat));
    return __result;
END_RCPP
}
