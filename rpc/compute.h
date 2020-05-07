/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _COMPUTE_H_RPCGEN
#define _COMPUTE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct values {
	float num1;
	float num2;
	char operation;
};
typedef struct values values;

#define compute 123456789
#define compute_vers 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD 1
extern  float * add_1(values *, CLIENT *);
extern  float * add_1_svc(values *, struct svc_req *);
#define SUB 2
extern  float * sub_1(values *, CLIENT *);
extern  float * sub_1_svc(values *, struct svc_req *);
#define MUl 3
extern  float * mul_1(values *, CLIENT *);
extern  float * mul_1_svc(values *, struct svc_req *);
#define DIV 4
extern  float * div_1(values *, CLIENT *);
extern  float * div_1_svc(values *, struct svc_req *);
extern int compute_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD 1
extern  float * add_1();
extern  float * add_1_svc();
#define SUB 2
extern  float * sub_1();
extern  float * sub_1_svc();
#define MUl 3
extern  float * mul_1();
extern  float * mul_1_svc();
#define DIV 4
extern  float * div_1();
extern  float * div_1_svc();
extern int compute_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_values (XDR *, values*);

#else /* K&R C */
extern bool_t xdr_values ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_COMPUTE_H_RPCGEN */