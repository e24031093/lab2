#include "a.h"
player::player(){score=0;}
player::player(float x){setScore(x);}
void	player::setScore(float x){score=x;}
float	player::getScore(){return score;}
