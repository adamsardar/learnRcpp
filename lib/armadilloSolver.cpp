#include <RcppArmadillo.h>

// [[Rcpp::depends(RcppArmadillo)]]

// [[Rcpp::export]]
arma::vec getSymEigenValues(arma::mat M) {
    return arma::eig_sym(M);
}