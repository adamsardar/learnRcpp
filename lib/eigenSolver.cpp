#include <RcppEigen.h>

// [[Rcpp::depends(RcppEigen)]]

using Eigen::Map;                 // 'maps' rather than copies 
using Eigen::MatrixXd;                  // variable size matrix, double precision
using Eigen::VectorXd;                  // variable size vector, double precision
using Eigen::SelfAdjointEigenSolver;    // one of the eigenvalue solvers
using Eigen::Sparse;

using namespace Rcpp;

// This is a place for me to play with Rcpp. I'm gonna find the first few eigenvalues of a matrix.

// [[Rcpp::export]]
VectorXd getEigenValues(Map<MatrixXd> M) {
    SelfAdjointEigenSolver<MatrixXd> es(M);
    return es.eigenvalues();
}
