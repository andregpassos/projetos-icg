#include "main.h"
#include <stdio.h>
#include <vector>

//-----------------------------------------------------------------------------
void MyGlDraw(void)
{
	//*************************************************************************
	// Chame aqui as fun��es do mygl.h
	//*************************************************************************

    std::vector<int> color1, color2, color3, color4;

    //Vetores que guardam as componentes RGBA de cada cor.

    color1.push_back(255);
	color1.push_back(0);
	color1.push_back(0);
	color1.push_back(1);

	color2.push_back(0);
	color2.push_back(255);
	color2.push_back(0);
	color2.push_back(1);

	color3.push_back(0);
	color3.push_back(0);
	color3.push_back(255);
	color3.push_back(1);

	color4.push_back(255);
	color4.push_back(255);
	color4.push_back(255);
	color4.push_back(255);

    int a, b, c, d;
    int x, y, z, t;

    for(a = 0; a < 100; a++){
       for(x = 0; x < 100; x++){
            putPixel(a, x, color1);
            x++;
       }
    a++;
    }

    for(b = 101; b < 200; b++){
       for(y = 0; y < 100; y++){
            putPixel(b, y, color2);
            y++;
       }
    b++;
    }

    for(c = 201; c < 300; c++){
       for(z = 0; z < 100; z++){
            putPixel(c, z, color3);
            z++;
       }
    c++;
    }

    for(d = 301; d < 400; d++){
       for(t = 0; t < 100; t++){
            putPixel(d, t, color4);
            t++;
       }
    d++;
    }

    //drawLine(1,1,100,100);

}

//-----------------------------------------------------------------------------
int main(int argc, char **argv)
{
	// Inicializa��es.
	InitOpenGL(&argc, argv);
	InitCallBacks();
	InitDataStructures();

	// Ajusta a fun��o que chama as fun��es do mygl.h
	DrawFunc = MyGlDraw;

	// Framebuffer scan loop.
	glutMainLoop();

	return 0;
}

