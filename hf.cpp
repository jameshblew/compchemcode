#include "alg.h"

/* BASIC SCF LOOP
Calculate H_core, S, (uv|ls)
	H_core_rs = (u|-0.5 * L - Sum_a (Z_a / r_1a)|v)
	          = (u|-0.5 * L|v) - Sum_a ( (u|Z_a / r_1a|v) )
	S_uv = (u|v)
	(uv|ls) = (uv|1 / r_12|ls)
Guess at C <- C_0
{
Form P
	P_uv = 2 * Sum_j (C_uj * C_vj)
Form F
	F_uv = H_core_uv + Sum_l (Sum_s (P_ls * [(uv|ls) - 0.5 * (us|lv)] ))
Calculate E_HF
	E_HF = 0.5 * Sum_u (Sum_v (P_uv * (F_uv + H_core_uv) ))
Solve eigenvalue problem
	Sum_v (F_uv - e_j * S_uv) * c_vj = 0   for u = 1, 2, ..., N_orb
} Repeat if |c_uj - C_uj| < Delta
*/

int main()
{
	return 0;
}
