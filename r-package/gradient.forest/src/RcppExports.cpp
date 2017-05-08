// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// custom_train
Rcpp::List custom_train(Rcpp::NumericMatrix input_data, size_t outcome_index, Rcpp::RawMatrix sparse_data, std::vector <std::string> variable_names, unsigned int mtry, unsigned int num_trees, bool verbose, unsigned int num_threads, unsigned int min_node_size, bool sample_with_replacement, bool keep_inbag, double sample_fraction, std::vector<size_t> no_split_variables, unsigned int seed, bool honesty, unsigned int ci_group_size);
RcppExport SEXP gradient_forest_custom_train(SEXP input_dataSEXP, SEXP outcome_indexSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP mtrySEXP, SEXP num_treesSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP min_node_sizeSEXP, SEXP sample_with_replacementSEXP, SEXP keep_inbagSEXP, SEXP sample_fractionSEXP, SEXP no_split_variablesSEXP, SEXP seedSEXP, SEXP honestySEXP, SEXP ci_group_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< size_t >::type outcome_index(outcome_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type min_node_size(min_node_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_with_replacement(sample_with_replacementSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_inbag(keep_inbagSEXP);
    Rcpp::traits::input_parameter< double >::type sample_fraction(sample_fractionSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type no_split_variables(no_split_variablesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type honesty(honestySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ci_group_size(ci_group_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(custom_train(input_data, outcome_index, sparse_data, variable_names, mtry, num_trees, verbose, num_threads, min_node_size, sample_with_replacement, keep_inbag, sample_fraction, no_split_variables, seed, honesty, ci_group_size));
    return rcpp_result_gen;
END_RCPP
}
// custom_predict
Rcpp::NumericMatrix custom_predict(Rcpp::List forest, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector<std::string> variable_names, unsigned int num_threads);
RcppExport SEXP gradient_forest_custom_predict(SEXP forestSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(custom_predict(forest, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// custom_predict_oob
Rcpp::NumericMatrix custom_predict_oob(Rcpp::List forest, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector<std::string> variable_names, unsigned int num_threads);
RcppExport SEXP gradient_forest_custom_predict_oob(SEXP forestSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(custom_predict_oob(forest, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// instrumental_train
Rcpp::List instrumental_train(Rcpp::NumericMatrix input_data, size_t outcome_index, size_t treatment_index, size_t instrument_index, Rcpp::RawMatrix sparse_data, std::vector<std::string> variable_names, unsigned int mtry, unsigned int num_trees, bool verbose, unsigned int num_threads, unsigned int min_node_size, bool sample_with_replacement, bool keep_inbag, double sample_fraction, std::vector<size_t> no_split_variables, unsigned int seed, bool honesty, unsigned int ci_group_size, double split_regularization);
RcppExport SEXP gradient_forest_instrumental_train(SEXP input_dataSEXP, SEXP outcome_indexSEXP, SEXP treatment_indexSEXP, SEXP instrument_indexSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP mtrySEXP, SEXP num_treesSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP min_node_sizeSEXP, SEXP sample_with_replacementSEXP, SEXP keep_inbagSEXP, SEXP sample_fractionSEXP, SEXP no_split_variablesSEXP, SEXP seedSEXP, SEXP honestySEXP, SEXP ci_group_sizeSEXP, SEXP split_regularizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< size_t >::type outcome_index(outcome_indexSEXP);
    Rcpp::traits::input_parameter< size_t >::type treatment_index(treatment_indexSEXP);
    Rcpp::traits::input_parameter< size_t >::type instrument_index(instrument_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type min_node_size(min_node_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_with_replacement(sample_with_replacementSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_inbag(keep_inbagSEXP);
    Rcpp::traits::input_parameter< double >::type sample_fraction(sample_fractionSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type no_split_variables(no_split_variablesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type honesty(honestySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ci_group_size(ci_group_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type split_regularization(split_regularizationSEXP);
    rcpp_result_gen = Rcpp::wrap(instrumental_train(input_data, outcome_index, treatment_index, instrument_index, sparse_data, variable_names, mtry, num_trees, verbose, num_threads, min_node_size, sample_with_replacement, keep_inbag, sample_fraction, no_split_variables, seed, honesty, ci_group_size, split_regularization));
    return rcpp_result_gen;
END_RCPP
}
// instrumental_predict
Rcpp::List instrumental_predict(Rcpp::List forest, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector <std::string> variable_names, unsigned int num_threads, unsigned int ci_group_size);
RcppExport SEXP gradient_forest_instrumental_predict(SEXP forestSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP, SEXP ci_group_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ci_group_size(ci_group_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(instrumental_predict(forest, input_data, sparse_data, variable_names, num_threads, ci_group_size));
    return rcpp_result_gen;
END_RCPP
}
// instrumental_predict_oob
Rcpp::List instrumental_predict_oob(Rcpp::List forest, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector <std::string> variable_names, unsigned int num_threads);
RcppExport SEXP gradient_forest_instrumental_predict_oob(SEXP forestSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(instrumental_predict_oob(forest, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// quantile_train
Rcpp::List quantile_train(std::vector<double> quantiles, Rcpp::NumericMatrix input_data, size_t outcome_index, Rcpp::RawMatrix sparse_data, std::vector<std::string> variable_names, unsigned int mtry, unsigned int num_trees, bool verbose, int num_threads, int min_node_size, bool sample_with_replacement, bool keep_inbag, double sample_fraction, std::vector<size_t> no_split_variables, unsigned int seed, bool honesty, unsigned int ci_group_size);
RcppExport SEXP gradient_forest_quantile_train(SEXP quantilesSEXP, SEXP input_dataSEXP, SEXP outcome_indexSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP mtrySEXP, SEXP num_treesSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP min_node_sizeSEXP, SEXP sample_with_replacementSEXP, SEXP keep_inbagSEXP, SEXP sample_fractionSEXP, SEXP no_split_variablesSEXP, SEXP seedSEXP, SEXP honestySEXP, SEXP ci_group_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type quantiles(quantilesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< size_t >::type outcome_index(outcome_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< int >::type min_node_size(min_node_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_with_replacement(sample_with_replacementSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_inbag(keep_inbagSEXP);
    Rcpp::traits::input_parameter< double >::type sample_fraction(sample_fractionSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type no_split_variables(no_split_variablesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type honesty(honestySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ci_group_size(ci_group_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(quantile_train(quantiles, input_data, outcome_index, sparse_data, variable_names, mtry, num_trees, verbose, num_threads, min_node_size, sample_with_replacement, keep_inbag, sample_fraction, no_split_variables, seed, honesty, ci_group_size));
    return rcpp_result_gen;
END_RCPP
}
// quantile_predict
Rcpp::NumericMatrix quantile_predict(Rcpp::List forest, std::vector<double> quantiles, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector <std::string> variable_names, unsigned int num_threads);
RcppExport SEXP gradient_forest_quantile_predict(SEXP forestSEXP, SEXP quantilesSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type quantiles(quantilesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(quantile_predict(forest, quantiles, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// quantile_predict_oob
Rcpp::NumericMatrix quantile_predict_oob(Rcpp::List forest, std::vector<double> quantiles, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector <std::string> variable_names, unsigned int num_threads);
RcppExport SEXP gradient_forest_quantile_predict_oob(SEXP forestSEXP, SEXP quantilesSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type quantiles(quantilesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(quantile_predict_oob(forest, quantiles, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// regression_train
Rcpp::List regression_train(Rcpp::NumericMatrix input_data, size_t outcome_index, Rcpp::RawMatrix sparse_data, std::vector <std::string> variable_names, unsigned int mtry, unsigned int num_trees, bool verbose, unsigned int num_threads, unsigned int min_node_size, bool sample_with_replacement, bool keep_inbag, double sample_fraction, std::vector<size_t> no_split_variables, unsigned int seed, bool honesty, unsigned int ci_group_size);
RcppExport SEXP gradient_forest_regression_train(SEXP input_dataSEXP, SEXP outcome_indexSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP mtrySEXP, SEXP num_treesSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP min_node_sizeSEXP, SEXP sample_with_replacementSEXP, SEXP keep_inbagSEXP, SEXP sample_fractionSEXP, SEXP no_split_variablesSEXP, SEXP seedSEXP, SEXP honestySEXP, SEXP ci_group_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< size_t >::type outcome_index(outcome_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type min_node_size(min_node_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_with_replacement(sample_with_replacementSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_inbag(keep_inbagSEXP);
    Rcpp::traits::input_parameter< double >::type sample_fraction(sample_fractionSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type no_split_variables(no_split_variablesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type honesty(honestySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ci_group_size(ci_group_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(regression_train(input_data, outcome_index, sparse_data, variable_names, mtry, num_trees, verbose, num_threads, min_node_size, sample_with_replacement, keep_inbag, sample_fraction, no_split_variables, seed, honesty, ci_group_size));
    return rcpp_result_gen;
END_RCPP
}
// regression_predict
Rcpp::NumericMatrix regression_predict(Rcpp::List forest, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector<std::string> variable_names, unsigned int num_threads);
RcppExport SEXP gradient_forest_regression_predict(SEXP forestSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(regression_predict(forest, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// regression_predict_oob
Rcpp::NumericMatrix regression_predict_oob(Rcpp::List forest, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector<std::string> variable_names, unsigned int num_threads);
RcppExport SEXP gradient_forest_regression_predict_oob(SEXP forestSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(regression_predict_oob(forest, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}
