#include "ft.h"

void parser()
{
    t v;
    a a;
    switch (v.cp[v.store])
    {
        case 'fd' : case 'forward':
            v.type = 1;
            a.dist = v.cp[v.store+1];
            break;
        case 'right' : case 'rt':
            v.type = 3;
            a.way = 1;
            break;
        case 'backward' : case 'bk':
            v.type = 2;
            a.way = 2;
            break;
        case 'left' : case 'lt' :
            v.type = 4;   
            break;
        case 'clearscreen' : case 'cs' :
            v.type = 5;
            a.way = 3;
            break;
		default : ;
    }
}

