#ifndef _CONVERTOEPS_H_
#define _CONVERTOEPS_H_

#include"types_macros.h"
#include"calcul_contour.h"
#include"image.h"
#include"plus_contours.h"


//void format_eps(Liste_Point L, FILE*f, Image I);
void format_eps_contour(Tableau_Beziers2 Tab, FILE* f, Image I);
void format_eps(Liste_tout_les_Beziers2 L, FILE* f, Image I);






#endif /* _CONVERTOEPS_H_ */
