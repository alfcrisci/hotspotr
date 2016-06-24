// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_ac_stats
Rcpp::NumericVector rcpp_ac_stats(Rcpp::List nbs, Rcpp::NumericVector x, std::string ac_type);
RcppExport SEXP hotspotr_rcpp_ac_stats(SEXP nbsSEXP, SEXP xSEXP, SEXP ac_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type nbs(nbsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type ac_type(ac_typeSEXP);
    __result = Rcpp::wrap(rcpp_ac_stats(nbs, x, ac_type));
    return __result;
END_RCPP
}
// rcpp_get_neighbours
Rcpp::List rcpp_get_neighbours(Rcpp::NumericVector x, Rcpp::NumericVector y);
RcppExport SEXP hotspotr_rcpp_get_neighbours(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    __result = Rcpp::wrap(rcpp_get_neighbours(x, y));
    return __result;
END_RCPP
}
// rcpp_ives
Rcpp::NumericVector rcpp_ives(Rcpp::List nbs, int nt, double alpha_t, double alpha_s, Rcpp::NumericVector svec, Rcpp::NumericVector rvec);
RcppExport SEXP hotspotr_rcpp_ives(SEXP nbsSEXP, SEXP ntSEXP, SEXP alpha_tSEXP, SEXP alpha_sSEXP, SEXP svecSEXP, SEXP rvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type nbs(nbsSEXP);
    Rcpp::traits::input_parameter< int >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_t(alpha_tSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_s(alpha_sSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type svec(svecSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rvec(rvecSEXP);
    __result = Rcpp::wrap(rcpp_ives(nbs, nt, alpha_t, alpha_s, svec, rvec));
    return __result;
END_RCPP
}
// rcpp_ives_spatial
Rcpp::NumericVector rcpp_ives_spatial(Rcpp::List nbs, int nt, double alpha_t, double alpha_s, Rcpp::NumericVector svec, Rcpp::NumericVector rvec);
RcppExport SEXP hotspotr_rcpp_ives_spatial(SEXP nbsSEXP, SEXP ntSEXP, SEXP alpha_tSEXP, SEXP alpha_sSEXP, SEXP svecSEXP, SEXP rvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type nbs(nbsSEXP);
    Rcpp::traits::input_parameter< int >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_t(alpha_tSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_s(alpha_sSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type svec(svecSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rvec(rvecSEXP);
    __result = Rcpp::wrap(rcpp_ives_spatial(nbs, nt, alpha_t, alpha_s, svec, rvec));
    return __result;
END_RCPP
}
// rcpp_neutral_hotspots
Rcpp::NumericVector rcpp_neutral_hotspots(Rcpp::List nbs, double alpha_t, double alpha_s, double sd0, int nt);
RcppExport SEXP hotspotr_rcpp_neutral_hotspots(SEXP nbsSEXP, SEXP alpha_tSEXP, SEXP alpha_sSEXP, SEXP sd0SEXP, SEXP ntSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type nbs(nbsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_t(alpha_tSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_s(alpha_sSEXP);
    Rcpp::traits::input_parameter< double >::type sd0(sd0SEXP);
    Rcpp::traits::input_parameter< int >::type nt(ntSEXP);
    __result = Rcpp::wrap(rcpp_neutral_hotspots(nbs, alpha_t, alpha_s, sd0, nt));
    return __result;
END_RCPP
}
// rcpp_neutral_hotspots_ntests
Rcpp::NumericMatrix rcpp_neutral_hotspots_ntests(Rcpp::List nbs, double alpha_t, double alpha_s, double sd0, int nt, int ntests, std::string ac_type);
RcppExport SEXP hotspotr_rcpp_neutral_hotspots_ntests(SEXP nbsSEXP, SEXP alpha_tSEXP, SEXP alpha_sSEXP, SEXP sd0SEXP, SEXP ntSEXP, SEXP ntestsSEXP, SEXP ac_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type nbs(nbsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_t(alpha_tSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_s(alpha_sSEXP);
    Rcpp::traits::input_parameter< double >::type sd0(sd0SEXP);
    Rcpp::traits::input_parameter< int >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< int >::type ntests(ntestsSEXP);
    Rcpp::traits::input_parameter< std::string >::type ac_type(ac_typeSEXP);
    __result = Rcpp::wrap(rcpp_neutral_hotspots_ntests(nbs, alpha_t, alpha_s, sd0, nt, ntests, ac_type));
    return __result;
END_RCPP
}
