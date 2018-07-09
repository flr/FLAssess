#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _FLVPA(SEXP, SEXP, SEXP, SEXP);
extern SEXP FLSepVPA(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_FLVPA",   (DL_FUNC) &_FLVPA,   4},
    {"FLSepVPA", (DL_FUNC) &FLSepVPA, 3},
    {NULL, NULL, 0}
};

void R_init_FLAssess(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
