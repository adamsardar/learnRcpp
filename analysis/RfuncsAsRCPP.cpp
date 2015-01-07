#include <Rcpp.h>
using namespace Rcpp;

// These functions equate to the functions reffered to in Hadley Wickham's advanced R chapter

// [[Rcpp::export]]
bool allC(LogicalVector input){
  
  for(int i =0; i < input.size(); ++i){
    
    if(input[i]){return true;}
  }
  
  return false;
}

// [[Rcpp::export]]
double cumprodC(NumericVector vec1){
  
  double out = 0.0;
  
  for(NumericVector::iterator iter = vec1.begin(); iter != vec1.end(); ++iter){
    
    if(out < *iter){out = *iter;}
  }
  
  return out;
}

// [[Rcpp::export]]
double cumminC(NumericVector vec1){
  
  double out = 0.0;
  
  for(NumericVector::iterator iter = vec1.begin(); iter != vec1.end(); ++iter){
    
    if(out > *iter){out = *iter;}
  }
  
  return out;
}


// [[Rcpp::export]]
NumericVector diffC(NumericVector series, int lagDiff){
  
  NumericVector laggedSeries(series.size() - lagDiff);
    
  for(int laggedIndex =0; laggedIndex < laggedSeries.size(); ++laggedIndex){
    
    laggedSeries[laggedIndex] = series[laggedIndex] - series[laggedIndex+lagDiff];
  }
  
  return laggedSeries;
}




