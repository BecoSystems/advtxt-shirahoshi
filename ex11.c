/* ************************************************************************ *
 *    advtxt-sirahoshi, VERSION 0.1                                         *
 *    Jogo em texto com escolhas de duas variáveis                          *
 *                                                                          *
 *    Copyright (C) 2025 by Julia N. P. Correia/Gabrielle A. Ribeiro        *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *  To contact the author, please write to:                                 *
 *  Name: Julia Nataly Pessoa Correia <jnpc@poli.br>                        *
 *  Webpage: http://beco.poli.br/~username                                  *
 *  Phone: 81989881016                                                      *
 * ************************************************************************ *
 *
 */

#include <stdio.h>

int main()
{
    int opções;

  //Primeira fase
  printf("Você acorda dentro de uma caverna escura e silenciosa.\n");
  printf("A última coisa que vem a sua memória é de desmaiar no chão do seu quarto após achar uma amuleto estranho debaixo da cama\n");
  printf("Uma tocha acesa ilumina francamente duas relíquias sobre um pedestal.\n");
  printf("Uma voz ecoa das paredes:\n");
  printf("Uma escolha trará salvação. A outra, o fim\n");
  printf("\nEscolha uma objeto:\n");
  printf("1.Um relógio de Areia Antigo - Pesa em suas mãos e parece pulsar como uma coração.\n");
  printf("2.Um Espelho Quebrado - suas rachaduras formam padrões estranhos que se mexem sozinhos\n");
  printf("> \n");
  scanf("%i", &opções);

  if (opções == 1)
  {
     printf("\nBoa escolha. O tempo ao redor desacelera e um portal aparece á frente.\n");
  }
  else if (opções == 2)
  {
      printf ("\nVocê vê seu próprio corpo caído no chão...segundos depois de tudo escurecer. Fim.\n");
return 1;
  }

  else
  {
      printf("\nDigite um número válido\n");
return 1;
  }

  //Segunda fase
  printf("A voz novamente ecoa das paredes:\n");
  printf("Você esta diante de outra difícil escolha\n");
  printf("1.Entrar no portal sem hesitar\n");
  printf("Ou...\n");
  printf("2.Parar e examinar a caverna\n");
  printf("\nEscolha qual decisão tomar:\n");
  printf("> \n");
  scanf("%i", &opções);

  if (opções == 1)
  {
      printf("\nEntrar no portal foi a melhor decisão\n");
      printf("Você atravessa um vórtice de luz e acorda no chão do seu quarto\n");
      printf("Você esta vivo, porém, com dúvidas sobre o amuleto rodeando sua cabeça...\n");
return 1;
  }
  else if (opções == 2)
  {
      printf("Assim que você para pra examinar a caverna o chão treme violentamente.\n");
      printf("Você percebe tarde demais que a caverna está colapsando.\n");
      printf("Esse é seu fim.\n");
return 1;
  }
  else
  {
      printf("\nDigite a ação válida\n");
return 1;
  }
  }
